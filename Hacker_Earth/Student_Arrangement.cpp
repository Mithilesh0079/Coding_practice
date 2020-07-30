#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int N,M,K;
	cin >>N>>M>>K;

	vector<int> A;
	
	for(int i=0; i<N; i++)
	{ 
		int x;
		cin>>x;
		A.push_back(x-1);
	}
// Reading input f
//cout << "Input number is " << num << en// Writing output to
    int empty[M];
	for(int i=0; i<M; i++)
		empty[i]= K;

	int count=0;

    for(int i=0; i<N;i++)
	{
       
	   if(empty[A[i]]>0)
	   empty[A[i]]= empty[A[i]]-1;

	   else
	   {   
		   int row= A[i]+1;
		   while(row!= A[i])
		   {
             if(empty[row]>0)
			 {
				 empty[row]= empty[row]-1;
				 break;
			 }
			 
			 if(row==M-1)
			 row=0;
			 else
			 row++;
 	       }
		   count++;
	    }
	}
	cout<<count;
	return 0;
}
