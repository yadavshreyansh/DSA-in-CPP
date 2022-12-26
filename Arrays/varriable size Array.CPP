#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
     int m,n;
    cin>>m>>n;

    vector<vector<int> > normal;

    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        vector<int> temp;
        
        for(int j=0;j<t;j++){
            int x1;
            cin>>x1;
            temp.push_back(x1);
        }   
        normal.push_back(temp);

    }

    int p,q;
    for(int i=0;i<n;i++){
        
        cin>>p>>q;
        cout<<normal[p][q]<<endl;
    }
    return 0;
}
