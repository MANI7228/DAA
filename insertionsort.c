#include<stdio.h>
main()
{
	int a[100],n,i,j,key;
	printf("Enter n value: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
			key=a[i];
			j=i-1;
			while(j>=0&&a[j]>key)
			{
				a[j+1]=a[j];
				j=j-1;
			}
			a[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}
}
