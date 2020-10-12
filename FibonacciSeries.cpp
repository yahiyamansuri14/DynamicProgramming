#include <bits/stdc++.h>
using namespace std;
//Time Complexity O(2^n)
//Time Complexity higher because perform some function calls repeatitively
int fib(int n){
    if(n==0||n==1)
        return 1;
    return (fib(n-1)+fib(n-2));
}
//Time Complexity O(n) & Space Complexity O(n)
//issue:-first array will be filled from backward and form forward even tough array is filled in first attempt 
int fib1(int n,int *arr){
    if(n==0||n==1)
        return 1;
    if(arr[n]>0)
        return arr[n];
    int output=fib1(n-1,arr)+fib1(n-2,arr);
    arr[n]=output;
    return output;
}
 int fib2(int n){
    int *arr=new int[n+1];//max call can be n
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    //sice we need to free memory so if i delete this array i won't be able to return it so first store it 
    int output=arr[n];
    delete arr;
    return arr[n];
    
 
}
int main()
{
   //cout<<fib(50)<<endl;
   int n=10;
   //int *arr=new int[51];
   //cout<<fib1(n,arr);
    cout<<fib2(20);
   return 0;
}
