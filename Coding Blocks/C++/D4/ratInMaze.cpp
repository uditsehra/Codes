#include<iostream>
using namespace std;

bool isPossible(char maze[][4], int row, int col, int endX, int endY, int n)
{
    if(row==endX &&  col==endY)
    {
        return true;
    }

    if(maze[row][col]=='X')
    {
        return false;
    }
    
    bool hor = isPossible(maze, row+1, col, endX, endY, n);
    bool ver = isPossible(maze, row, col+1, endX, endY, n);

    if(hor || ver)
    {
        cout << "Yes Possibel";
        return true;
    }
    return false;
}

int main()
{
    char maze[4][4] = {
     	{'0','0','0','0'},
     	{'0','0','0','0'},
     	{'0','0','X','0'},
     	{'0','X','0','0'},
     };
    int endX = 4;
    int endY = 4;
    int n = 4;

    cout << isPossible(maze, 1, 1, endX, endY, n) << endl;

    return 0;
}