
/*Goal: create a generic class.
**Create a class called Multiplier. 
**It multiplies two numbers - integers
**or floats. */

#include <iostream>

using namespace std;

template <typename t>
class multiplier
{
    t in1;
    t in2;
    t product;

    public:

    void setm1(t inp1)
    {
        in1 = inp1;
    }

    void setm2(t inp2)
    {
        in2 = inp2;
    }

    t setproduct()
    {
        return in1*in2;
    }

    void printequation()
    {
        cout << in1 << "*" << in2 << "=" << setproduct() << endl;
    }
};

int main()
{
    multiplier<int> multi1;
    multiplier<float> multi3;
    
    int input1,input2;
    cin>>input1;
    cin>>input2;
    
    multi1.setm1(input1);
    multi1.setm2(input2);
    multi1.setproduct();
    multi1.printequation();
    
    cout<<"\n";
    float input3, input4;
    cin>>input3;
    cin>>input4;    
    multi3.setm1(input3);
    multi3.setm2(input4);
    multi3.setproduct();
    multi3.printequation();
    return 0;
}
