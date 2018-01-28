#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i,k;
    bool a,b,c;
    char str[101];

    while (scanf ("%s",str)!= EOF)
    {
        a = b = c = false;
        k = 0;

        for (i=0; str[i]; i++)
        {
            if (islower(str[i]))
                a = true;
            else if (isupper(str[i]))
                b = true;
            else
                c = true;
            
            if (a && b && c)
            {
                ++k;
                a = b = c = false; 
            }
        }
        
        printf ("%d\n",k);
    }

    return 0;
}