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

    int tc,pos,len,i,arr[26],k;
    string str;

    cin >> tc;

    for (pos=1; pos<=tc; pos++)
    {
        cin >> len;
        getchar ();
        getline(cin,str);

        sort (str.begin(),str.end());
        memset (arr,0,sizeof(arr));
        k = 0;

        for (i=0; i<len; i++)
        {
            if (isalpha(str[i]))
                arr[str[i]-97]++;
            else
                k++;
        }

        pf ("Case %d:\n",pos);

        if (k == len)
            cout << -1 << endl;
        else
        {
            for (i=0; i<26; i++)
                if (arr[i] > 0)
                    pf ("%c - %d\n",char(i+97),arr[i]);
        }

        cout << endl;
    }

    return 0;
}
