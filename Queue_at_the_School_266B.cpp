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

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    char array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    //cout << endl;

    while(t--)
    {
        for (int i = 0; i < n; i++)
        {
            if(array[i]=='B' && array[i+1]=='G' )
            {
                array[i] = 'G';
                array[i + 1] = 'B';
                // BGGBG ---> GBGGB
                    //GBGBG ---> 
                i++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }
}