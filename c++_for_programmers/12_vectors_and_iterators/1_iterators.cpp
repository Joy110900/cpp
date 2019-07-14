// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it
//In this programming quiz, create a vector of 5 floats. Then create an iterator for the vector.
//TODO: Add the necessary libraries
// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

int main ()
{
  vector<float> vFloat;
  
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";
  
  std::cout<<"\n\nAdding 10 elements to the vector\n";
  
  vFloat.assign(10,8.8);
   
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n"; 

	printVector(vFloat);

  return 0;
}

void printVector(vector<float> vIn)
 {
	 vector<float>:: iterator i;

		for(i = vIn.begin(); i != vIn.end(); i++)
			cout << *i << " ";
 }