/*
In the program below, overload the '+' operator to perform the following function:

Add the lengths of the two shapes together
Add the widths of the two shapes together
Calculate and return the area of the new shape
For example: If there are two shapes s1 = 3x4 and s2 = 2x3

s1 + s2 = s3 where s3 has dimensions (3+2 = 5) *(4 + 3 = 7) = 5 x 7 = 35

//TODO: Add all necessary functions and 
//Overload the '+' sign 
//To achieve the required total

 */

#include <iostream>
 
using namespace std;

class shape 
{
    private:
      int length;     // Length of a box
      int width;
      
    public:
      // Constructor definition
      
      shape(int l = 2, int w = 2) 
      {
         length = l;
         width = w;
      }

      int getWidth()
      {
        return width;
      }

      int getLength()
      {
        return length;
      }

      double area() 
      {
         return length * width;
      }

      int operator +(shape shapeIn)
      {
          return ((width + shapeIn.getWidth())*(length + shapeIn.getLength()));
      }
		
};

int main(void) 
{
   shape sh1(4, 4);    // Declare shape1
   shape sh2(2, 6);    // Declare shape2
   shape sh3;          //Declare shape3
   
   int total = sh1 + sh2;
   cout << "\nsh1.area() = " << sh1.area();
   cout << "\nsh2.area() = " << sh2.area();
   cout << "\nTotal = "<<total;
   return 0;
}