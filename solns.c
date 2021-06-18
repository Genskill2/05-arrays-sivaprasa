/* Enter your solutions in this file */
#include <stdio.h>
int max(int array[],int a)
{
	int max=array[0];
	for(int i=0;i<a;i++)
	{	if(array[i]>max)
		max=array[i];
	}
	return max;
}
int min(int array[],int a)
{
	int min=array[0];
	for(int i=0;i<a;i++)
	{	
		if(array[i]<min)
		min=array[i];
	}
	return min;
}
float average(int array[], int a)
{
	int sum=0;		
	for(int i=0;i<a;i++)
	{	
		sum+=array[i];
	}
	int avg =sum/a;		
	return avg;
}	
int mode(int array[], int a)
{
	int maxcount=0,maxvalue=0;
	for(int i=0;i<a;i++)
	{
		int count=0;
		for(int j=0;j<a;j++)
		{
			if(array[i]==array[j])
				++count;
		}
		if(count>maxcount)
		{
			maxcount=count;
			maxvalue=array[i];
		}
	return maxvalue;	
	}
}
int factors(int a, int array[])
{
	int j=0;
	for(int i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			array[j]=i;
			a=a/i;
			j++;
			i=1;
		}
	}
	return j;
}
