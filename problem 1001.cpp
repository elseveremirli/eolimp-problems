# include <cstdlib>
# include <iostream>
# include <string.h>
# include <stdio.h>

using
namespace
std;

int
main(int
argc, char * argv[])
{
    char
a[1001], b[1001], c[1002];
int
q, t, i, j, k = 0, n, m;

gets(a);
gets(b);

n = strlen(a);
m = strlen(b);

i = n - 1;
j = m - 1;
q = 0;

while (i >= 0 & & j >= 0)
    {
        t = a[i] - 48 + b[j] - 48 + q;

    if (t >= 2)
    {
    q=1;
    c[k]=t-2+48;
    }
    else
    {
    q=0;
    c[k]=t+48;
    }

    k++;
    i--;
    j--;
    }

    while (i >= 0)
        {
            t = a[i] - 48 + q;

        if (t >= 2)
        {
        q=1;
        c[k]=t-2+48;
        }
        else
        {
        q=0;
        c[k]=t+48;
        }

        k++;
        i--;
        }

    while (j >= 0)
        {
            t = b[j] - 48 + q;

        if (t >= 2)
        {
        q=1;
        c[k]=t-2+48;
        }
        else
        {
        q=0;
        c[k]=t+48;
        }

        k++;
        j--;
        }

    if (q == 1)
        {
            c[k] = '1';
        k + +;
        }


        for (i=k-1; i >= 0; i--)
            cout << c[i];
        cout << endl;

        return EXIT_SUCCESS;
    }