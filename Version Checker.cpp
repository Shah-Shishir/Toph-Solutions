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
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    char x[10],y[10];
    int a,b,c,d,e,f,k,i,val;

    while (sf ("%s %s",&x,&y) != EOF)
    {
        a = b = c = d = e = f = k = 0;

        for (i=0; x[i]; i++)
        {
            if (isdigit(x[i]))
            {
                val = x[i]-'0';

                if (k == 0)
                    a = a*10 + val;
                else if (k == 1)
                    b = b*10 + val;
                else
                    c = c*10 + val;
            }
            else
                ++k;
        }

        k = 0;

        for (i=0; y[i]; i++)
        {
            if (isdigit(y[i]))
            {
                val = y[i]-'0';

                if (k == 0)
                    d = d*10 + val;
                else if (k == 1)
                    e = e*10 + val;
                else
                    f = f*10 + val;
            }
            else
                ++k;
        }

        if (a > d)
            k = 1;
        else if (a < d)
            k = -1;
        else
            k = 0;

        if (k == 1)
            pf ("%s\n",x);
        else if (k == -1)
            pf ("%s\n",y);
        else
        {
            if (b > e)
                pf ("%s\n",x);
            else if (b < e)
                pf ("%s\n",y);
            else
            {
                if (c > f)
                    pf ("%s\n",x);
                else if (c < f)
                    pf ("%s\n",y);
                else
                {
                    if (strlen(x) > strlen(y))
                        pf ("%s\n",x);
                    else
                        pf ("%s\n",y);
                }
            }
        }
    }

    return 0;
}
