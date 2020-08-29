#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        
        int a1[n];
        int a2[m];
        
        for(int i=0; i<n; i++)
        cin>>a1[i];
        
        for(int i=0; i<m; i++)
        cin>>a2[i];

        int sum1=0, sum2=0;
        for(int i=0; i<n; i++)
        sum1+= a1[i];
        
        for(int i=0; i<m; i++)
        sum2+= a2[i];
        
        if(abs(sum1-sum2)%2!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(a1, a1+n);
        sort(a2, a2+n);
        int diff= abs(sum1-sum2);
        bool flag= true;
        int i1=0, i2=0;
        
        while(i1<n && i2<m)
        {
            if(abs(a1[i1]-a2[i2])==diff/2)
            {
                cout<<1<<endl;
                flag= false;
                break;
            }
            else
            {
                if(sum1>sum2)
                {
                    if(a1[i1]-a2[i2]>diff/2)
                    i1++;
                    else
                    i2++;
                }
                if(sum1<sum2)
                {
                    if(a2[i2]-a1[i1]>diff/2)
                    i2++;
                    else
                    i1++;
                }
            }
            if(i1==n && i2==m)
            break;
        }
        
        if(flag)
        cout<<-1<<endl;
    }
	return 0;
}
