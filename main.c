#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[])
{
	int n=get_integer();
	int r=get_integer();	
	int result= combination(n,r);
	printf("the result is: %i\n",result);
	
	return 0;
}


int combination(int n,int r)
{
	int a=factorial(n);
	int b=factorial(n-r);
	int c=factorial(r);

	return(a/b/c);
}

int factorial(int n)
{
	int res=1;
	int i;
	for(i=1;i<=n;i++){
		
		res=res*i;	
	}
	
	return res;
}

int get_integer()
{
	int num;
	printf("input an integer: ");
	scanf("%i",&num);	
	return(num);
}


