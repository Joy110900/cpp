/*

** Goal : Learn the use of constructo, destructor, helper function

Gameboard has a private member 'gameSpace[4][4]' that is a 4x4 array that accepts a char for each of the 16 positions.

The class has four public members that are functions and a constructor:

the constructor sets each value of gameSpace to the char value '-'
each position to be set with a single char
each position can be read individually
printInfo will print gameSpace as a 4x4 matrix
the helper function 'fourInRow' checks every row, looking for four 'x's. When it finds four x's in the same row, it returns a '1', otherwise it returns a '0'.

 */



#include <iostream>
#include <iomanip> 

using namespace std;

class gameboard
{
    char gameSpace[4][4];
public:
    gameboard(); //initialize the board with '-' in all 16 spaces //constructor function
    void setgame_space(int row,int column, char value); //x,y,or '-' in each game square
    char getgame_space(int row,int column);
    int four_in_Row(); //four 'x's in any row 'wins'
    void print_info(); //print the game board in a 4x4 matrix
    ~gameboard();   //destructor function. It is called automatically when the class is out of scope.
};


gameboard:: gameboard() //constructor function. called automatically when class initiated. used to se initial value. doesnt return anything. not even void
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            gameSpace[i][j] = '-' ;
        }
    }
}

void gameboard:: setgame_space(int row,int column, char value)
{
    gameSpace[row][column] = value;
}

 char gameboard:: getgame_space(int row,int column)
 {
     return gameSpace[row][column];
 }

 int gameboard:: four_in_Row()
 {
     int a=0;

     for(int i=0; i<4; i++)
     {
         a=0;
         for(int j=0; j<4; j++)
         {
             if('x' == gameSpace[i][j])
                 a++;            
         }
         if(a == 4)
            return 1;
     }
     return 0;
 }

void gameboard:: print_info()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << gameSpace[i][j] << " ";
        }
        cout << endl;
    }
}

gameboard:: ~gameboard()    //it is called by default when the class is out of scope. in this func write something to happen before it  gets destroyed.
{
    cout << endl << "gameboard out"; 
}

int main()
{
    gameboard game1;
    game1.setgame_space(0,0,'x');
    game1.setgame_space(0,1,'x');
    game1.setgame_space(0,2,'x');
    game1.setgame_space(0,3,'y');
    game1.setgame_space(1,0,'x');
    game1.setgame_space(2,0,'x');
    game1.setgame_space(3,0,'x');
    game1.setgame_space(3,1,'x');
    game1.setgame_space(3,2,'x');
    game1.setgame_space(3,3,'x');
    
    if(game1.four_in_Row() == 1)
    {
        cout<<"X got four in a row! \n\n";
    }
    else
    {
        cout<<"X did not get four in a row :(\n\n";
    }
    game1.print_info();
    return 0;
}