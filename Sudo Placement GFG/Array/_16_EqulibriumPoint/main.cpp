/**************************
 Description :  https://practice.geeksforgeeks.org/problems/equilibrium-point/0/?track=sp-arrays-and-searching&batchId=152
 Date             :  117 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<vector>
 
 using namespace std;
 
 int main(){
     unsigned int test{0};
     long long int size{0}, value{0};
     unsigned long long int lsum{0}, rsum{0};
     vector<unsigned long long int> arr;
     
     cin>>test;
     while(test--) {
         cin>>size;
         for(int i=0;i<size;i++){
             cin>>value;
             arr.push_back(value);
         }
         
         for(auto val: arr)
             rsum+=val;
             
         long long int position=-1;    
        for(int i=0;i<size;i++){
            rsum-=arr[i];
            if(lsum==rsum){
                position=i+1;
            }
            else
                lsum+=arr[i];
        }
         
         cout<<position<<endl;
         
         lsum=0;
         rsum=0;
         arr.clear();
     }
     
     cout<<endl;
     return 0;
 }