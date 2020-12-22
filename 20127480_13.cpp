#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,k,z=0,f,n,min;
	cin>>a>>b;
	c=a+b;
	int arr1[a],arr2[b],arr3[c];
	cout<<"Nhap a: ";
	for(i=0;i<=a-1;i++)
	{
		cin>>arr1[i];
	};
	
	cout<<"Nhap b: ";
	for(i=0;i<=b-1;i++)
	{
		cin>>arr2[i];
	};
	
	for(i=0;i<=a-1;i++)
	{
	
			arr3[i]=arr1[i];
	};
	
	for(i=a;i<=c-1;i++)
	{
		arr3[i]=arr2[z];
		z++;
		
		
		
	};
	
	for(i=0;i<=c-1;i++)
	{
		f=arr3[i];
		for(k=0;k<=c-1;k++)
		{
			n=arr3[k];
			if(k!=i)
			{
				if(f<n)
				min=f;
				if(n<f)
				min=n;
				if(n==f)
				min=f;
				if(i==c-1)
			min=arr3[i];
			};
		
			
		};
		cout<<min;
		
	};
	
	
	return 0;
}
