class Solution {
public:
    int maxVowels(string s, int k) {
        
        int count= 0;
        int n= s.size();
        int max_t=0;
        
        for(int j=0; j<k; j++)
        {
            if(s[j]=='a'|| s[j]=='e'|| s[j]=='i'||s[j]=='o'|| s[j]=='u')
                count++;
        }
        
        int j= k;
        
        while(j<n)
        {
            if(count>max_t)
                max_t=count;

            if((s[j]=='a'|| s[j]=='e'|| s[j]=='i'||s[j]=='o'|| s[j]=='u') && !(s[j-k]=='a'|| s[j-k]=='e'|| s[j-k]=='i'||s[j-k]=='o'|| s[j-k]=='u'))
                count++;
            
            else if(!(s[j]=='a'|| s[j]=='e'|| s[j]=='i'||s[j]=='o'|| s[j]=='u') && (s[j-k]=='a'|| s[j-k]=='e'|| s[j-k]=='i'||s[j-k]=='o'|| s[j-k]=='u'))
                count--;
            
            j++;

        }
        
      if(count>max_t)
          max_t= count;
        
        return max_t;
    }
};
