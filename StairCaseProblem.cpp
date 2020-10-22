#include<bits/stdc++.h>
using namespace std;
//O(2^N) Time Complexity
 int stairCaseRecursive(int n){
    if(n==0 || n==1) 
        return 1;
    return stairCaseRecursive(n-1)+stairCaseRecursive(n-2);
 }
int main()
{
   cout<<stairCaseRecursive(10);
   
   return 0;
}
