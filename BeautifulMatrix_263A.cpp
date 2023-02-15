/*
        """""""""""""""""""""""""""""""""""""""""""
        """""""""""""""""""""""""""""""""""""""""""
        ""  Name: Misbahul Amin                  "" 
        ""  University: Nantong University       ""
        ""  Address: Nantong, Jingshu, China     ""
        ""  E-mail: misbahul.amin2001@gmail.com  ""
        ""                                       ""
        """""""""""""""""""""""""""""""""""""""""""
        """""""""""""""""""""""""""""""""""""""""""
*/

#include <bits/stdc++.h>
#define Xopt 2
#define Yopt 2          //optimal position of the '1'
using namespace std;

int main()
{
    bool matrix[5][5];
    int Xvalue, Yvalue;     //The current position of '1'

    for(int i = 0; i < 5; i++){     //Fill In The Matrix
        for(int j = 0; j < 5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 1){
                Xvalue = i;
                Yvalue = j;
            }
        }
        //cout<<endl;
    }
    //cout << Xvalue << "--->" << Yvalue << endl;

    int moves = abs(Xvalue - Xopt) + abs(Yvalue - Yopt);
    cout<<moves;

    return 0;
}
