#include <iostream>
 int longestIncreasingSubsequence(int arr[],int size){
    int *output=new int[size];
    output[0]=1;
    for(int i=1;i<size;i++){
        output[i]=1;
        for(int j=i-1;j>0;j--){
            if(arr[j]>arr[i])
                continue;
            int possibleAnswer=output[i]+1;
            if(possibleAnswer>output[i])
                output[i]=possibleAnswer;
        }
    }
    int best=0;
    for(int i=0;i<size;i++){
        if(best<output[i])
            best=output[i];
    }
    delete []output;
    return best;
 }
using namespace std;

int main()
{
  int arr[]={2,1,3,4,9,7,8};
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<longestIncreasingSubsequence(arr,size);
  return 0;
}
