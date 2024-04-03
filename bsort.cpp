# include<iostream>

using namespace std;

int bsort(int a[],int n){
   for(int i = 0;i<n-1;i++)
   {
   
     for(int j=0;j<n-1-i;j++)
     {
        if (a[j] > a[j +1])
        {
           int temp = a[j];
           a[j] = a[j+1];
           a[j+1] = temp;
         
        }
     }
    
   }
   int m = (n-1)/2;
   int median = a[m];
   return median;
}
int main()
{
    int a[] = {5,4,1,2,3};
    int n = 5;
    int result = bsort(a,n);
    cout << result;
    return 0;
}
