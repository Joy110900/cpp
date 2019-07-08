/* Goal: practice using stringstream
/* Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 ** 
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

// stringstream is used to convert a string to a numeric value


 /*
 *** stringstream(stringVariable) >> numericVariable;
 */
#include <iostream>
#include <string>
#include <sstream>
 
 using namespace std;
 
 int main()
 {
     string wi,le;
     float w,l;
     cout << "Enter length of room" << endl;
     cin >> le;
     cout << "Enter width of room" << endl;
     cin >> wi;
     stringstream(wi) >> w;
     stringstream(le) >> l;
     cout << l*w;
     return 0;
 }