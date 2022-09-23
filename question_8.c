//8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter how many square of natural number you want to print:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*i);
        i++;
    }
    getch();
    return 0;
}