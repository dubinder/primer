//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// Dylan Binder
// Copyright 2014
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// * __18:__ Write declarations for each of the following functions . When you write these declarations, 
// use the name of the function to indicate what the function does
// (a) A function named compare that returns a bool and has two parameters that are refs,
// to a class named matrix
// (b) A function named change_val that returns a vector<int> iterator and takes two params,
// one is an int, and the other is an iterator for a vector<int>
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#include <vector>
class matrix;
bool compare(const matrix &r1, const matrix &r2);
std::vector<int>::iterator change_val(const int i, std::vector<int>::iterator vi);