#include<iostream>
#include<bits/stdc++.h>
#include <cstdlib> 
using namespace std;

int partition(int arr[], int l, int r)
  {
     int pivot= arr[r];
     int i=l-1;
     for(int j=l; j<=r; j++)
     {
         if(arr[j]<pivot)
         {
             i++;
             swap(arr[i], arr[j]);
         }
     }
     i++;
     swap(arr[i], arr[r]);
     return i;
  }

int kthsmallest(int arr[], int l, int r, int k)
{
    while(l<=r)
    {
       srand(time(NULL)); 
       if(r!=l)
       {
           int random= l + rand() % (r- l); 
           swap(arr[random], arr[r]);
       }
       int position= partition(arr, l, r);

       if(position+1==k)
       return arr[position];
    
       else if(position+1>k)
       r= position-1;
       else
       l= position+1;
    }
    return 0;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    int arr[n];
	    for(int i=0;i<n; i++)
	    scanf("%d", &arr[i]);
	    
	    int k;
	    scanf("%d",&k);
	    printf("%d\n", kthsmallest(arr,0, n-1, k));
	    
	}
	return 0;
}
