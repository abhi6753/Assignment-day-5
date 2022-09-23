//10. Write a program to print a table of N.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter number to print its table:\n");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("\n%d * %2d = %3d",n,i,n*i);
        i++;
    }
    getch();
    return 0;
}