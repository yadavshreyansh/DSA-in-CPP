#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	   int sum = a+b;
	   if ( (a+b)%2==1){
	       cout<<-1<<endl;
	   }
	   else{
	       cout<<sum/2<<endl;
	   }
	   
	    
	}
	return 0;
}
