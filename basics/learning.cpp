// #include<iostream>
// using namespace std;
// int main(){
//     char a;
//     char b;
//     a = 'a';
//     b = '5';
//     cout<<int(a)<<endl;
//     cout<<int(b);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=100;
//     char c='b';
//     string s="soumya";
//     float f = 3.14E6;
//     double d = 3.14159;
//     cout<<sizeof(i)<<endl;
//     cout<<sizeof(c)<<endl;
//     cout<<sizeof(s)<<endl;
//     cout<<f<<endl;
//     cout<<sizeof(f)<<endl;
//     cout<<d<<endl;
//     cout<<sizeof(d)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch = 'Q';
//     char *p = &ch;  // p holds the address of ch
//     cout << *p;     // outputs the character ’Q’
//     ch = 'Z';       // ch now holds ’Z’
//     cout << *p;     // outputs the character ’Z’
//     *p = 'X';       // ch now holds ’X’
//     cout << ch;     // outputs the character ’X’
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     double f[5];     // array of 5 doubles: f[0], . . ., f[4]
//     int m[10];       // array of 10 ints: m[0], . . ., m[9]
//     f[4] = 2.5;
//     m[2] = 4;
//     cout << f[m[2]]; // outputs f[4], which is 2.5
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char c[] = {'a','b','c','d','e'};
//     char* p = c;    // p points to c[0]
//     char* q = &c[0];    // q also points to c[0]
//     char* r = &c[1];
//     cout << c[2] << p[2] << q[2] << r[2] << r[-1];  // outputs “cccda”
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "to be";
//     string t = "not " + s;  // t = “not to be”
//     string u = s + " or " + t;  // u = “to be or not to be”
//     if(s > t){  // true: “to be” > “not to be”
//         cout << u;  // outputs “to be or not to be”
//     }
//     s = "John";  // s = “John”
//     int i = s.size();   // i = 4
//     char c = s[3];  // c = ’n’
//     s += " Smith";  // now s = “John Smith”
//     cout << "\n" << s;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char* buffer = new char[500]; // allocate a buffer of 500 chars
//     buffer[3] = 'a'; // elements are still accessed using [ ]
//     cout << buffer[3] <<endl;
//     delete [] buffer; // delete the buffer
// }

// #include<iostream>
// using namespace std;
// void nForest(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     nForest(n);
// }

// #include <iostream>
// using namespace std;
// void y(int counter, int i)
// {
//     if(i == counter) return;
//     cout<<i<<endl;
//     i ++;
//     y(counter, i);
// }

// int main()
// {
//     int counter;
//     int i = 0;
//     cout<<"Give your number: "<<endl;
//     cin>>counter;
//     y(counter, i);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Input your array size: "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int hash[n]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] += 1;
//     }
//     cout<<"Your required number: "<<endl;
//     int p;
//     cin>>p;
//     cout<<"Your required number is "<<hash[p]<<" times in given array."<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int hash[26] = {0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a'] += 1;
//     }
//     char c;
//     cin>>c;
//     cout<<hash[c-'a'];
//     return 0;
// }

// #include<iostream>
// #include<map>
// #include<unordered_map>
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     map<char,int> mpp;
//     for(int i=0;i<s.size();i++){
//         mpp[s[i]]++;
//     }
//     char c;
//     cin>>c;
//     cout<<mpp[c];
//     return 0;
// }

// Selection Sort
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Input your array size: ";
    cin >> n;
    int arr[n];
    cout << "Add your elements: " << endl;
    for (int i = 0; i < n; i++)
    {   
        cin >> arr[i];
    }
    cout << "Your unsorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int min_idx;
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    cout << endl;
    cout << "Your sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}