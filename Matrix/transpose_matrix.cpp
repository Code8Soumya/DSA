#include<iostream>
using namespace std;

int main(){

    int r,c;
    cout<<"Give your rows: ";
    cin>>r;
    cout<<"Give your colums: ";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Your matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int t_arr[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            t_arr[j][i] = arr[i][j];
        }
    }
    cout<<"Your transposed matrix is: "<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<t_arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}