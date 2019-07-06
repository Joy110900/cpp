/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

using namespace std;

int main()
{
    int a[15],i,min=0,max=0,sum=0;
    float avg;
    for(i=0;i<15;i++)
    {
        cout<<"Enter a number"<<endl;
        cin>>a[i];
        if(min>a[i])
            min=a[i];
        if(a[i]>max)
            max=a[i];
        sum=sum+a[i];
    }
    min=a[0];
    max=a[0];

    for(i=0;i<15;i++)
    {
        if(min>a[i])
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }

    avg=sum/15.0;
    cout<<avg<<endl;
    cout<<min<<endl;
    cout<<max<<endl;
    }