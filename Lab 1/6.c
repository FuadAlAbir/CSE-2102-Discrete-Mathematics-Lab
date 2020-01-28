#include<stdio.h>
#include<math.h>

void print(int x);
int AA(int a[], int b[]);
int AE(int a[], int b[]);
int EA(int a[], int b[]);
int EE(int a[], int b[]);

int main()
{
    int ax[] = {1, 2, 3};
    int bx[] = {1, 4, 9};

    int x, y;
    x = sqrt(y);

    print(AA(ax, bx));
    print(AE(ax, bx));
    //print(EA(ax, bx));
    print(EE(ax, bx));


}

void print(int x)
{
    if(x == 1)
        printf("True\n");
    else printf("False\n");
}

int AA(int a[], int b[])
{
    int i, j, flag = 1;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i]*a[i] != b[j])
            {
                flag = 0;
                return flag;
            }
        }
    }
    return flag;
}

int AE(int a[], int b[])
{
    int i, j, flag = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i]*a[i] == b[j])
            {
                flag = 1;
                return flag;
            }
        }
    }
    return flag;
}

int EE(int a[], int b[])
{
    int i, j, flag = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i]*a[i] == b[j])
            {
                flag = 1;
                return flag;
            }
        }
    }
    return flag;
}

int EA(int a[], int b[])
{
    int i, j, flag = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i]*a[i] == b[j])
            {
                continue;
            }
        }
    }
    return flag;
}
