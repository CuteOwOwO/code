#include<bits/stdc++.h>
using namespace std;

long long gcd(long long x,long long y){

    if(y==0){return x;}
    else {return(gcd(y,x%y));}


}


int main(){

    cin.tie(0)->sync_with_stdio(0);
    long long  n,m,x,y,q;
    cin>>n>>m>>x>>y>>q;
    //cout<<gcd(n,m)<<"\n";
    long long bigger=0;

    
    if (gcd(n,m)!=1){bigger=n*m/gcd(n,m);} 
     
    else {bigger=n*m;}
     
    
     
    long long ask;
     
    while(q--){
        cin>>ask;
        if(ask>bigger){cout<<bigger<<"\n";}
        else{cout<<ask<<"\n";}
    }




}