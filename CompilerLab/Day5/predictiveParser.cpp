#include<bits/stdc++.h>

using namespace std;

unordered_map<char, vector<string>> productionMap;
unordered_map<char, string>first;
unordered_map<char, string>follow;
string productionList = "";
string inputBuffer="$";
stack<string> parserStack;

bool isNonTerminal(char x)
{
    for(int i=0; i<productionList.length(); i++)
    {
        if(x==productionList[i])
        {
            return true;
        }
    }
    return false;
}

void getFollow(string production)
{
    if(isupper(x))
    {

    }
    else
    {
        first[x] = 
    }
}

void getFirst(char proSym, string produciton)
{
    for(int i=0; i<production.length(); i++)
    {
        char x = produciton[i];
        
        if(isupper(x))
        {
            int numOfStates =   productionMap[x].size();

            for(int state=0; state<numOfStates; state++)
            {
                string proToWork = productionMap[x][state];
                getFirst(x, proToWork);
                //string firstStr += first[x];
                string firstNext = first[proToWork[0]];
                first[x].push_back(firstNext);
            }
        }
        else
        {
            first[proSym].push_back(x);
        }
    }
}

void getGrammar()
{
    int numOfProductionInGrammer;
        cout << "Enter the number of productions of a grammar."<< endl;
        cin >> numOfProductionInGrammer;

        while(numOfProducitonInGrammer--)
        {
            cout << "Enter starting symbol of " << numOfProdu+1 << " production:\t\t\t" << endl;
            char startOfProduction;
            cin>>startOfProduction;
            productionList += startOfProduction;
            cout << "Enter number of states of this production.\n" << endl;
            int numOfStates;
            cin>>numOfStates;
            while(numOfStates--)
            {
                cout << "Enter the body of "<< numOfStates+1 << " state of production. \n" << $
                string str;
                cin>>str;
                productionMap[proStart].push_back(str);
            }
        }
}

void getInput()
{
    cout << "Enter the input string."<<endl;
    string str; cin >> str;
    inputBuffer += str;
    
    return;
}

void getPrint()
{
    iterator it;
    for( auto it =first.begin(); it!=first.end(); it++)
    {
            cout << it.first << "\t" << it.second << endl;
    }
}

int main()
{

    getGrammar();   //This will get the grammar's produciton rules and store them in a map for later use.
    
    getInput();     //This will get  input from the user and store the input in input buffer.
    
    parserStack.push('$');      //This willl initialise the stack with $ value.

    for(int i=0; i<productionList.length(); i++)        //This loop will give us the first for all symbols which are present in the grammar.
    {
        char x;
        string prodStr;

        x = productionList[i];
        prodStr = productionMap[x];

        getFirst(x,prodStr);
    }

    /*
    for(int i=0; i<productionList.length(); i++)        //This loop will give us the follow for all symbols which are present in the grammar.
    {
        char x;
        string prodStr;

        x = productionList[i];
        prodStr = productionMap[x];

        getFollow(prodStr);
    }
    */

    getPrint();

    return 0;
}


