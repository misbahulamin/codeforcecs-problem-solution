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
const int N = 101;

int main()
{
    int array[N][N];
    //cout << "started" << endl;
    int a, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> a;
    while(a--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
