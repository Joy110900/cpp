/*Goal: Practice writing generic functions*/

#include <iostream>

using namespace std;

template <typename t>

t sumTwo(t a, t b);

int main()
{
    int a = 90;
    int b = 1; 
    std::cout<<a <<" + "<<b<<" = "<< sumTwo(a,b);
    return 0;
}

template <typename t>
t sumTwo(t a, t b)
{
    return a+b;
}