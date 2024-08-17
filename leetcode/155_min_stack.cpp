// leetcode 


// space expensive
// class MinStack {
// public:
//     stack<pair<int,int>> st;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(!st.empty()){
//            st.push(make_pair(val, min(st.top().second, val)));
//         }
//         else{
//             st.push(make_pair(val, val));
//         }
//     }
    
//     void pop() {
//         st.pop();
//     }
    
//     int top() {
//         return st.top().first;
//     }
    
//     int getMin() {
//         return st.top().second;
//     }
// };


// less space expensive but using long long to handle big integers
// class MinStack {
// public:
//     stack<long long> st;
//     long long min;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         long long val1 = (long long)val;
//         if(st.empty()){
//             st.push(val1);
//             min = val1;
//         }
//         else{
//             if(val1<min){
//                 st.push(2*val1 - min);
//                 min = val1;
//             }
//             else st.push(val1);
//         }
//     }
    
//     void pop() {
//         if(st.empty()) return;
//         else{
//             if(st.top()<min){
//                 min = 2*min - st.top();
//             }
//             st.pop();
//         }
//     }
    
//     int top() {
//         if(st.empty()) return -1;
//         else{
//             if(st.top()<min){
//                 return min;
//             }
//             else return st.top();
//         }
//     }
    
//     int getMin() {
//         if(st.empty()) return -1;
//         else{
//             return min;
//         }
//     }
// };

