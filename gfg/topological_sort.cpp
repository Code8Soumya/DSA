// leetcode


// class Solution
// {
// 	public:
// 	void topo(int node, vector<int> adj[], vector<int> &vis, stack<int> &st){
// 	    if(vis[node] == -1){
// 	        vis[node] = 1;
// 	        for(auto it : adj[node]){
// 	            topo(it, adj, vis, st);   
// 	        }
// 	        st.push(node);
// 	    }
// 	}
// 	//Function to return list containing vertices in Topological order. 
// 	vector<int> topoSort(int V, vector<int> adj[]) 
// 	{
// 	    vector<int> vis(V, -1);
// 	    stack<int> st;
// 	    for(int i=0 ; i<V ; i++){
// 	        if(vis[i] == -1){
// 	            topo(i, adj, vis, st);
// 	        }
// 	    }
// 	    vector<int> ans;
// 	    while(!st.empty()){
// 	        ans.push_back(st.top());
// 	        st.pop();
// 	    }
// 	    return ans;
// 	}
// };
