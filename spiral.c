#include<stdio.h>
void spiralSq(int a[][])

{

	
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

}
