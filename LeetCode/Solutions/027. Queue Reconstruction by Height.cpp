vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> result;
        
        sort(people.begin(), people.end(), [](vector<int>&a, vector<int>&b) {
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        });
        
        for(vector<int> el: people)
            result.insert(result.begin() + el[1], el);
        
        return result;
    }