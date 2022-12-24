#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int sum = x-n;
	    cout<<pow(2,sum)<<endl;
	}
	return 0;
}

