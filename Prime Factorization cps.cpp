#include<bits/stdc++.h>
using namespace std;
const int mx=1e7;
vector<bool>v1;
#define endl '\n'
#define jahid ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
void prime_factorization(int a)
{
    //jahid;
    vector<int>v;
    bool ok=true;
    int x=a;
    if(a<0){
        ok=false;
        a*=(-1);
    }
    for(int i=2;1LL*i*i<=a;i++){
        if(a%i==0){
            while(a%i==0){
                v.push_back(i);
                a/=i;
            }
        }
    }
    if(a>1){
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(ok==true){
        cout<<x<<" = ";
        int j=1;
        for(auto u:v){
            cout<<u;
            if(j<v.size()){
                cout<<" x ";
            }
            j++;
        }
    }
    else{
        cout<<x<<" = -1 x ";
        int j=1;
        for(auto u:v){
            cout<<u;
            if(j<v.size()){
                cout<<" x ";
            }
            j++;
        }
    }
    cout<<endl;
}
int main()
{
    //jahid;
    while(1){
        int a;
        cin>>a;
        if(a==0){
            return 0;
        }
        prime_factorization(a);
    }
}
