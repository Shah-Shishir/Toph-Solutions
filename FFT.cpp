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

    int tc,n,i,k;
    char str[12];

    sf ("%d",&tc);

    while (tc--)
    {
        vector <string> v;
        vector < vector <int> > vx;
        vector <int> x;

        sf ("%d",&n);

        for (i=1; i<=n; i++)
        {
            sf ("%s",str);
            v.pb (str);
        }

        for (i=0; i<n-2; i++)
        {
            if (v[i][0] == 'F' && v[i+1][0] == 'F' && v[i+2][0] == 'T')
            {
                x.pb(i);
                x.pb(i+1);
                x.pb(i+2);
                vx.pb(x);
                x.clear();
            }
        }

        if (n > 0)
            k = vx.size();

        pf ("%d\n",k);

        for (i=0; i<k; i++)
            pf ("%s %s %s\n",v[vx[i][0]].c_str(),v[vx[i][1]].c_str(),v[vx[i][2]].c_str());
    }

    return 0;
}
