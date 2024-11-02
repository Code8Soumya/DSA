// leetcode


// class Solution {
// public:
//     string longestDiverseString(int a, int b, int c) {
//         priority_queue<pair<int, char>> pq;
//         if (a > 0) pq.push({a, 'a'});
//         if (b > 0) pq.push({b, 'b'});
//         if (c > 0) pq.push({c, 'c'});
//         string result = "";
//         while(!pq.empty()) {
//             pair ele = pq.top();
//             pq.pop();
//             if(result.size() >= 2 && result[result.size() - 1] == ele.second && result[result.size() - 2] == ele.second) {
//                 if(pq.empty()) break;
//                 pair ele1 = pq.top();
//                 pq.pop();
//                 result.push_back(ele1.second);
//                 ele1.first--;
//                 if(ele1.first > 0) pq.push(ele1);
//                 pq.push(ele);
//             }
//             else{
//                 result.push_back(ele.second);
//                 ele.first--;
//                 if(ele.first > 0) pq.push(ele);
//             }
//         }
//         return result;
//     }
// };