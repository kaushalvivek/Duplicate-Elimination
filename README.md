# Dupplicate Elimination

## Files:

### code.cpp

Main execution code that calls btree or hash programs as per the index specified.

### btree.cpp

Code for binary tree based execution. Opens input file puts distinct tuple in btree and then outputs
tuples in GetNext() function.

### hash.cpp

Code for hashing based execution. Opens input file puts distinct tuple in hash and then outputs
tuples in GetNext() function.

### Compilation:

```cpp
g++ --std=c++11 code.cpp
```

### Execution:

```cpp
./a.out <input_file> <number_of_attributes> <number_of_blocks> <index_type>

/*
** Index Type:
--------------------
** 0 for hash
** 1 for binary tree
--------------------
*/
```
  
Vivek Kaushal  
20161071