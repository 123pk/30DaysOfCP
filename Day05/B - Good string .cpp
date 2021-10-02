/*
Plataform :- Hackerearth
Contest :- Hackerearth October easy 2021
Approach :- If you carefully read the problem and analyse it you will find that you only care about strings which have all characters same as for other string with 
            mix character you will always be able to form pair , so count number of strings with (1111...) all_ones and (000...)all_zeros and store in two separate variable and the 
            ans is total_pair_possible - (all_ones * all_zeros).
            Total number of pair for 'n' size array is [ (n*(n-1))/2 ]
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
        
		int c=0,d=0;
		vector<string>P(n);
		for(int i=0;i<n;++i){
			cin>>P[i];
			sort(P[i].begin(),P[i].end());
			if(P[i][0]==P[i][P[i].size()-1]){
				if(P[i][0]=='0')c++;
				else d++;
			}
		}
         
		long long ans=n;
		ans*=(n-1);
		ans/=2;

		long long temp=c;
		temp*=d;
		ans-=temp;
		cout<<ans<<"\n";
	}
}
