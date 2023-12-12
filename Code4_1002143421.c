/* Md. Ahanaful Alam 1002143421*/

#include<stdio.h>

int CheckValues(int start, int end)
{
    if (start > end)
    {
        printf("\n\nThe input is invalid. Please reenter\n\n\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int GetValues(char j[], char a[] )
{
    int value;
    printf("Enter the %s value for the %s loop ", j, a);
    scanf("%d", &value);
    return value;
}

int main()
{
    char Symbol;
    printf("Enter which character you want to use: ");
    scanf(" %c", &Symbol);

    int StartOut, EndOut;
    do
    {
        StartOut = GetValues("starting", "outer");
        EndOut = GetValues("ending", "outer");
    } 
    while (CheckValues(StartOut, EndOut));

    int StartMiddle, EndMiddle;
    do
    {
        StartMiddle = GetValues("starting", "middle");
        EndMiddle = GetValues("ending", "middle");
    }
    while(CheckValues(StartMiddle, EndMiddle));

    int StartIn, EndIn;
    do
    {
        StartIn = GetValues("starting", "inner");
        EndIn = GetValues("ending", "outer");
    }
    while (CheckValues(StartIn, EndIn));
    
    for(int d = StartOut; d< EndOut; d++)
    {
        for(int b = StartMiddle; b < EndMiddle; b++)
        {
            for(int c = StartIn; c < EndIn; c++)
            {
                printf("%c", Symbol);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}