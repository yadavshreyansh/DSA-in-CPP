#include <iostream>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, m;
	    cin>>n>>m;
	    vector<ll>v(n),v1(n);
	    for(auto &x:v)cin>>x;
	    for(auto &x:v1)cin>>x;
	    ll sum = 0;
	    for(int i= 0; i<n ;i++)
	    {
	        if(v[i]>=m) 
	        sum+=v1[i];
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
