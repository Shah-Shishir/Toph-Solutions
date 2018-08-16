/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
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
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int main (void)
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int tc,pos,i,cnt;
    bool a,b,c,k;
    char str[15];

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%s",str);

        map <char,int> mp;
        k = false;
        cnt = 0;

        for (i=0; str[i]; i++)
        {
            ++mp[str[i]];
            a = (str[i]+1 == str[i+1] && str[i]+2 == str[i+2] && str[i]+3 == str[i+3]);
            b = (str[i] == str[i+1] && str[i] == str[i+2]);
            c = (str[i] == str[i+1] && str[i] != str[i+2]);

            if (c)
                ++cnt;

            if (mp[str[i]] >= 5 || a || b || cnt >= 2)
            {
                k = true;
                pf ("Fancy\n");
                break;
            }
        }

        if (!k)
            pf ("Not Fancy\n");
    }

    return 0;
}
