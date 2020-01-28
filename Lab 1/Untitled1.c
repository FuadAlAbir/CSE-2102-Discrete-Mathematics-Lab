#include <stdio.h>

int bitValue(int a);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    bitValue(a);
    bitValue(b);

    int bitOR = a | b;
    bitValue(bitOR);
    printf("%d\n", bitOR);

    int bitAND = a & b;
    printf("%d", bitAND);
    bitValue(bitAND);

    return 0;
}

int bitValue(int a)
{
    while(a != 0)
    {
        printf("%d", a/2);
    }
    printf("/n");
}
