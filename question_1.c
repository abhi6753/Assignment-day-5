//1. Write a program to print MySirG N times on the screen
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter how many times you want to print:\n");
    scanf("%d",&n);
    while(i<=n)
    {
       printf("MySirG\n");
       i++;
    }
    getch();
    return 0;
}