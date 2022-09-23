//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter how many odd natural number in reverse order you wants to print:\n");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d\n",n*2-1);
        n--;
    }
    getch();
    return 0;
}