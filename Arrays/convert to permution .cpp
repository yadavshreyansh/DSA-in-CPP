Problem
You are given an array AA of size NN. In one operation, you can:

Choose an index ii (1\le i \le N)(1≤i≤N) and increase A_iA 
i
​
  by 11.
Find the minimum number of operations required to convert the array AA into a permutation of size NN. If it is impossible to do so, print -1−1.

Note that a permutation of size NN contains each element from 11 to NN exactly once.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains the integer NN — the size of the array.
The next line contains NN space-separated integers, the elements of the array AA.
Output Format
For each test case, output on a new line, the minimum number of operations required to convert the array AA into a permutation of size NN.
If it is impossible to do so, print -1−1.

Constraints
1 \leq T \leq 5001≤T≤500
1 \leq N \leq 10001≤N≤1000
0 \leq A_i \leq 10000≤A 
i
​
 ≤1000
Sample 1:
Input
Output
4
4
3 1 1 2
3
0 3 3
3
3 2 1
3
2 0 1
3
-1
0
3
Explanation:
Test case 11: We can convert the array AA into a permutation using 33 operations:

Operation 11: Choose i = 3i=3 and increase A_iA 
i
​
  by 11. Thus, the array becomes A = [3, 1, 2, 2]A=[3,1,2,2].
Operation 22: Choose i = 3i=3 and increase A_iA 
i
​
  by 11. Thus, the array becomes A = [3, 1, 3, 2]A=[3,1,3,2].
Operation 33: Choose i = 3i=3 and increase A_iA 
i
​
  by 11. Thus, the array becomes A = [3, 1, 4, 2]A=[3,1,4,2].
It can be shown that this is the minimum number of operations required to convert AA into a permutation.

Test case 22: The given array cannot be converted into a permutation using any number of operations.

Test case 33: The given array is already a permutation. Thus, we require 00 operations.

Test case 44: We can convert the array AA into a permutation using 33 operations:

Operation 11: Choose i = 1i=1 and increase A_iA 
i
​
  by 11. Thus, the array becomes A = [3, 0, 1]A=[3,0,1].
Operation 22: Choose i = 2i=2 and increase A_iA 
i
​
  by 11. Thus, the array becomes A = [3, 1, 1]A=[3,1,1].
Operation 33: Choose i = 3i=3 and increase A_iA 
i
​
  by 11. Thus, the array becomes A = [3, 1, 2]A=[3,1,2].
It can be shown that this is the minimum number of operations required to convert AA into a permutation.
  
  
  
  
  
  #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        a[0]=0;
        sort(a, a+1+n);
        int flag = 0;
        long long ans =0;
        for (int i=1; i<=n; i++){
            if (a[i]<=i)
            {
                ans+=i-a[i];
                i-a[i];
            }
            else{
                flag =1;
                break;
            }
        }
        if (flag ==1) cout<<-1<<endl;
        else cout<<ans <<endl;
    }
	return 0;
}

  
