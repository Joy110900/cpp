/*
** getline in c++ is same as gets in c.
*/



#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name1, address1, phoneNo1;
    string name2, address2, phoneNo2;

    //get user1 information
    cout<<"User1 what is your name?\n";
    getline(std::cin,name1);
    cout<<"User1 what is your address?\n";
    getline(cin, address1);
    cout<<"User1 what is your phone number?\n";
    getline(std::cin, phoneNo1);

    //get user2 information
    cout<<"User2 what is your name?\n";
    getline(std::cin, name2);
    cout<<"User2 what is your address?\n";
    getline(std::cin, address2);
    cout<<"User2 what is your phone number?\n";
    getline(std::cin, phoneNo2);

    //print information
    cout<<"\n\n"<<name1<<"\n";
    cout<<"\t\t"<<address1<<"\n";
    cout<<"\t\t"<<phoneNo1<<"\n";

    cout<<"\n\n"<<name2<<"\n";
    cout<<"\t\t"<<address2<<"\n";
    cout<<"\t\t"<<phoneNo2<<"\n";    
    return 0;
}