class Solution {
    
    bool isValidIpV4(string& ip) {
        if (count(ip.begin(), ip.end(), '.') != 3) {return false;}
        istringstream ss(ip);
        string num;
        int count = 0;
        while(getline(ss, num, '.')) {
            count ++; 
            int len = num.size();
            if (len == 0 || len > 3) {return false;}
            if(len > 1 && num[0] == '0') {return false;}
            int val = 0;
            for (char c : num) {
                if(!isdigit(c)) {return false;}
                val = val * 10 + (c-'0');
                if(val > 255) {return false;}
            }            class Solution {
public:
    void solve(vector<vector<char>>& board) {
       int i,j;
        int row=board.size();
        if(!row)
        	return;
        int col=board[0].size();

		for(i=0;i<row;i++){
			check(board,i,0,row,col);
			if(col>1)
				check(board,i,col-1,row,col);
		}
		for(j=1;j+1<col;j++){
			check(board,0,j,row,col);
			if(row>1)
				check(board,row-1,j,row,col);
		}
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
				if(board[i][j]=='O')
					board[i][j]='X';
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
				if(board[i][j]=='1')
					board[i][j]='O'; 
    }
    
    void check(vector<vector<char> >&vec,int i,int j,int row,int col){
		if(vec[i][j]=='O'){
			vec[i][j]='1';
			if(i>1)
				check(vec,i-1,j,row,col);
			if(j>1)
				check(vec,i,j-1,row,col);
			if(i+1<row)
				check(vec,i+1,j,row,col);
			if(j+1<col)
				check(vec,i,j+1,row,col);
		}
	}
};
        }
        if(count != 4) {return false;}
        return true;
    }
    
    bool isValidIpV6(string& ip) {
        if (count(ip.begin(), ip.end(), ':') != 7) {return false;}
        istringstream ss(ip);
        string num;
        string validChar = "0123456789abcdefABCDEF";
        int count = 0;
        while(getline(ss, num, ':')) {
            count ++; 
            int len = num.size();
            if (len == 0 || len > 4) {return false;}
            for (char c : num) {
                if (!isalnum(c) || validChar.find(c) == string::npos) { return false; }
            }            
        }
        if(count != 8) {return false;}
        return true;        
    }
    
public:
    string validIPAddress(string IP) {
        if (isValidIpV4(IP)) { return "IPv4"; }
        if (isValidIpV6(IP)) { return "IPv6"; }
        return "Neither";
    }
};