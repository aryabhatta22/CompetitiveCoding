/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array/0/?track=sp-arrays-and-searching&batchId=152
 Date                :  25 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<vector>
 
 using namespace std;
 
 int main(){
     
     int test{0};
     cin>>test;
     
     while(test--) {
         
         int size{0}, value{0},key{0};
     bool found{false};
     vector<int> arr;
         
         cin>>size;
         for(int i=0;i<size;i++){
             cin>>value;
             arr.push_back(value);
         }
         cin>>key;
         for(int i=0;i<size;i++){
             if(arr[i]==key){
                 found=true;
                 cout<<i<<endl;
                 break;
             }
         }
         
         if(!found)
             cout<<"-1"<<endl;
         
     }
     
     cout<<endl;
     return 0;
 }