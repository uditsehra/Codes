#include<iostream>
using namespace std;

bool isSafe(int board[][4],int row,int col,int n){

	for(int i=0;i<row;i++){
		if(board[i][col]){
			return false;
		}
	}

	int x = row;
	int y = col;

	while(x>=0 and y>=0){
		if(board[x][y]){
			return false;
		}
		x--;
		y--;
	}

	x = row;
	y = col;

	while(x>=0 and y<n){
		if(board[x][y]){
			return false;
		}
		x--;
		y++;
	}

	return true;
}

bool NQueens(int board[][4],int row,int n){
	if(row==n)
    {
		for(int i=0;i<n;i++)
        {
			for(int j=0;j<n;j++)
            {

				if(board[i][j])
                {
					cout<<"Q ";
				}
                else
                {
					cout<<"_ ";
				}
			}
			cout<<endl;
		}
		cout<<"***************"<<endl;
		return false;
	}

	for(int col=0;col<n;col++)
    {

		if(isSafe(board,row,col,n))
        {

			board[row][col] = 1;

			bool rest_of_the_queens = NQueens(board,row+1,n);
			if(rest_of_the_queens)
            {
				return true;
			}

            // Below step is backtracking.
			board[row][col] = 0;
		}
	}
	return false;
}

int countPatterns(int board[][4], int row, int n, int count )
{}

void printNQueens(string board[][4], int row, int n)
{}

int main()
{
    int board[4][4] = {'0'};
    int n=4;

//    cout << NQueens(board, 0, n, 0) << endl;
    cout << printNQueens(board, 0, n) << endl;
    return 0;
}