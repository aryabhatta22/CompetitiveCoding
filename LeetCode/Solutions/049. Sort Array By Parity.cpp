vector<int> sortArrayByParity(vector<int>& A) {
        if(A.size() == 1)
            return A;
       int left = 0;
        int right = A.size()-1;
        
        while(left<right) {
            if(A[left] & 1) {
                swap(A[left], A[right]);
                right --;
            } else {
                left ++;
            }
        }
        
        return A;
    }