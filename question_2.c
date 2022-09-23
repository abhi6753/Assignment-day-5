//2. Write a program to print the first N natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter how many natural number you want to print:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i++);
    }
    getch();
    return 0;
}