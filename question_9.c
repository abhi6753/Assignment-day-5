//9. Write a program to print cubes of the first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter how many cubes of natural numbers you want to print:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    getch();
    return 0;
}