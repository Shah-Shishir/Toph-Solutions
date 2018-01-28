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
    string str;
    int tc,len,i,j,k;
    bool A,a;

    cin >> tc;

    while (tc--)
    {
        cin >> str;

        len = str.length();
        A = false, a = false;

        for (i=0; i<len; i++)
        {
            k = 0;

            if (isupper(str[i]))
                A = true;
            else
                a = true;

            for (j=i+1; j<len; j++)
            {
                if (A)
                {
                    if (toupper(str[j]) == str[i])
                        str[j] = '#';
                    else
                        break;
                }

                if (a)
                {
                    if (tolower(str[j]) == str[i])
                        str[j] = '#';
                    else
                        break;
                }
            }

            A = a = false;
        }

        for (i=0; i<len; i++)
        {
            cout << str[i];

            if (i == len-1)
                cout << endl;
        }
    }

    return 0;
}
