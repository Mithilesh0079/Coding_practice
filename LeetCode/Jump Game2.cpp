class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        int dp[n];
        
        for(int i=0; i<n; i++)
            dp[i]=n+100;
        
        if(n==1)
           return 0;
        
        dp[0]=0;

        int index= 0;
        int i=1;
        while(i<n)
        {
                if((i-index)<=nums[index])
                {
                    dp[i]= min(dp[i], dp[index]+1);
                    i++;
                }
               else
                index++;
             
        }
        return dp[n-1];
        
    }
};
