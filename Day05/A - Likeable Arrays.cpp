/*
Platform :- Hackerearth
Contest :- Hackerearth October easy 2021
Approach :- The basic idea is we store the frequency of each unique element in and we run a loop through them there are 2 Cases :- 
           Case 1 :- When frequency/count of element is > element value , fre[x]>x , here we need to remove (fre[x]-x )values 
           Case 2 :- Else we always have two options either to either to add elements to have (fre[x] = x) or to remove value and make (fre[x]=0) we choose one with min operation.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		map<long long,long long>P;
		long long A[n];
		for(int i=0;i<n;++i){
			cin>>A[i];
			P[A[i]]++;
		}

		long long ans=0;
		for(auto &x:P){
		  // when frequency of x > x
		   if(x.second>x.first)ans+=(x.second-x.first);
		   else {
                                 //here we choose min of two cost to make fre[x]=0 and fre[x]=x
                                  ans+=min(x.second,x.first-x.second);
                         }
		}
		cout<<ans<<"\n";
	}
}
