#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(11);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(12);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();   // pop_back() deletes the last element of the vector 
    v.pop_back();   // but doesn't change the capacity of the vector
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<v.size()<<" "<<v.capacity()<<endl;
    vector<int> v1(5,10);
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<v1.size()<<" "<<v1.capacity()<<endl;
    return 0;
}