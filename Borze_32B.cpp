#include<bits/stdc++.h>
using namespace std;

int main()
{

    string a;
    cin >> a;
    int N = a.length();
    //cout << N << endl;
    // for (int i = 0; i < N; i++)
    // {
    //     cout << i << "----->" << a[i] << endl;
    // }

    for (int i = 0; i <=N; i++)
    {
        if(a[i]=='.')
        {
            cout << 0;
            //i++;  
        }
        if(a[i]=='-' && a[i+1]=='.')
        {
            cout << 1;
            i = i + 1;
        }
        if(a[i]=='-' && a[i+1]=='-')
        {
            //cout << endl<< "3rd if :" << i << endl;
            cout << 2;
            i = i + 1;
            //cout << i << endl;
        }
        //cout << i << endl;
    }
        return 0;
}