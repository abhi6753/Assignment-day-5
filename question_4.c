//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter how many odd natural number you wants to print:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*2-1);
        i++;
    }
    getch();
    return 0;
}