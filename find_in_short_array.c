
/*
Search In A Sorted Array (100 Marks)
Given a sorted array and a number x, find a pair in array whose sum is closest to x and you need to add those two numbers and print that number to the stdout.

Input Format
You will be taking a number as an input from stdin which tells about the length of the array. On another line, array elements should be there with single space between them. Next line should have a integer value. 

Constraints
1 < N < 10^5
1 < A[i] < 10^5
1 < Val < 10^5

Output Format
You need to print the addition of two numbers whose sum is closest to x. 


*/








#include<stdio.h>
int main()
{

	int n;
	int i,j,temp,w;
	scanf("%d",&n);
	int a[6];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int m;
	scanf("%d",&m);
	
	
	int y=65553;
int e,k;

	for(i=0;i<n;i++)
{
		  for(j=i;j<n-1;j++)
     {   
     	temp=a[i]+a[j+1];
       
          w=m-temp;
          if(w<0)
          	  w=w*(-1);
          	if(w<y)
          	{
          		y=w;
          		e=a[i];
          		k=a[j+1];
          	}
       
    }
 
}


printf("%d",e+k);
}