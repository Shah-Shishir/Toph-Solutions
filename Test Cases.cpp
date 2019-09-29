/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define		    jeno_joyer_khuda_thake	int main (void)
#define		    kaj_shesh		        return 0
#define 	    sf                  	scanf
#define 	    pf                  	printf
#define 	    ssf                 	sscanf
#define 	    spf                 	sprintf
#define 	    fsf                 	fscanf
#define 	    fpf                 	fprintf
#define 	    fast                	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define 	    scase				    sf ("%d",&tc)
#define 	    sn                  	sf ("%d",&n)
#define 	    whilec			        while (tc--)
#define 	    eof                 	while (cin >> n)
#define		    for0(i,n)			    for (i=0; i<n; i++)
#define		    for1(i,n)			    for (i=1; i<=n; i++)
#define		    forab(i,a,b)            for (i=a; i<=b; i++)
#define		    rof0(i,n)               for (i=n-1; i>=0; i--)
#define		    rof1(i,n)               for (i=n; i>=1; i--)
#define		    rofab(i,a,b)            for (i=b; i>=a; i--)
#define 	    cinstr              	cin >> str
#define 	    getstr              	getline (cin,str)
#define 	    pcase				    pf ("Case %d: ",pos)
#define 	    vi                  	vector <int>
#define 	    si                  	set <int>
#define 	    vs                  	vector <string>
#define 	    pii                 	pair <int,int>
#define 	    mii                 	map <int,int>
#define 	    msi				        map <string,int>
#define 	    pb                  	push_back
#define 	    in                  	insert
#define 	    llu                 	unsigned long long
#define 	    lld                 	long long
#define 	    U                   	unsigned int
#define 	    endl                	"\n"

const int MOD = 1000000007;
const int MAX = 1000005;
const double PI = acos(-1.0);

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

jeno_joyer_khuda_thake
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int n,C,M,d,c,m,i;

    while (sf ("%d %d %d",&n,&C,&M) != EOF)
    {
        vector <string> v;

        for (i=1; i<=n; i++)
        {
            sf ("%d %d %d",&d,&c,&m);

            if (c > C)
                v.pb("CLE");
            else if (m > M)
                v.pb("MLE");
            else if (d > 0)
                v.pb("WA");
        }

        if (v.size() == 0)
            pf ("AC");
        else
            pf ("%s",v[0].c_str());

        pf ("\n");
    }

    kaj_shesh;
}
