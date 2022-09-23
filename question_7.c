//7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter how many even natural number you want to print in reverse order:\n");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d\n",n*2);
        n--;
    }
    getch();
    return 0;
}