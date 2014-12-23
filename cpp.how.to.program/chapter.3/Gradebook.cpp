1 // Fig. 3.12: GradeBook.cpp
2 // GradeBook member-function definitions. This file contains
3 // implementations of the member functions prototyped in GradeBook.h.
4 #include <iostream>
56
using namespace std;
78
// constructor initializes courseName with string supplied as argument
9
10 {
11 setCourseName( name ); // call set function to initialize courseName
12 } // end GradeBook constructor
13
14 // function to set the course name
15
16 {
17 courseName = name; // store the course name in the object
18 } // end function setCourseName
19
20 // function to get the course name
21
22 {
23 return courseName; // return object's courseName
24 } // end function getCourseName
25
26 // display a welcome message to the GradeBook user
27
28 {
29 // call getCourseName to get the courseName
30 cout << "Welcome to the grade book for\n" << getCourseName()
31 << "!" << endl;
32 } // end function displayMessage