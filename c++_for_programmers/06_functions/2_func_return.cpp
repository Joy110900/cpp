/*
** Goal: practice writing functions with parameters and return values.
*/

#include <iostream>

using namespace std;

void printEquation(int m1, int m2, int sum, char operation); 
int sum(int m1, int m2);

int main()
{
    int m1 = 33; 
    int m2 = 66;
    printEquation(m1, m2,sum(m1, m2),'+');
    return 0;
}

void printEquation(int m1, int m2, int sum, char operation) 
{
     //print the equation 'm1 operation  m2 = result'
     cout<<m1<<operation<<m2<<"="<<sum;
}

int sum(int m1, int m2)
{
     return m1+m2;
}


