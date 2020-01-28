#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z, flag = 0;

    // scanning z as user input
    scanf("%d", &z);

    // iteration loop x = 2 to less than z
    for(x = 2; x < z; x++)
    {
        int tempY;
        
        // preventing printing the pair
        // it's conjugate is printed before
        if(y == tempY)
        {
            continue;
        }

        // storing the values of square root
        // of y in two types, float and int
        float yfs = z*z - x*x;
        float yf = sqrt(yfs);
        y = sqrt(yfs);

        // checking if y is an integer
        // then y and corresponding x pair is a solution
        if(y == yf)
        {
            printf("(x, y) : (%d, %d)\n", x, y);
            tempY = y;
            flag = 1;
        }
    }

    // flag to check if any solution is not found...
    if(flag == 0)
    {
        printf("No Possible Solition.\nTry again...\n");
        main();
    }

    char ch;
    scanf("%s", &ch);

    return 0;
}