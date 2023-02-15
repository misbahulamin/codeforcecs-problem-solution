#include<bits/stdc++.h>
using namespace std;

/*
        """""""""""""""""""""""""""""""""""""""""""
        """""""""""""""""""""""""""""""""""""""""""
        ""  Name: Misbahul Amin                  "" 
        ""  University: Nantong University       ""
        ""  Address: Nantong, Jingshu, China     ""
        ""  E-mail: misbahul.amin2001@gmail.com  ""
        ""  Subjec: codeforcecs-problem-solution ""
        """""""""""""""""""""""""""""""""""""""""""
        """""""""""""""""""""""""""""""""""""""""""
*/

int main()
{
    int a;
    cin >> a;
    for (int i = a+1; i <= 9999; i++)
    {
        string x = to_string(i);
        if (x[0] != x[1] && x[0] != x[2] && x[0] != x[3] && x[1] != x[2] && x[1] != x[3] && x[2] != x[3])
        {
            cout << i << endl;
            break;
        }


    }
    return 0;
}