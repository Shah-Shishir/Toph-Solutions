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

string AND (string a, string b)
{
    string res;
    int len = a.size(),i;

    for (i=len-1; i>=0; i--)
    {
        if (a[i] == b[i] && a[i] == '1')
            res.pb('1');
        else
            res.pb('0');
    }

    reverse (res.begin(),res.end());

    return res;
}

string NAND (string a, string b)
{
    string res;
    int len = a.size(),i;

    for (i=len-1; i>=0; i--)
    {
        if (a[i] == b[i] && a[i] == '1')
            res.pb('0');
        else
            res.pb('1');
    }

    reverse (res.begin(),res.end());

    return res;
}

string OR (string a, string b)
{
    string res;
    int len = a.size(),i;

    for (i=len-1; i>=0; i--)
    {
        if (a[i] == b[i] && a[i] == '0')
            res.pb('0');
        else
            res.pb('1');
    }

    reverse (res.begin(),res.end());

    return res;
}

string NOR (string a, string b)
{
    string res;
    int len = a.size(),i;

    for (i=len-1; i>=0; i--)
    {
        if (a[i] == b[i] && a[i] == '0')
            res.pb('1');
        else
            res.pb('0');
    }

    reverse (res.begin(),res.end());

    return res;
}

string XOR (string a, string b)
{
    string res;
    int len = a.size(),i;

    for (i=len-1; i>=0; i--)
    {
        if (a[i] == b[i])
            res.pb('0');
        else
            res.pb('1');
    }

    reverse (res.begin(),res.end());

    return res;
}

string XNOR (string a, string b)
{
    string res;
    int len = a.size(),i;

    for (i=len-1; i>=0; i--)
    {
        if (a[i] == b[i])
            res.pb('1');
        else
            res.pb('0');
    }

    reverse (res.begin(),res.end());

    return res;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int n,i,j,len,maxi;
    string str,res;

    while (sf ("%d",&n) != EOF)
    {
        vector <string> num,log;
        maxi = -1;

        for (i=1; i<=2*n-1; i++)
        {
            cin >> str;

            if (i & 1)
            {
                num.pb (str);

                len = str.size();

                if (len > maxi)
                    maxi = len;
            }
            else
                log.pb (str);
        }

        if (n == 1)
            cout << num[0] << endl;
        else
        {
            for (i=0; i<n; i++)
            {
                len = num[i].size();

                if (maxi > len)
                {
                    string x;

                    for (j=1; j<=(maxi-len); j++)
                        x.pb('0');

                    num[i] = x + num[i];
                }
            }

            res = "";

            for (i=0; i<n-1; i++)
            {
                if (i == 0)
                {
                    if (log[i] == "AND")
                        res = AND (num[0],num[1]);
                    else if (log[i] == "NAND")
                        res = NAND (num[0],num[1]);
                    else if (log[i] == "OR")
                        res = OR (num[0],num[1]);
                    else if (log[i] == "NOR")
                        res = NOR (num[0],num[1]);
                    else if (log[i] == "XOR")
                        res = XOR (num[0],num[1]);
                    else
                        res = XNOR (num[0],num[1]);
                }
                else
                {
                    if (log[i] == "AND")
                        res = AND (res,num[i+1]);
                    else if (log[i] == "NAND")
                        res = NAND (res,num[i+1]);
                    else if (log[i] == "OR")
                        res = OR (res,num[i+1]);
                    else if (log[i] == "NOR")
                        res = NOR (res,num[i+1]);
                    else if (log[i] == "XOR")
                        res = XOR (res,num[i+1]);
                    else
                        res = XNOR (res,num[i+1]);
                }
            }

            cout << res << endl;
        }
    }

    return 0;
}
