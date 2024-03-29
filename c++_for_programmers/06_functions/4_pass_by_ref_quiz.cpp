/*
** Goal: Use 'pass by reference' to a function
** to write this program.
** There are two functions that you need to write 
** for this program:
** calculate(input1, input2, operation, result);
** printEquation(input1, input2, operation, result);
** Pass by reference any value that is modified
** in the function.
**
** Put the declaration and the definitions of the 
** functions in the header file.
*/

#include <iostream>

using namespace std;

void calculate(float &input1, float &input2, char operation, float &result);
void printEquation(float &input1, float &input2, char operation, float &result);

int main()
{
    char operation = '*';
    float input1 = 9.8;
    float input2 = 2.3;
    float result;
    
    calculate(input1, input2, operation, result);
    printEquation(input1, input2, operation, result);
    return 0;
}

void calculate(float &input1, float &input2, char operation, float &result)
{
    switch(operation)
    {
        case '+':
        result = input1 + input2;
        break;

        case '*':
        result = input1 * input2;
        break;

        case '-':
        result = input1 - input2;
        break;

        case '/':
        result = input1/input2;
        break;
    }
}

void printEquation(float &input1, float &input2, char operation, float &result)
{
    cout << input1 << operation << input2 << "=" << result;
}