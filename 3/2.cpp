#include<bits/stdc++.h>
using namespace std;
long long c[100005],m[100005],sum[100005],cc[100005],mm[100005],sumsum[100005];
int main(){

    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>c[i]>>m[i];
        sum[i]=c[i]+m[i];

        cc[i]=c[i];
        mm[i]=m[i];
        sumsum[i]=sum[i];
    }

    sort(c,c+n,greater<long long int>());
    sort(m,m+n,greater<long long >());
    sort(sum,sum+n,greater<long long>());

    for(int i=0;i<n;i++){
        auto rank=lower_bound(c,c+n,cc[i],greater<>());

        cout<<int(rank-c)+1<<" ";

        rank=lower_bound(m,m+n,mm[i],greater<>());

        cout<<int(rank-m)+1<<" ";
    
        rank=lower_bound(sum,sum+n,sumsum[i],greater<>());

        cout<<int(rank-sum)+1<<"\n";
    
    
    }

}