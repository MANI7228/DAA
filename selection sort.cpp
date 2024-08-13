#include<stdio.h>
main()
{
	int a[100],n,i,j,pos,min;
	printf("Enter n value: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				pos=j;
			}
			else{
				min=min;
			}
		}
		a[pos]=a[i];
		a[i]=min;
	}
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}
}
