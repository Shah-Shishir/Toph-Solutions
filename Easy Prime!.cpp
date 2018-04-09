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
const int MAX = 10000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
int CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int prime[(MAX>>5)+2],BIT[100001];
int n,i,j;

void sieve ()
{
    int i,j;

    prime[0] = SetBit (prime[0],0);
    prime[0] = SetBit (prime[0],1);

    for (i=4; i<MAX; i+=2)
        prime[i>>5] = SetBit (prime[i>>5],i&31);

    for (i=3; i*i<=MAX; i+=2)
        if (!CheckBit (prime[i>>5],i&31))
            for (j=i*i; j<MAX; j+=(i<<1))
                prime[j>>5] = SetBit (prime[j>>5],j&31);
}

void update (int i, int val)
{
    for (; i<=n; i+=i&(-i))
    {
        BIT[i] += val;

        if (BIT[i] < 0)
            BIT[i] = 0;
    }
}

int query (int i)
{
    int sum = 0;

    for (; i>0; i-=i&(-i))
        sum += BIT[i];

    return sum;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    sieve ();

    int val,q,k,a,b;

    sf ("%d",&n);

    memset (BIT,0,sizeof BIT);

    for (i=1; i<=n; i++)
    {
        sf ("%d",&val);

        if (!CheckBit (prime[val>>5],val&31))
            update (i,1);
    }

    sf ("%d",&q);

    for (i=1; i<=q; i++)
    {
        sf ("%d %d %d",&k,&a,&b);

        if (k == 1)
            pf ("%d\n",query(b)-query(a-1));
        else
        {
            if (!CheckBit (prime[b>>5],b&31))
            {
                if (query(a)-query(a-1) == 0)
                    update (a,1);
            }
            else
            {
                if (query(a)-query(a-1) == 1)
                    update (a,-1);
            }
        }
    }

    return 0;
}
