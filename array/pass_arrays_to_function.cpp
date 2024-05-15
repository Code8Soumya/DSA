#include<iostream>
using namespace std;

void fun(int arr[]){ // arr is a pointer to the first element of the array
    for(int i = 0; i < 5; i++){ // i is a pointer to the current element of the array
        cout<<arr[i]<<" "; // arr[i] is the value of the current element of the array
    }
    cout<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl; // that why the size is 1 because sizeof(arr) is the size of the pointer not the whole array
}
void fun1(int arr[], int n){
    cout<<arr<<endl;
    int* ptr = arr;
    for(int i = 0; i < n; i++){
        cout<<*arr<<" ";
        arr++;
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    fun(arr);
    int size = sizeof(arr)/sizeof(arr[0]);
    fun1(arr, size);
    cout<<"size of the whole array: "<<size;
    return 0;
}

// int* ptr = arr;     correct
// int* ptr = &arr;    wrong
// int* ptr = &arr[0]; correct
// int* ptr = arr[0];  wrong
// fun(int* a){}       also can pass array like this