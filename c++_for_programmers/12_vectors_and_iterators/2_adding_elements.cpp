// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it

// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

  void printVector(vector<int> vIn);
  void assignFunction(vector<int> vInts, int in);
  void pushBackFunction(vector<int> vInts, int in);
  void emplaceFunction(vector<int> vInts, int loc, int in);
  
  void printVector(vector<int> vIn)
  {
      vector<int>::iterator i;

      for(i = vIn.begin(); i != vIn.end(); i++)
        cout << *i <<" ";
  }
 
  void assignFunction(vector<int> vInts, int in)
  {
      cout<<"\nassigning "<<in<<" and printing the vector\n";
      
      vInts.assign(10,in);

      printVector(vInts);
  }
  void pushBackFunction(vector<int> vInts, int in)
  {
      cout<<"\npush back "<<in<<" and printing the vector\n";
      
      vInts.push_back(in);
      
      printVector(vInts);
  }
  void emplaceFunction(vector<int> vInts,  int loc, int in)
  {
      vector<int>::iterator i;
      cout<<"\nemplacing "<<in<<" and printing the vector\n";

      i = vInts.begin() + loc;

      vInts.emplace(i,in);       

      printVector(vInts);
  }

int main ()
{
  vector<int> vInts; 
  vInts.assign(10, 5);
  printVector(vInts);
  assignFunction(vInts, 1);
  pushBackFunction(vInts, 2);
  emplaceFunction(vInts,1, 3);

  return 0;
}

