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
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    long long t,pos,n,i,j,x,y,d,m;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> n;

        vector <long long> X,Y;

        for (i=0; i<n; i++)
        {
            cin >> x >> y;

            X.pb(x);
            Y.pb(y);
        }

        m = -1e5;

        for (i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            {
                d = (X[i]-X[j])*(X[i]-X[j]) + (Y[i]-Y[j])*(Y[i]-Y[j]);

                if (d > m)
                    m = d;
            }
        }

        pf ("Case %lld: %lld\n",pos,m);
    }

    return 0;
}
