int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), [](vector<int>& a, vector<int>&b) {
            return (a[0] - a[1]) <(b[0] - b[1]);
        });
        
        int result =0;
        for(int i=0; i<(costs.size()/2); i++)
            result += costs[i][0];
        for(int i=(costs.size()/2); i<costs.size(); i++)
            result += costs[i][1];
            
        return result;
            
    }