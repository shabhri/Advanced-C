#include<stdio.h>
int a[5][5];
int count = 1;
int x,y,i,j;

int main()
{

	
	x=y=0;
	i=j=0;
	a=spiral(a,5);
	return 1;

}

int[ spiralSq(int a[][], int n)

{	int m,k;
	
	if(n<=0)
		return a;
	else if(n==1)
		a[x][y]=count;
	
	for(k=y; k<=n-1-i; k++)
	{
		a[x][k]= count++;
	}

	for(m=x+1; m<=n-2-j; m++)
	{
		a[m][k-1]=count++;
	}

	for(k=m-1; k>n-1-i; k--)
	{
		a[x][k]=count++;
	}

	for(m=k-1; k>=n-1-j; m--)
	{
		a[m][y]=count++;
	}

	x++;
	y++;
	i++;
	j++;

	spiral(a, n-2);

}
