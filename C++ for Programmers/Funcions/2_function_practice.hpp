#include <iostream>

using namespace std;

void printEquation(int m1, int m2, int sum, char operation); 
int sum(int m1, int m2);

void printEquation(int m1, int m2, int sum, char operation) 
{
     //print the equation 'm1 operation  m2 = result'
     cout<<m1<<operation<<m2<<"="<<"result";
}

int sum(int m1, int m2)
{
     return m1+m2;
}
