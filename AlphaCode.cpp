#include <bits/stdc++.h>
using namespace std;

/* Recursive Approach
 int num_codes(int *input,int size){
   // int *output=new int[size+1];
    if(size==0 || size==1)
        return 1;
    int output=num_codes(input,size-1);
    if(input[size-2]*10+input[size-1]<=26)
        output+=num_codes(input,size-2);
    return output;
 }
 */
 /*
    Storing in array and removing repeatitive calls
 int num_codes(int *input,int size,int *arr){
    if(size==0||size==1)
        return 1;
    if(arr[size]>0)
        return arr[size];
    int output=num_codes(input,size-1,arr);
    if(input[size-2]*10+input[size-1]<=26)
        output+=num_codes(input,size-2,arr);
    arr[size]=output;
    return output;
 }
 */
 long long num_codes(int *input,int size){
     int m=pow(10,9)+7;//changes
     long long *output=new long long[size+1];
     output[0]=1;
     output[1]=1;
     for(int i=2;i<=size;i++){
         output[i]=0;
         if(input[i-1]!=0){//changes
            output[i]=output[i-1]%m;
         }
         
         if(input[i-2]*10+input[i-1]<=26 && input[i-2]!=0){//changes
             output[i]+=output[i-2]%m;
         }
         output[i]%=m;
     }
     long long answer=output[size];
     delete []output;
     return answer;
 }
int main(){
    string n; 
    cin>> n;
    while(n!= "0"){
        int input[n.size()];
        for (int i=0; i<n.size(); i++){
            input[i] = n[i] - '0';
        }
        cout<<num_codes(input, n.size()) << endl;
        cin>>n;
    }
    return 0;
}
