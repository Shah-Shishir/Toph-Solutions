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
const int MAX = 1e8;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int prime[(MAX>>5)+2];
llu arr[5761456];

void sieve ()
{
    int i,j;

    for (i=3; i*i<=MAX; i+=2)
        if (!CheckBit(prime[i>>5],i&31))
            for (j=i*i; j<MAX; j+=(i<<1))
                prime[j>>5] = SetBit (prime[j>>5],j&31);

    arr[0] = 0;
    arr[1] = 2;

    j = 1;

    for (i=3; i<MAX; i+=2)
        if (!CheckBit(prime[i>>5],i&31))
            arr[++j] = arr[j-1]+i;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    sieve ();

    U n,i,x,y;

    sf ("%u",&n);

    for (i=1; i<=n; i++)
    {
        sf ("%u %u",&x,&y);
        pf ("%llu\n",arr[y]-arr[x-1]);
    }

    return 0;
}
