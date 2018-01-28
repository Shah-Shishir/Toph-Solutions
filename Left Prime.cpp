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
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert

const int MAX = 10000001;
bool prime[MAX];
int arr[MAX];

void sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;


    for (i=4; i<=MAX; i+=2)
        prime[i] = true;

    for (i=3; i<=3162; i+=2)
        if (!prime[i])
            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;

    for (i=1; i<=MAX; i++)
    {
        arr[i] = arr[i-1];

        if (!prime[i])
            arr[i] = arr[i-1]+1;
    }

    return;
}

int main (void)
{
    sieve ();

    int t,n;

    sf ("%d",&t);

    while (t--)
    {
        sf ("%d",&n);

        if (!prime[n])
            pf ("%d\n",arr[n]-1);
        else
            pf ("%d\n",arr[n]);
    }

    return 0;
}
