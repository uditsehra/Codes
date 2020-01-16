#include<iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
    //Base case
    if(n==0)
    {
        // cout << "done";
/*         cout << "done";
        exit; */
        return;
    }

    //Recursive case
    //First step n-1 disk move from src to helper
    towerOfHanoi(n-1, src, helper, dest);

    cout << "Move disk " << n << " from " << src << " to " << dest << "\n";

    towerOfHanoi(n-1, helper, dest,src);

    // return dest;
}

int main()
{
    int n;
    cin >> n;

    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}