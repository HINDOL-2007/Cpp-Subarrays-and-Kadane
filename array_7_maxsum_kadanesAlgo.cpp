#include <iostream>
# include<vector>
using namespace std;
int main(){
    const int size =7;
    int arr[size]={3,-4,5,4,-1,7,-8};
    int maxsum= 0,csum=0;
    cout<<"Kadane's Algorithem"<<endl;
    for(int i = 0 ; i < size ; i ++){
        csum+=arr[i];
        maxsum=max(csum,maxsum);
        if(csum<0){
            csum=0;
        }
    }
    cout<<"Max Subarray sum :- "<<maxsum<<endl;

    return 0;
}