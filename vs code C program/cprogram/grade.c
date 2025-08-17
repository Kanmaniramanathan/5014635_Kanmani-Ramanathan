#include <stdio.h>
int main( )
{
    int score;
    printf("ENTER THE SCORE:");
    scanf("%d",&score);
    printf("%d\n",score);
    if(score>=90)
    {
        printf("Grade A\n");
    }
    else if (score>=80)
    {
        printf("Grade B\n");
    }
    else 
    {
        printf("Grade C\n");
    }
    return 0;
}