#include<iostream>
#include<algorithm>
using namespace std;
void shiftdown(int arr[],int i,int n)
{
    if(i<n)
    {
        int l= 2*i+1;
        int r= 2*i+2;
        int min_index=i;
        
        if(l<n && arr[l]<arr[min_index])
        min_index= l;
        if(r<n && arr[r]<arr[min_index])
        min_index= r;
        
        if(min_index!=i)
        {
            swap(arr[i], arr[min_index]);
            shiftdown(arr, min_index, n);
        }
    }
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    int a1[x];
	    int a2[y];
	    
	    for(int i=0; i<x; i++)
	        cin>>a1[i];
	    for(int j=0;j<y; j++)
	       cin>>a2[j];
	       
	       int i=0;
	       while(i<x)
	       {
	           if(a1[i]<=a2[0])
	           i++;
	           else
	           {
	               swap(a1[i], a2[0]);
	               shiftdown(a1, i+1, x);
	               shiftdown(a2, 0, y);
	           }
	       }
	       sort(a2, a2+y);
	       for(int i=0; i<x; i++)
	       cout<<a1[i]<<" ";
	       for(int i=0; i<y; i++)
	       cout<<a2[i]<<" ";
	       
	       cout<<endl;
	}
	return 0;
}
