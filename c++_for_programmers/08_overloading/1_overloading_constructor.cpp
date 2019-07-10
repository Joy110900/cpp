/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>

using namespace std;

class dog
{
    string name;
    int license;

    public:

    dog()
    {
        name = "NA";
        license = 0;
    }

    dog(string namein)
    {
        name = namein;
        license = 0;
    }

    dog(int licensein)
    {
        name = "NA";
        license = licensein;
    }

    dog(string namein, int licensein)
    {
        name = namein;
        license = licensein;
    }

    string getname()
    {
        return name;
    }

    int getlicense()
    {
        return license;
    }

};

int main()
{
    dog d1;
    dog d2("Kali");
    dog d3(12345);
    dog d4("Sammy", 65432);
    
    cout<<d1.getname()<<" "<<d1.getlicense()<<"\n";
    cout<<d2.getname()<<" "<<d2.getlicense()<<"\n";
    cout<<d3.getname()<<" "<<d3.getlicense()<<"\n";
    cout<<d4.getname()<<" "<<d4.getlicense()<<"\n";
    
    return 0;
}