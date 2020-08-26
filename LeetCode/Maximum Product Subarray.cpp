class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int pos= nums[0], neg= nums[0], max_prod= nums[0];
        int n= nums.size();

        for(int i=1; i<n; i++)
        {
           int temp= pos;
           pos= max(pos*nums[i], max(neg*nums[i], nums[i]));
           neg= min(temp*nums[i], min(neg*nums[i], nums[i]));
            
               if(max_prod<pos)
                    max_prod=pos;
                
        }
        
        return max_prod;
    }
};
