// leetcode

// push is expensive
// class MyQueue {
// public:
//     stack<int> st1;
//     stack<int> st2;
//     MyQueue() {
//     }
    
//     void push(int x) {
//         while(!st1.empty()){
//             st2.push(st1.top());
//             st1.pop();
//         }
//         st1.push(x);
//         while(!st2.empty()){
//             st1.push(st2.top());
//             st2.pop();
//         }
//     }
    
//     int pop() {
//         int temp = st1.top();
//         st1.pop();
//         return temp;
//     }
    
//     int peek() {
//         return st1.top();
//     }
    
//     bool empty() {
//         return st1.empty();
//     }
// };


// push less expensive but pop and peek more expensive
// class MyQueue {
// public:
//     stack<int> st1;
//     stack<int> st2;

//     void transfer(stack<int> &st1, stack<int> &st2){
//         while(!st1.empty()){
//             st2.push(st1.top());
//             st1.pop();
//         }
//     }

//     MyQueue() {
//     }
    
//     void push(int x) {
//         st1.push(x);
//     }
    
//     int pop() {
//         if(st2.empty()) transfer(st1,st2);
//         int temp = st2.top();
//         st2.pop();
//         return temp;
//     }
    
//     int peek() {
//         if(st2.empty()) transfer(st1,st2);
//         return st2.top();
//     }
    
//     bool empty() {
//         return st1.empty() && st2.empty();
//     }
// };

