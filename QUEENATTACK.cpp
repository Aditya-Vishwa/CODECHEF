#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1e9 + 7


int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
    ll n,x,y;
    cin>>n>>x>>y;
    int res=0;
    
    res+=2*(n-1);
    int a=min(x-1,y-1),b=min(x-1,n-y),c=min(n-x,y-1),d=min(n-x,n-y);
    res+=a+b+c+d;
    cout<<res<<endl;
}

}
