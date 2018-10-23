#include <bits/stdc++.h>
using namespace std;
#define LEX_C(veca, vecb) lexicographical_compare(veca.begin(), veca.end(), \
		vecb.begin(), vecb.end())

ifstream inputstream;
string filename;
map<int,set<vector<int> > > hashed_map;


void close() {
	inputstream.close();
}

void open() {
	inputstream.open(filename.c_str());
	hashed_map.clear();
}

void Getnext(int number_of_blocks) {
	string lines;
	vector < int > temp;
	long int sum,i;
	while(getline(inputstream,lines)) {
		temp.clear();
		sum = 0;
		i = 0;

		stringstream tuple;
		tuple << lines;
		string values;
		
		while(tuple >> values) {
			int individual_num;
			individual_num = stoi(values);
			sum = sum + individual_num;
			sum = sum % number_of_blocks;
			temp.push_back(individual_num);
		}

		if(hashed_map[sum].find(temp) == hashed_map[sum].end()) {
			cout<<lines<<endl;
			hashed_map[sum].insert(temp);
		}
	}
	return;
}



int main(int argc,char * argv[])
{
	if(argc > 3) {
		int number_of_blocks;
		int number_of_attr;
		
		filename=argv[1];
		
		number_of_attr=atoi(argv[2]);
		number_of_blocks=atoi(argv[3]);
		
		open();
		
		Getnext(number_of_blocks);
		
		close();
	}

	else {
		cout<<"Invalid usage\nCorrect Format: <Input file> <Output file> <Number of attributes> <Number of Blocks in memory used> <Type of index - btree or hash>" << endl;
		exit(0);
	}
	return 0;
}