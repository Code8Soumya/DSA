#include<iostream>
using namespace std;
int main(){
    int arr1[5];
    cout<<arr1[3]<<endl;   // garbage value
    int arr2[5] = {0};
    cout<<arr2[3]<<endl;
    cout<<sizeof(arr2)<<endl;
    cout<<"Total elements in arr2 is: "<<sizeof(arr2)/4;
    return 0;
}





