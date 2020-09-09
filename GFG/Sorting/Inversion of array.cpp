#include<iostream>
using namespace std;

long merge(int arr[], int l, int r, int m)
{
    int n1= m-l+1;
    int n2= r-m;
    
    int temp1[n1];
    int temp2[n2];
    
    for(int i=0;i<n1; i++)
    temp1[i]= arr[l+i];
    
    for(int i=0; i<n2; i++)
    temp2[i]=arr[m+1+i];
    
    int i=0, j=0;
    int k=0;
    long count=0;
    while(i<n1&& j<n2)
    {
        if(temp1[i]>temp2[j])
        {
            arr[l+k]= temp2[j];
            j++;
            count+= n1-i;
        }
        else
        {
            arr[l+k]=temp1[i];
            i++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[l+k]= temp1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[l+k]= temp2[j];
        j++;
        k++;
    }
    return count;
}
long Inversion(int arr[],int l, int r)
{
    if(l<r)
    {
        int m= (l+r)/2;
        long x= Inversion(arr, l, m);
        long y= Inversion(arr, m+1, r);
        long z= merge(arr, l, r, m);
        return x+y+z;
    }
    else return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        cin>>arr[i];
        cout<<Inversion(arr, 0, n-1)<<endl;
    }
}
