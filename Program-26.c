/*
Objective:Write C program to learn iterative statements like while and do while loops.
Program-26
Write a c program to print 1 to n numbers
*/

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("All numbers from 1 to %d:\n",n);
    i=1;
    while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }
    return 0;
}
