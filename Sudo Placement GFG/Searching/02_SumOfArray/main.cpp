/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/sum-of-array-elements/0/?ref=self
 Date                :  25 Aug, 2019
 **************************/
 
  
 #include<iostream>
 #include<vector>
 
 using namespace std;
 
 int main(){
     
     int test{0};
     cin>>test;
     
     while(test--) {
         
        int size{0}, value{0},sum{0};
        vector<int> arr;
         
         cin>>size;
         for(int i=0;i<size;i++){
             cin>>value;
             arr.push_back(value);
         }
         
         for(int i=0;i<size;i++)
             sum+=arr[i];
         
        cout<<sum<<endl;
         
     }
     
     cout<<endl;
     return 0;
 }