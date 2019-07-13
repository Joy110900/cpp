/*
** Goal: practice class inheritance

** Practice inheritance; create a public base class and a derived class. Create a class called Flower.
** Then create a derived class called Rose. The derived class should have public access to Flower.

** Flower has only one member, a string called bloomtime. Rose has only one member, a string called fragrance.
*/

#include <iostream>
#include <string>

using namespace std;

class flower
{
    private:
        string bloomTime;
    public:
        flower();
        void setBloomTime(string bloomIn);
        string getBloomTime();
};

flower:: flower()
{
    bloomTime = "NA";
}

void flower:: setBloomTime(string bloomIn)
{
    bloomTime = bloomIn;
}

string flower:: getBloomTime()
{
    return bloomTime;
}

//TODO: Complete the class called Rose
//It is derived from the class Flower

class rose: public flower
{
    private:
        string fragrance;
    public:
        rose();
        void setfragrance(string fragIn);
        string getfragrance();
};

rose:: rose()
{
    fragrance = "NA";
}

void rose:: setfragrance(string fragIn)
{
    fragrance = fragIn;
}

string rose:: getfragrance()
{
    return fragrance;
}

int main()
{
    rose r1;
    r1.setBloomTime("spring");
    r1.setfragrance("strong");
    
    cout<<"r1 blooms in "<<r1.getBloomTime()<<", "<<r1.getfragrance();
    return 0;
}