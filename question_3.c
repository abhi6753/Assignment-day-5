//3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter how many natural number you wants to print in reverse order:\n");
    scanf("%d",&n);
    while(n)
    {
        printf("%.2d\n",n--);
    }
    getch();
    return 0;
}