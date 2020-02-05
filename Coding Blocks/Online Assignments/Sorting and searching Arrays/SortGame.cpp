#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


bool myCompare(pair<string, int> p1, pair<string, int> p2)
{
    /// First = name, Second = Salary

    if(p1.second == p2.second)
    {
        return p1.first<p2.first;
    }

    return p1.second > p2.second;
}

int main()
{
    int minSalary, n;
    pair<string,int> employee[100005];

    cin >> minSalary >> n;

    string name;
    int salary;
    for(int i = 0; i<n; i++)
    {
        cin>> name >> salary;
        employee[i].first = name;
        employee[i].second = salary;
    }

    sort(employee, employee+n, myCompare);

    for(int i=0; i<n; i++)
    {
        if(employee[i].second > minSalary)
        {
            cout << employee[i].first << " " << employee[i].second << endl;
        }
    }
}