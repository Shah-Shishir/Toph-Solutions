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

    char a[1001],b[1001];
    int i;

    while (sf ("%s %s",a,b) != EOF)
    {
        map <char,int> mp1,mp2;
        map <char,int> :: iterator it;

        for (i=0; a[i]; i++)
        {
            if (islower(a[i]))
                a[i] = toupper(a[i]);

            it = mp1.find(a[i]);

            if (it == mp1.end())
                mp1[a[i]] = i;
        }

        for (i=0; b[i]; i++)
        {
            if (islower(b[i]))
                b[i] = toupper(b[i]);

            it = mp2.find(b[i]);

            if (it == mp2.end())
                mp2[b[i]] = i;
        }

        for (i=0; a[i]; i++)
        {
            it = mp2.find(a[i]);

            if (it == mp2.end())
                pf ("-1");
            else
                pf ("%d",mp2[a[i]]);

            if (i == strlen(a)-1)
                pf (".\n");
            else
                pf (",");
        }

        for (i=0; b[i]; i++)
        {
            it = mp1.find(b[i]);

            if (it == mp1.end())
                pf ("-1");
            else
                pf ("%d",mp1[b[i]]);

            if (i == strlen(b)-1)
                pf (".\n");
            else
                pf (",");
        }
    }

    return 0;
}
