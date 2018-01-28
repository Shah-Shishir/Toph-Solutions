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

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int tc,pos,n,i,maxi,arr[105];
    string str;

    cin >> tc;

    for (pos=1; pos<=tc; pos++)
    {
        cin >> n;

        vector <string> v,t;

        for (i=0; i<n; i++)
        {
            cin >> str >> arr[i];
            v.pb(str);
        }

        maxi = arr[0];

        for (i=1; i<n; i++)
            if (maxi < arr[i])
                maxi = arr[i];

        for (i=0; i<n; i++)
            if (maxi == arr[i])
                t.pb(v[i]);

        sort (t.begin(),t.end());

        pf ("Case %d: %s is ",pos,t[0].c_str());

        if (maxi >= 1 && maxi <= 1199)
            cout << "Newbie!.\n";
        else if (maxi >= 1200 && maxi <= 1399)
            cout << "Pupil!.\n";
        else if (maxi >= 1400 && maxi <= 1599)
            cout << "Specialist!.\n";
        else
            cout << "Expert!.\n";
    }

    return 0;
}
