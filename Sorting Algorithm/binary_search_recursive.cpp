#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={2,3,4,10,40};
	int x=10;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=binarySearch(arr,0,n-1,x);
	if(result==-1)
	{
		cout<<"element is not present in the array";
	}
	else
	{
		cout<<"element is present in the array";
	}
	return 0;
}

int binarySearch(int arr,int l,int r,int x)
{
	if(r>=l)
	{
		int mid=l+(r-l)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(arr[mid]>x)
		{
			return binarySearch(arr,l,mid-1,x);
		}
		else
		{
			return binarySearch(arr,mid+1,r,x);
		}
	return -1;
	}

