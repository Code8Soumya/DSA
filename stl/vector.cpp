#include<bits/stdc++.h>
using namespace std;

void learn_vector(){
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);
    
    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(1,2);

    vector<int> v3(5,100);
    vector<int> v4(5);
    vector<int> v5(5,20);
    vector<int> v6(v3);

    cout<<v6[0]<<endl;

    cout<<(*v5.begin())<<" ";
    cout<<&(*v5.begin())<<endl;

    for(vector<int>::iterator it = v5.begin();it != v5.end();it++){
        cout<<*it<<" ";
        cout<<&(*it)<<endl;
    }

    for(auto it = v1.begin();it != v1.end();it++){
        cout<<*it<<" ";
        cout<<&(*it)<<endl;
    }

    cout<<v1.size()<<" ";
    v1.erase(v1.begin()+1);
    cout<<v1.size()<<endl;

    cout<<v5.size()<<" ";
    cout<<*(v5.end()-1)<<" "; // vector.end() gives the address of last element + 1
    cout<<v5[4]<<endl;

    vector<int> v7(5, 50);
    v7.insert(v7.begin(), 300);
    cout<<v7.size()<<" ";
    v7.insert(v7.begin()+2, 3, 100);
    cout<<v7.size()<<endl;

    vector<int> v8={1,2,3};
    cout<<v8.size()<<" ";
    cout<<v7.size()<<" ";
    v7.insert(v7.begin(),v8.begin(),v8.end());
    cout<<v7.size()<<" ";
    v7.pop_back();
    cout<<v7.size()<<" ";
    v7.clear();
    cout<<v7.size()<<endl;
}

int  main(){
    learn_vector();
    return 0;
}