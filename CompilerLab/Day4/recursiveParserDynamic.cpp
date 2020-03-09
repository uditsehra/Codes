#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<char, vector<string>> ProductionMap;
string solution = "";
bool flag = 1;
string productionList = "";
string initialInput;

void geterror(char x)
{
    cout << "Error with " << x <<" the given input string is invalid" << endl;
    flag = 0;
    return;
}

/*
string setProduction(char s)
{
    char key = s;
        string productionToReturn = "";
    for(int i=0; i<ProductionsMap[key].size(); i++)
    {
        productionToReturn = ProductionsMap[key][i];
    }
        return productionToReturn;
}
*/

bool isTerminal(char x)
{
        for(int i=0; i<productionList.length(); i++)
        {
                if(x == productionList[i])
                {
                        cout << x << " is a non terminal" << endl;
                        return true;
                }
        }
        return false;
}

/* bool getSolution(string input, string production, string solution)
{
        char a, x;
        int k=0;
        for(int i=0; i<production.length(); i++)
        {   
            a = input[k];
            x = production[i];
            if(isTerminal(x))
            {
                
            }
            if(a==x)
            {
                solution += a;
                k++;
            }
            else
            {
                return false;
            }
            
        }
        return true;
} */

bool Algo(string input, string production, string solution)
{
    char x, a;
    int j = 0;
    //string currentProduction;
    //cout <<"Production is: S -> " <<  production << endl;

    for(int i=0; i<=production.length()-1; i++)
    {
        x = production[i];
        a = input[j];

        if(isTerminal(x)) //This will check if the x is a non terminal means if it's a production symbol or not.
        {
            int numOfStates = ProductionMap[x].size();

            for(int states = 0; states<numOfStates; states++)
            {
                        //cout<< "Production is " << x << "-> ";
                        //string restOfParentProduction = production.substr(i+1);
                        string productionToWorkOn = ProductionMap[x][states];
                        //productionToWorkOn += restOfParentProduction;
                        //cout << productionToWorkOn << endl;

                        int lengthOfProduction = productionToWorkOn.length();

                        string temp = solution;

                        bool ans = 0;
                        string restOfString = input.substr(j);

                        cout << "Production is " << x << "->" << productionToWorkOn << endl;
                        ans = Algo(restOfString, productionToWorkOn, temp);

                        if(ans)
                        {
                                solution += productionToWorkOn;
                                j += lengthOfProduction;
                                break;
                        }
                        else
                        {
                                cout << "Backtrack" << endl;
                        }
                }
         }
        else if(x == a)
        {
                j++;
                solution += x;
                cout << a << " is matched" << endl;
        }
        else
        {
            geterror(x);
            return false;
        }
    }

    return true;
}

int main()
{
    cout << "Enter No of Productions:\t"<<endl;
    int numOfProdu = 0;
    cin >> numOfProdu;

    while(numOfProdu--)
    {
        cout << "Enter starting symbol of " << numOfProdu+1 << " production:\t\t\t" << endl;
       char proStart;
       cin>>proStart;
        productionList += proStart;
        cout << "Enter number of states of this production.\n" << endl;
       int numOfStates;
       cin>>numOfStates;
       while(numOfStates--)
       {
                cout << "Enter the body of "<< numOfStates+1 << " state of production. \n" << endl;
            string str;
            cin>>str;
            ProductionMap[proStart].push_back(str);
       }
    }

    cout << "Enter the input to be tested against grammar:\t" << endl;

    string input;
    cin >> input;

        

        char initialProduction = productionList[0];
        
        for(int i=0; i<ProductionMap[initialProduction].size(); i++)
        {
            string currentProduction = ProductionMap[initialProduction][i];
            cout << endl << endl << endl << endl;
            cout << "Production is " << initialProduction << " -> " << currentProduction << endl;
            bool ans = Algo(input, currentProduction, solution);
            if(ans)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        /*if(ans)
        {
                cout << "The given input string "<< input << " is a valid string and it's mathing with our solution: "<<solution;
        }
        else
        {
                cout << "The given input string is invalid \n" << input << " is invalid not matching with our solutio";
        }
        */
       cout << "\n" << solution << endl;
    return 0;
}

