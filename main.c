/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
int n;
printf("nhap vao gia tri n cua ban ");
scanf("%d", &n);
double sum = 0;
for(int i = 1; i<=n;i++)
{
    sum +=(double)(2*i+1)/(2*i+2);
}
printf("%f",sum);




	return 0;
}
