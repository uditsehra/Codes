// Use 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getString(string a, string b, string c)
{
    //string c[31];
    int x = stoi(a);

    int y = stoi(b);

    int z[3];

    for(int i=31; i<=a.length() ; i--)
    {
        z[i] = x[i]^y[i];
        c[i] = to_string(z);
    }

    cout << c << endl;

    //return c;
}

int main()
{
    string a = "01";
    string b = "10";
    string c[32];
    
/*    cin >> a;
    cin >> b;*/

    cout << getString(a, b, c);

//    cout << c << endl;

    return 0;
}
