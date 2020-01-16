// Get all the permutations of a give string
// for example str = 'abc'  asn=={abc, acb, bac, bca, bc, cb, b, c,......} 

#include<bits/stdc++.h>

using namespace std;

void getPermutationOfString(string str, string ans)
{
    if(str.length()==0)
    {
        cout << ans << "\n";

    }   

   /*  ch = str[0];
    string ros = str.substr(1); */

    for(int i=0; i<(sizeof(str)/sizeof(str[o])); i++)
    {
        char ch = str[i];
        
        string ros = str.substr(0,i) + str.substr(i,1);
        getPermutationOfString(ros, ans+ch);
    }

}

int main()
{
    string str = "abc";
    string ans;

    cout << getPermutationOfString(str, "") << "\n";

    return 0;
}