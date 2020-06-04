int tribonacci(int n) {
        vector<int> arr ={0,1,1};
        
        if(n==0 || n == 1 || n == 2)
            return arr[n];
        
        for(int i = 3; i<=n; i++)
            arr.push_back(arr[i-1]+arr[i-2]+arr[i-3]);
        
        return arr[n];
    }