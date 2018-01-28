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
#define U unsigned int

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    int t,len,i;
    string str;
    char ch;

    sf ("%d ",&t);

    while (t--)
    {
        getline (cin,str);
        len = str.size();

        for (i=0; i<len; i++)
        {
            if (str[i] == 'c' && str[i+1] == 'h' && str[i+2] == 'e' && str[i+3] == 'a' && str[i+4] == 't' && str[i+5] == 'e' &&
            str[i+6] == 'r')
            {
            	pf ("charming");
                i += 6;
            }
            else if (str[i] == 'k' && str[i+1] == 'a' && str[i+2] == 'l' && str[i+3] == 'a' && str[i+4] == ' ' && str[i+5] == 'p'
            && str[i+6] == 'a' && str[i+7] == 'r' && str[i+8] == 'a' && str[i+9] == ' ' && str[i+10] == 'n' && str[i+11] == 'a')
            {
                pf ("khela pare");
                 i += 11;
            }
            else if (str[i] == 'a' && str[i+1] == 'p' && str[i+2] == 'p' && str[i+3] == 'y' && str[i+4] == ' ' && str[i+5] == 'n'
            && str[i+6] == 'y' && str[i+7] == 'c' && str[i+8] == ' ' && str[i+9] == 'l' && str[i+10] == 'a' && str[i+11] == 'g'
            && str[i+12] == 'c' && str[i+13] == 'a')
            {
                pf ("vaiya you are very handsome");
                i += 13;
            }
            else if (str[i] == 'p' && str[i+1] == 'r' && str[i+2] == 'o' && str[i+3] == 'g' && str[i+4] == 'r' && str[i+5] == 'a'
            && str[i+6] == 'm' && str[i+7] == 'm' && str[i+8] == 'e' && str[i+9] == 'r')
            {
                pf ("man with love and life");
                i += 9;
            }
            else
                pf ("%c",str[i]);
        }

        pf ("\n");
    }

    return 0;
}
