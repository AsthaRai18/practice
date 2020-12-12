#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    int m;
    cin>>m;
    int kj;
    cin>>kj;
    pair<int,int>p[m];
    vector<int>g;
    int a,b;
    for(int i=0;i<m;i++)
    {  
        cin>>a;
        cin>>b;
        p[i].first=a;
        p[i].second=b;
    }
    int l;
    for(int i=0;i<m;i++)
    {
        l=(p[i].first*p[i].first)+(p[i].second*p[i].second);
        g.push_back(l);
    }
    sort(g.begin(),g.end());
    int sum=0;
    int k;
    for(int i=0;i<m;i++)
    {
     k=(p[i].first*p[i].first)+(p[i].second*p[i].second);
     for(int j=0;j<kj;j++) 
     {  if(g.at(j)==k)
         sum=sum+p[i].first+p[i].second;
     }   
    }
    cout<<sum;
    }
}