#include<iostream>

using namespace std;

void merge(int arr[],int p ,int q ,int r )
{
	int n1=q-p+1;
	int n2 = r-q;
	int L[n1];
	int M[n2];
	for(int i=0;i<n1;i++)
	{
		L[i]=arr[p+i];
	}
	for(int j=0;j<n2;j++)
	{
		M[j] = arr[q+1+j];
	}
	int i=0;
	int j=0;
	int k=p;
	while(i<n1 && j<n2)
	{
		if(L[i]<=M[j])
		{
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = M[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k] = M[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
	}

}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<< arr[i] << " ";
	}
}
int main(){
	int arr[] = {67,12,45,23,78,78,14,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,n-1);
	printArray(arr,n);
	return 0;
}
