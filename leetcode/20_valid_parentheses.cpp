// leetcode

// class Solution {
// public:
//     // optimal solution
//     bool isValid(string s) {
//         stack<char>st; 
//         for(auto it: s) {
//             if(it=='(' || it=='{' || it == '[') st.push(it); 
//             else {
//                 if(st.size() == 0) return false; 
//                 char ch = st.top();  
//                 if((it == ')' && ch == '(') ||  (it == ']' && ch == '[') || (it == '}' && ch == '{')) {
//                     st.pop();
//                     continue;
//                 }
//                 else return false;
//             }
//         }
//         return st.empty();
//     }

    // Better solution
    // bool isValid(string s) {
    //     if(s.empty()) return true;
    //     stack<int> st;
    //     for(int i=0;i<s.size();i++){
    //         if(!st.empty()){
    //             int temp = st.top();
    //             if( ((temp=='(') && (s[i]==')'))    ||
    //                 ((temp=='{') && (s[i]=='}'))    || 
    //                 ((temp=='[') && (s[i]==']'))    ){
    //                 st.pop();
    //                 continue;
    //             }
    //         }
    //         st.push(s[i]);
    //     }
    //     return st.empty();
    // }
// };