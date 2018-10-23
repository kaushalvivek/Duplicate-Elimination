#include <bits/stdc++.h>
using namespace std;
#define LEX_C(veca, vecb) lexicographical_compare(veca.begin(), veca.end(), \
		vecb.begin(), vecb.end())

int main( int argc,char * argv[])
{

	int count = argc;

	// For invalid cases
	if(count < 5)
	{
		cout<<"Invalid usage\nCorrect Format: <Input file> <Output file> <Number of attributes> <Number of Blocks in memory used> <Type of index - btree or hash>" << endl;
		exit(0);
	}
	
	int index = atoi(argv[4]);;
	int number_attributes = atoi(argv[2]);
	int number_of_blocks = atoi(argv[3]);

	string command;
	
	if(index == 0)
		command += "./hash ";
	else
		command += "./btree ";

	string input_file = argv[1];
	string output_file = "Output.txt";

	command += (input_file + " ") + (to_string(number_attributes)) + " " + (to_string(number_of_blocks)) + " " + "> "+output_file;
	
	system("g++ -std=c++11 -o hash hash.cpp");
	cout << "Query:  " << command << endl;
	system("g++ -std=c++11 -o btree btree.cpp");
	system(command.c_str());
	return 0;
}