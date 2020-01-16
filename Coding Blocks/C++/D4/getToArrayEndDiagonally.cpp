#include<iostream>
using namespace std;

void printPath(int i, int j, int m, int n, string path)
{
    if(i>m || j>n)
    {
        return;
    }

    if(i==m && j==n)
    {
        cout << path << endl;
        return;
    }

    printPath(i+1, j, m, n, path +'H');
    printPath(i, j+1, m, n, path + 'V');
    printPath(i+1,j+1, m, n, path + "D");

}

int main()
{
    int i,j,m,n;
    i=1, j=1, m=3, n=3;

    printPath(i,j,m,n,"");

    return 0;
}