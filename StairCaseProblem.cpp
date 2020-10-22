#include<bits/stdc++.h>
using namespace std;
//O(2^N) Time Complexity
 int stairCaseRecursive(int n){
    if(n==0 || n==1) 
        return 1;
    return stairCaseRecursive(n-1)+stairCaseRecursive(n-2);
 }
//O(N) Time Complexity
 int stairCaseDP(int n){
    if(n==0 || n==1)
        return 1;
    int *dp=new int[n+1];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
    int result=dp[n];
    delete []dp;
    return result;
 }
int main()
{
   cout<<stairCaseRecursive(10)<<endl;
   cout<<stairCaseDP(10);
   return 0;
}
