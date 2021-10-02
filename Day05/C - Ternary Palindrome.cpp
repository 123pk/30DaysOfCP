/*
Platform :- Hackerearth
Contest :- Hackerearth October easy 2021
Approach :- This problems also can be solved by just analysing the problem , it states that we want permutation of string with atmost 'n' palindromic substring , 
           you should know that stirng of 1 character is a palindrome so a given string already have atleast 'n' palindromes , so you want to arrange elements such that we 
           don't have palindrome of size>1 ,which can be done by arraning stirng in some pattern like this "123123.." or "213213.. etc , so max answer is '6' when we have count of all unque character equal
           as there are 3 unique characters atmax our string can have and all different permutaion of 3 character is 3! = 6.
           if difference between max count of character and min count of character is > 1 then we cannot have any valid permutation in that case ans is '0'.
*/
#include<bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;

    while(t--){
           string s;
           cin>>s;
           int n=s.size();
           map<char,int>P;
           for(int i=0;i<n;++i)P[s[i]]++;

           int A[3]={P['0'],P['1'],P['2']};
           sort(A,A+3);
           if(A[2]==A[0])cout<<6<<"\n";
           else if(A[2]-A[0]>1)cout<<0<<"\n";
           else if(n==1)cout<<"2\n";
           else if(A[2]==A[1] || A[1]==A[0]) cout<<2<<"\n";
           else cout<<"1\n";
	
    }
}
