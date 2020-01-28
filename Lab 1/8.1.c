#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, flag = 0;
    scanf("%d", &c);
    for(a = 1; a < c; a++)
    {
        int qudif = c*c*c - a*a*a;
        float bf = pow(qudif, .33333333);
        int b = pow(qudif, .33333333);
        if(bf*bf == (float) b*b)
        {
            printf("%d %d\n", a, b);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("Not Found\n");
    }
    return 0;
}

