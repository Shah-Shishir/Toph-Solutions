
/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define             jeno_joyer_khuda_thake      int main (void)
#define             kaj_shesh                   return 0
#define             sf                          scanf
#define             pf                          printf
#define             llu                         long long unsigned

const llu MOD = 1000003;
const int MAX = 1000005;
const double PI = acos(-1.0);

int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }

llu bigmod (llu b,llu p,llu m)
{
    llu A,B;

    if (p == 0)
        return 1;

    if (p & 1)
    {
        A = b % m;
        B = bigmod (b,p-1,m) % m;
        return (A*B) % m;
    }
    else
    {
        A = bigmod (b,p/2,m) % m;
        return (A*A) % m;
    }
}

jeno_joyer_khuda_thake
{
    /*
		freopen ("input.txt","r",stdin);
		freopen ("output.txt","w",stdout);
    */

    int tc;
    llu a,r,n;

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%llu %llu %llu",&a,&r,&n);

        llu p1 = bigmod(r,n,MOD);
        --p1;
        p1 = ((a % MOD) * (p1 % MOD)) % MOD;
        llu p2 = (r-1) % MOD;
        llu ans = bigmod (p2,MOD-2,MOD);
        ans = ((p1 % MOD) * (ans % MOD)) % MOD;

        pf ("%llu\n",ans);
    }

    kaj_shesh;
}
