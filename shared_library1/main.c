#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int div(int a,int b);
int mod_div(int a,int b);

int main()
{
	int a,b;
	printf("Enter a,b\n");
	scanf("%d%d",&a,&b);
	printf("addition = %d\n",add(a,b));
	printf("subtraction = %d\n",sub(a,b));
	printf("division = %d\n",div(a,b));
	printf("modulo division = %d\n",mod_div(a,b));
	return 0;
}
