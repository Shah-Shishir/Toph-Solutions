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

lld getOccr (lld n)
{
    lld sum = 0;

    while (n)
        sum += (n /= 5);

    return sum;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,pos;
    lld n,low,high,mid,x,ans;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%lld",&n);

        pf ("Case %d: ",pos);

        if (n == 0)
            pf ("1\n");
        else
        {
            low = 1, high = 1e18, ans = -1;

            while (low <= high)
            {
                mid =(low+high)/2;
                x = getOccr(mid);

                if (x > n)
                    high = mid-1;
                else if (x < n)
                    low = mid+1;
                else
                {
                    high = mid-1;
                    ans = mid;
                }
            }

            if (ans == -1)
                pf ("Go Home! You are drunk!\n");
            else
                pf ("%lld\n",ans);
        }
    }

    return 0;
}
