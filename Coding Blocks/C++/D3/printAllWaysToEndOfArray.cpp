// Print all the ways to reach the end of an array using recursion.

#include<bits/stdc++.h>
using namespace std;

    int pastY, presentY;
    int pastX, presentX;
    int steps;
    string path = "";

string printPath(int presentX, int presentY, int endX, int endY, int pastX, int pastY)
{
    if(presentX-pastX==1 && presentY==pastY)
    {
        path += "H";       
       // return 'H';
    }

    if(presentY-pastY==1 && presentX==pastX)
    {
        path += "V";
        //        return 'V';
    }

    return path;
}

void getPrintAllWaysToEndOfArray(int presentX, int presentY, int endX, int endY, int pastX, int pastY )
{   
  //  cout << presentX << "\t" << presentY << "\t" << pastX << "\t" << pastY << endl;
    

    if(presentX==endX && presentY==endY)
    {
        //cout << steps << "\n";
        //return steps;
//        steps += 1;
        return;
    }

    if(presentX > endX || presentY > endY)
    {
        //cout << steps;
        return printPath(presentX, presentY, endX, endY, pastX, pastY);
    }



     if(presentX-pastX==1 && presentY==pastY)
    {
        path += "H";
//        pastX = presentX;
        // cout << "H" << "\n";
    }

    if(presentY-pastY == 1 && presentX==pastX)
    {

        path += "V";
//        pastY = presentY;
        // cout << "V" << "\n";
    } 

    // int stepH = getPrintAllWaysToEndOfArray(presentX = presentX+1, presentY, endX, endY, pastX, pastY);   
    // int stepY = getPrintAllWaysToEndOfArray(presentX, presentY = presentY+1, endX, endY, pastX, pastY);


    int part1 = getPrintAllWaysToEndOfArray(presentX+1, presentY, endX, endY, presentX, pastY);
    int part2 = getPrintAllWaysToEndOfArray(presentX, presentY+1, endX, endY, pastX, presentY);

    return part1 + part2;

    //cout << steps << "\n";    
}

int main()
{
    // int arr[3][3] = {0};

    cout << getPrintAllWaysToEndOfArray(1, 1, 3, 3, 0, 0) ;

    return 0;
}