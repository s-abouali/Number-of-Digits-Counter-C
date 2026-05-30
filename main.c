#include<stdio.h>
int Nums(long N);
main()
{
	long N;
	printf("Enter a number : ");
	scanf("%ld",&N);
	printf("%ld contains %d number(s)",N,Nums(N));
}
int Nums(long N)
{
	int Cpt=0;
	do
	{
		N = N/10;
		Cpt++;
	}while(N!=0);
	return Cpt;
}
