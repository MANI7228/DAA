#include<stdio.h> 
void quicksort(int [],int,int); 
void main() 
{ 
 int a[50],i,size; 
 printf("Enter Array Size:"); 
 scanf("%d",&size); 
 printf("Enter Array Elements:\n"); 
 for(i=0;i<size;i++) 
 scanf("%d",&a[i]); 
 printf("\n Array Before Sorting:\n"); 
 for(i=0;i<size;i++) 
 printf("%d\t",a[i]); 
 quicksort(a,0,size-1); 
 printf("\n Array After QUICK SORTING IS:\n"); 
 for(i=0;i<size;i++) 
 printf("%d\t",a[i]); 
} 
void quicksort(int a[],int first,int last) 
{ 
 int i,j,temp,pivot; 
 if(first<last) 
 { 
 pivot=first; 
 j=last; 
 i=first; 
 while(i<j) 
 { 
 while(a[i]<=a[pivot]&&i<last) 
 i++; 
 while(a[j]>a[pivot]) 
 j--; 
 if(i<j) 
 { 

 temp=a[i]; 
 a[i]=a[j]; 
 a[j]=temp; 
 } 
 } 
 temp=a[pivot]; 
 a[pivot]=a[j]; 
 a[j]=temp; 
 quicksort(a,0,j); 
 quicksort(a,j+1,last); 
 } }
