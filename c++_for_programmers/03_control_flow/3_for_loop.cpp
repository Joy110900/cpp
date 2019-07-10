/*
** Write a program that asks a user for five numbers.
** Print out the sum and average of the five numbers.
*/

#include <iostream>

using namespace std;

int main()
{
    int a[5],sum;

    cout << "Enter 5 numbers" << endl;

    for (int i=0; i<5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cout << "sum = " << sum << endl << "avg = " << sum/5.0 << endl; 

}