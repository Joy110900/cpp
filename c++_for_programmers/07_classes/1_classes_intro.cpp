/*
** Goal: practice creating and using classes.
** Create a class called Cat.
** Create the following members:
** private members: name, breed, age
** public members: setName, setBreed,setAge
** getName, getBreed, getAge, printInfo*/

#include <iostream>

using namespace std;

class Cat
{
    string name;
    string breed;
    int age;

    public:

    void setname(string name);
    void setbreed(string breed);
    void setage(int age);
    void printinfo(void);
};
 
void Cat:: setname(string namein)
{
    name = namein;
}

void Cat:: setbreed(string breedin)
{
    breed = breedin;
}

void Cat:: setage(int agein)
{
    age = agein;
}

void Cat:: printinfo(void)
{
    cout << name << "\t" << breed << "\t" << age << endl;
}

int main()
{
    Cat cat1;

    cat1.setname("pussy");
    cat1.setbreed("abnormal");
    cat1.setage(7);

    cat1.printinfo();

    return 0;
}