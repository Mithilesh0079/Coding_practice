#include<iostream>
#include<algorithm>
using namespace std;
int min_diff(int arr[],int n, int k)
{
        int smallest= 1000,largest=0;
	    
        for(int i=0; i<n; i++)
        {
            smallest= min(smallest, arr[i]);
            largest= max(largest, arr[i]);
        }
        if(largest-k<=0)
        return largest-smallest;
        
        int min_t= min(smallest+k, largest-k);
        int max_t= max(smallest+k, largest-k);
        
        for(int i= 0; i<n; i++)
        {
            if(arr[i]<k)
            {
                min_t= min(arr[i]+k, min_t);
                max_t= max(arr[i]+k, max_t);
            }
            
            else if(arr[i]-k>= min_t || arr[i]+k<= max_t)
            continue; // do nothing
            
            else
            {
                if(arr[i]+k- max_t<= min_t-(arr[i]-k))
                max_t= arr[i]+k;
                else
                min_t= arr[i]-k;
            }
        }
        
        return min(largest-smallest, max_t- min_t);
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    int k;
	    cin>>k;
	    
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    //sort(arr, arr+n);
	    
	    cout<< min_diff(arr, n, k)<<endl;

	    t--;
	}
	return 0;
}
