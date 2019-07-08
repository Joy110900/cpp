/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    
    cin>>givenInt;
    cin>>givenFloat;
    cin>>givenDouble;
    cin>>givenString;
    cin>>givenChar;
    
    cout<<givenInt<<endl;
    cout<<&givenInt<<endl;
    cout<<givenFloat<<endl;
    cout<<&givenFloat<<endl;
    cout<<givenDouble<<endl;
    cout<<&givenDouble<<endl;
    cout<<givenString<<endl;
    cout<<&givenString<<endl;
    cout<<givenChar<<endl;
    cout<<&givenChar<<endl;
    
    return 0;
}
