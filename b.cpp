#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
void binary(int*,int,int);
int item,found=0,mid;
int main()
{
	int n;
	cout<<"Enter Number Of elements-:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i]=rand()%(i+1);
	sort(arr,arr+n);
	cout<<"\nSorted Array is-:";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<"\nEnter item to search-:";
	cin>>item;
	binary(arr,0,n);
	if(found==1)
		cout<<"Item found at-:"<<mid+1<<"\n";
	else
		cout<<"\nNot Found\n";
	return 0;			
}

void binary(int *arr,int low,int high)
{
	if(low<high)
	{
	mid=(low+high)/2;
	if(arr[mid]<item)
		binary(arr,mid+1,high);
	else if(arr[mid]>item)
		binary(arr,low,mid);
	else if(arr[mid]==item)
		{
			found=1;
			return;
		}
	}
}
