/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 222
Approach :- we use a vector of pair to store the points and index of each values now we will play m games and in each game we will conduct matches between 1-->2 , 3-->4 and so on
            and after each game we update the values in increasing order .
*/
#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,pair<int,int>>&P,pair<int,pair<int,int>>&Q){
    if(P.first==Q.first)return P.second.first<Q.second.first;
    return P.first>Q.first;
}

int main(){
   int n,m;
   cin>>n>>m;
   
   
   vector<pair<int,pair<int,int>>>points;
   
   char ch[2*n][m];
   for(int i=0;i<2*n;++i){
       for(int j=0;j<m;++j){
           cin>>ch[i][j];
       }
       points.push_back({0,{i,0}});
   }
   
   int temp=m;
   while(m--){
       for(int i=0;i<(2*n);i+=2){
           char ch1=ch[points[i].second.first][points[i].second.second];
           char ch2 =ch[points[i+1].second.first][points[i+1].second.second];
           
           if(ch1=='G'){
               if(ch2=='G'){
                   //when we have same character we check index of occurence
                    
                       points[i].second.second++;
                       points[i+1].second.second++;
                    
               }
               else if(ch2=='C'){
                   points[i].first++;
                   points[i].second.second++;
                   points[i+1].second.second++;
               }
               else{
                   points[i+1].first++;
                   points[i+1].second.second++;
                   points[i].second.second++;
               }
           }
           else if(ch1=='C'){
               if(ch2=='G'){
                   points[i+1].first++;
                   points[i+1].second.second++;
                   points[i].second.second++;
               }
               else if(ch2=='C'){
                     
                       points[i].second.second++;
                       points[i+1].second.second++;
                    
               }
               else{
                   points[i].first++;
                   points[i].second.second++;
                   points[i+1].second.second++;
               }
           }
           else{
               if(ch2=='G'){
                   points[i].first++;
                   points[i].second.second++;
                   points[i+1].second.second++;
               }
               else if(ch2=='C'){
                   points[i+1].first++;
                   points[i+1].second.second++;
                   points[i].second.second++;
               }
               else{
                   
                       points[i].second.second++;
                       points[i+1].second.second++;
                    
               }
           }
       }
       //cout<<" *"<<endl;
       sort(points.begin(),points.end(),comp);
   }
  // vector<int>rank(2*n);
   
   for(auto &x:points){
      cout<<x.second.first+1<<"\n";
   }
   
}
