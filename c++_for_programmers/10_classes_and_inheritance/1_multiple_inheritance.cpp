/*
** Goal: practice multiple inheritance
* In main.hpp you will find two classes: 
* Patient and Dog. 
* TODO: 
* -  create a class called Pet
* - it inherits from both the class Patient 
* - and the class Dog
* - Pet has one private member: name
* - Pet has public  getName and setName functions.
*/
#include<iostream>
#include<string>

using namespace std;

class patient
{
    private:
        int idNumber;
    public:
        void setIdNumber(int idIn);
        int getIdNumber();
};

void patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int patient::getIdNumber()
{
    return idNumber;
}

class dog
{
    private:
        string breed;
    public:
        void setBreed(string breedIn);
        string getBreed();
};

void dog::setBreed(string breedIn)
{
    breed = breedIn;
}

string dog::getBreed()
{
    return breed;
}

class pet: public patient, public dog
{
    string name;

    public:

    void setname(string namein)
    {
        name = namein;
    }

    string getname()
    {
        return name;
    }
};

int main()
{
    pet p1;
    p1.setname("Kali");
    p1.setIdNumber(44444);
    p1.setBreed("Aussie");
    
    cout<<p1.getname()<<" "<<p1.getIdNumber()<<" "<<p1.getBreed();
    return 0;
}