#include<iostream>
using namespace std;

//bool isSafe(char maze, int sol, int row, int col, int n)

void printRatInMaze(char maze[][4], int sol[][4], int sr, int sc, int er, int ec)
{
    if(sr == er && sc == ec)
    {
        sol[sr][sc] = 1;
    }

    if(sr>er || sc > ec)
    {
        //cout << "XXXXXXXXXXXXXXXXXXXXXXXXXX"<< endl;
        /*for(int i=0; i<4; i++)
        {   
            cout << endl;
            for(int j=0; j<4; j++)
            {
                cout << sol[i][j] << " ";
            }
        }
        */

        for(int i=0; i<4; i++)
        {   
            for(int j=0; j<4; j++)
            {
                if(sol[i][j]!=1)
                {
                    sol[i][j] =0;
                }
            }
        }

        
        return;
    }

    if(maze[sr][sc] ='0')
    {
        sol[sr][sc] = 1;
    }

    printRatInMaze(maze, sol, sr+1, sc, er, ec);
    printRatInMaze(maze, sol, sr, sc+1, er, ec);

}

int main()
{
    char maze[][4] = {
     	{'0','0','0','0'},
     	{'0','0','0','0'},
     	{'0','0','X','0'},
     	{'0','X','0','0'},
     };

    int sol[][4] = {0};
     
    int n = 4;
    
    printRatInMaze(maze, sol, 0, 0, 3, 3);

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}