 #include<iostream>
using namespace std;

void getSum(int arr[][])
{
    int sum=0;
    int x=2, y=2;
    int arr2[x][y] = 0;

        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                arr[i][j] += arr[i-1][j];

            }
        }

        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                arr[j][i] += arr[j-1][i]
            }
        }

    for(i=0; i<2; i++)
    {
        cout<<endl;
        for(j=0; j<2; j++)
        {
            cout<< arr[i][j] <<"\t";

        }
    }
}

int main()
{
    int arr1[2][2] = {1, 1}{1, 1};
    getSum(arr1[2][2]);

    return 0;
}
