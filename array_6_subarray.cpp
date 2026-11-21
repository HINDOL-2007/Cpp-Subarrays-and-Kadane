#include <iostream>
# include<vector>
using namespace std;
int main(){
    const int size =5;
    int arr[size]={1,2,3,4,5};
    for(int st = 0 ; st < size ; st ++){
        for(int end = st ; end < size ; end++){
            for(int i = st ; i <= end ; i ++){
                cout<<arr[i]<<"   ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}