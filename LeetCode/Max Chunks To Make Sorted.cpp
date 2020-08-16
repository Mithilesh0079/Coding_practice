class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int n= arr.size();
        int count=0, max_t=0;
        
        int mx[n], mi[n];
        mx[0]= arr[0];
        mi[n-1]= arr[n-1];
        
       for(int i= 1; i<n; i++)
            mx[i]= max(mx[i-1], arr[i]);

        for(int i=n-2; i>=0; i--)
            mi[i]= min(mi[i+1], arr[i]);

        for(int i=n-1; i>0; i--)
        {
            
            if(arr[i]>arr[i-1] && mx[i]>mx[i-1] && mx[i-1]<mi[i])
                count++; 
        }
        return count+1;
    }
};
