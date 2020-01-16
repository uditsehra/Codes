#include<iostream>
#include<stack>

using namespace std;

/* bool isDuplicate(string str)
{
    stack<char> stk;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i]!=')')
        {
            stk.push(str[i]);
        }
        else 
        {
            if(s.top()='(')
            {
                return true;
            }
        }

        while(s.top()!='(')
        {
            s.pop();
        }
        s.pop();
    }

    return true;
}
 */

/* void getSteps(int arr[], int n)
{
    stack<int> stonks;

    for(int i=0; i<n; i++)
    {
        stonks.push(arr[i]);
    }

    int step[n] = {0};
    int data = 0;
    int count = 0;
    
    while(!stonks.empty())
    {     if(stonks.empty())
        {
            return 0;
        }
        
        data = stonks.pop();
        
        count = 0;
        
        while(int j=stonks.pop() > data)
        {
            count++;
        }
        
        step[i]= count;
    }
    
    for(int i=0; i<n; i++)
    {
        cout << step[i] << " " << endl;
    } 
}
 */
/* 
void getStepsToStonks(int arr[], int n)
{
    stack<int> stonks;
    stonks.push(0);

    for(int i=0; i<n; i++)
    {
        while(!stonks.empty() and arr[s.top()] <= arr[i])
        {
            stonks.pop();
        }
    }
} */

void getNextMax(int arr[], int n)
{
    stack<int> s;

    for(int i=0; i<n; i++)
    {
        while(!s.empty() and arr[i] > arr[s.top()])
        {
            int idx = s.top();
            s.pop();


            cout << arr[idx] << "->" << arr[i] << endl;
        }
    }

    while(!s.empty())
    {
        int idx = s.top();
        s.pop();

        cout << arr[idx] << "->" << (-1) << endl;
    }
}

/* void getNextSmaller(int arr[], int n)
{
    stack<int> s;

    for(int i=0; i<n; i++)
    {
        while(!s.empty() and arr[i] < arr[s.top()])
        {
            int idx = s.top();
            s.pop();

            cout << arr[idx] << "->" << arr[i] << endl;
        }
    }
} */

/* 
bool canSequnceOfPushPopPossible(int pushed[], int popped[], int n)
{
    stack<int> s;
    int idxPop = 0;

    for(int i=0; i<pushed.size(); i++)
    {
        s.push(pushed[i]);
        while(!s.empty() and s.top() == popped[idxPop])
        {
            idxPop++;
            s.pop();
        }
    }
    return s.empty();
} */                                        // Leet Code validate Stack Sequence Problem.




int main()
{
    // string str = "((a+b)+((c+d)))";

    // isDuplicate(str);

    // int arr[] = {100, 80, 60, 70, 60, 75, 85};

    // cout << getSteps(arr, n);

//    int arr[] = {5, 3, 10, 2, 6, 13, 4};

//    getNextMax(arr, n);

//    getNextSmaller(arr, n);

    int pushed[] = {1,2,3,4,5};
    int popped[] = {4,5,3,2,1};

    int n = sizeof(pushed)/sizeof(pushed[0]);
    return 0;
}



// In a given string find palindrome substrings/ palindrome subsequence.