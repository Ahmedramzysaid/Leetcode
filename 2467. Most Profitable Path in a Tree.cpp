class Solution {
public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n = amount.size();
        
        
        vector<vector<int>> graph(n);
        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
       
        vector<int> bobTime(n, -1);
        vector<bool> visited(n, false);
        
       
        getBobPath(graph, bob, 0, -1, 0, bobTime, visited);
        
       
        return dfs(graph, bobTime, amount, 0, -1, 0);
    }
    
private:

    bool getBobPath(vector<vector<int>>& graph, int node, int target, int parent, int time, vector<int>& bobTime, vector<bool>& visited) {
        if (node == target) {
            bobTime[node] = time;
            return true;
        }
        
        visited[node] = true;
        
        for (int neighbor : graph[node]) {
            if (neighbor != parent && !visited[neighbor]) {
                if (getBobPath(graph, neighbor, target, node, time + 1, bobTime, visited)) {
                    
                    bobTime[node] = time;
                    return true;
                }
            }
        }
        
        return false;
    }
    
    
    int dfs(vector<vector<int>>& graph, vector<int>& bobTime, vector<int>& amount, int node, int parent, int time) {
      
        int current_income = 0;
        
        if (bobTime[node] == -1 || time < bobTime[node]) {
           
            current_income = amount[node];
        } else if (time == bobTime[node]) {
            
            current_income = amount[node] / 2;
        } 
      
        
       
        bool isLeaf = true;
        int max_path_income = INT_MIN;
        
        for (int neighbor : graph[node]) {
            if (neighbor != parent) {
                isLeaf = false;
                max_path_income = max(max_path_income, 
                                      dfs(graph, bobTime, amount, neighbor, node, time + 1));
            }
        }
        
        if (isLeaf) {
            return current_income;
        }
        
        return current_income + max_path_income;
    }
};