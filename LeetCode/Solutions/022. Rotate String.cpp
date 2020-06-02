class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.length() != B.length())
            return false;
        if(A.length() == 0)
            return true;
        
        //---------------- KMP -----------------
        
        //pi table
        int j = 0;
        vector<int> pi;
        pi.push_back(-1);
        for(int i=1; i<B.length(); i++) {
            if(B[i] == B[j]) {
                pi.push_back(j);
                j++;
            } else {
                pi.push_back(-1);
                j = 0;
            }
        }
        
        string str = A+A;
        j = -1;
        for(int i=0; i<str.length(); i++) {
            // cout<<str[i]<<"-"<<B[j+1]<<endl;
            if(str[i]  == B[j+1])
                j++;
            else if(j != -1){
                j = pi[j];
                i--;
            }
            if(j == pi.size()-1)
                return true;
        }
        
        return false;
    }
};