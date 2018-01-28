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
#define llu unsigned long long
#define lld long long
#define u unsigned int

bool isPrime (int n)
{
    if (n < 2 || (!(n & 1) && n != 2))
        return false;

    if (n == 2)
        return true;

    for (int i=2; i*i<=n; i++)
        if (n % i == 0)
            return false;
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int num,i;

    while (cin >> num)
    {
        if (isPrime(num))
            cout << "NO PUNISHMENT\n";
        else
            for (i=0; i<num; i++)
                cout << "I DID NOT DO THE ASSIGNMENT.\n";
    }

    return 0;
}
