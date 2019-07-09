/*
** Goal: practice using a class. 
** Create an array called roster, populate it 
** with multiple instances of Dog, it has a size of SIZE. 
** The create a function called 
** printRoster(roster, SIZE) that will print 
** all the information about all the dogs on the roster.
*/

#include<iostream>

using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    Dog();
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

void printRoster(Dog roster[], int size);

void printRoster(Dog roster[], int size)
{
    for(int i=0; i<size; i++)
    {
        roster[i].printInfo();
        cout << endl;   
    }
}

Dog::Dog()
{
    name="Unkown";
}

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}
 
void Dog::printInfo()
{
    cout<<name<<" "<<licenseNumber;
}

int main()
{
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
    
    //ToDo: declare and define this function
    //in the header file
    int SIZE = 2;

    Dog roster[SIZE];

    roster[0].setName("Bravo");
    roster[1].setName("Archie");

    roster[0].setLicenseNumber(2016);
    roster[1].setLicenseNumber(2017);



    printRoster(roster,SIZE);
    return 0;
}
