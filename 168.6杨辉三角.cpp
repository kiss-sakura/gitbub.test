#include<stdio.h>
int main()
{
	int a[10][10],i,j;
	a[0][0]=1;
	a[1][0]=1;
	a[1][1]=1;
	printf("%-5d\n",a[0][0]);
	printf("%-5d%-5d\n",a[1][0],a[1][1]);
	for(i=2;i<10;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
		printf("%-5d",a[i][0]);
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			printf("%-5d",a[i][j]);
		}
		printf("%-5d\n",a[i][i]);
	} 
	return 0;
}
