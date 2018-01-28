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

bool prime[MAX];
vector <U> v;

void sieve ()
{
    U i,j;

    prime[0] = prime[1] = true;
    v.pb(2);

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;

    for (i=3; i<MAX; i+=2)
        if (!prime[i])
          v.pb(i);
}

U stNm (U n)
{
    U i,k=0;

    for (i=0; v[i]*v[i]<=n; i++)
    {
        if (n % v[i] == 0)
        {
            ++k;

            while (n % v[i] == 0)
                n /= v[i];
        }
    }

    if (n > 1)
        ++k;

    return k;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    sieve ();

    U tc,pos,n,i;

    sf ("%u",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%u",&n);

        for (i=n; ; i++)
        {
            if (stNm(i) == 2)
            {
                pf ("%u\n",i);
                break;
            }
        }
    }

    return 0;
}
