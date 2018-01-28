/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define u unsigned int

int main (void)
{
    int t,pos,n,i,p,k,arr[25];

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> n;

        for (i=0; i<n; i++)
            cin >> arr[i];

        cin >> p;

        sort (arr,arr+i);

        k = 0;

        pf ("Case %d: ",pos);

        for (i=0; i<n; i++)
        {
            if (arr[i] > p)
            {
                cout << arr[i];
                k++;

                if (k == 1)
                    cout << " ";
                else if (k == 2)
                {
                    cout << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
