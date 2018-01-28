/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <iomanip>
using namespace std;

int main ()
{
    int t,i,p,k,d,sum,add;

    cin >> t;

    for (i=1; i<=t; i++)
    {
        cin >> p >> k >> d;

        sum = p+k;
        add = p+d;

        while (add <= sum)
            add += d;

        printf ("Case %d: %d\n",i,add);
    }

    return 0;
}
