#include<bits/stdc++.h>
#define ll long long
using namespace std;


vector<pair<int,int>>out;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a[50];
        int n;
        cin>>n;
        out.clear();
        bool positive=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0)positive=1;
        }
        int step=0;
        if(n==1)cout<<"0\n";
        else if(positive){
            int where;
            for(int i=0;i<n;i++){
                if(a[i]>0){where=i;break;}
            }

            while(a[where]<=20){
                a[where]*=2;
                step++;
                out.push_back({where+1,where+1});
                
            }

            if(n!=1){
                step+=2;
                out.push_back({2,where+1});
                out.push_back({2,where+1});
                a[1]+=2*a[where];

            }
            for(int i=2;i<n;i++){
                step+=2;
                out.push_back({i+1,i});
                out.push_back({i+1,i});
                a[i]+=2*a[i-1];
            }
        }

        else{
            
            for(int i=n-2;i>=0;i--){
                step++;
                out.push_back({i+1,i+2});
                a[i]+=a[i+1];

            }
        }
        cout<<step<<"\n";
        for(auto p:out){
            cout<<p.first<<" "<<p.second<<"\n";
        }

        //for(int i=0;i<n;i++)cout<<a[i]<<" \n"[i==n-1];
    }
}