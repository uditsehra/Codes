#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<char, vector<string>> ProductionsMap;

void error()
{
    cout << "Error()\nThe given input string is invalid" << endl;
    return;
}

string setProduction(string s)
{
    string key = s;
    string productionToReturn;

    for(int i=0; i<ProductionsMap[key].size(); i++)
    {
        productionToReturn = ProductionsMap[key][i];
        return productionToRe
    }
}

void Algo(string input, string production, string solution)
{
    string currentProduction;
    

    for(int i=0; i<=k; i++)
    {   
        char x = 

        if(x>=97 && x<=122) //This will check if the x is a non terminal means if it's a production symbol or not.
        {
            string productionToWOrkOn = getProduction(x);
            Algo(productionToWOrkOn, 0);
        }
        else if(x == a)
        {
            i++;
        }
        else
        {
            error();
        }

        x = currentProduction[i];
    }
}

int main()
{
    cout << "Enter No of Productions:\t"<<endl;
    int numOfProdu = 0;
    cin >> numOfProdu;
    string productionList;

    while(numOfProdu--)
    {
       char proStart;
       cin>>proStart;
       int numOfStates;
       cin>>numOfStates;
       while(numOfStates--)
       {
            string str;
            cin>>str;
            ProductionsMap[pro_start].push_back(str);
       }
    }

    cout << "Enter the input to be tested against grammar:\t" << endl;
    
    string input;
    cin >> input;

    string solution="";

    string currentProduction = getProduction(productionList[i]);
    
    Algo(input, currentProduction, solution);

    return 0;
}