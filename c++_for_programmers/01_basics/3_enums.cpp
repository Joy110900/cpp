/*Enum example*/
/*
 Enum is a user defined datatype which is initialised as below.
 */


#include <iostream>

using namespace std;

int main()
{
    //define MONTHS as having 12 possible values
    enum MONTH {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};    // Jan is assigned 0, Feb is assigned 1 and so on.
    
    //define bestMonth as a variable type MONTHS
    MONTH bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;

    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
}