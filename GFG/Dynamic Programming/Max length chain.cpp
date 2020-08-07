// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/

#include<algorithm>

bool sortcol(struct val &p1, struct val &p2)
{
    if(p1.first==p2.first)
    return p1.second<p2.second;
    else
    return p1.first<p2.first;
}

int maxChainLen(struct val p[],int n)
{
    int count=1;
    sort(p, p+n, sortcol);
    
    int start=0;
     for(int i=1; i<n; i++)
     {
         for(int j=start; j<=i; j++)
         {
           if(p[i].first>p[j].second)
           {
               start=i;
               count++;
               break;
           }
           
         }
     }
     return count;
}
