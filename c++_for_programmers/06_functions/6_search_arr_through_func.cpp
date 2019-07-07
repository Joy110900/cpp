/*
** Goal: create a function that searches an array for 
** a given value. 

** If the array contains the value, return the index where the key is located. 
** If the array does not contain the value, return a -1.
*/

#include<iostream>

int search(int *array, int size, int searchKey);

int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}

int search(int *array, int size, int searchKey)
{
    int a=-1;

    for(int i=0; i<size; i++)
    {
        if(searchKey==array[i])
        {
            a = i;
            break;
        }    
    }

    return a;
}