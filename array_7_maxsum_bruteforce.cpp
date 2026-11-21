#include <iostream>
# include<vector>
using namespace std;
int main(){
    const int size =7;
    int arr[size]={3,-4,5,4,-1,7,-8};
    int maxsum= 0;
    cout<<"Brute Force Approch"<<endl;
    for(int st = 0 ; st < size ; st ++){
        int csum=0;
        for(int end = st ; end < size ; end++){
            csum+=arr[end];
            maxsum=max(csum,maxsum);
        }
    }
    cout<<"Max Subarray sum :- "<<maxsum<<endl;

    return 0;
}