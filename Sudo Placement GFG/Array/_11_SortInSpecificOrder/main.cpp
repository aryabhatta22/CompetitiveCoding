/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/sort-in-specific-order/0/?track=sp-arrays-and-searching&batchId=152
 Date                :  16 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<vector>
 #include<algorithm>
 
 using namespace std;
 
 int main(){
     
     long long int  test{0}, size{0}, oddIndex{0}, value{0};
     vector<long long int> arr;
     vector<long long int> res;
     
     cin>>test;
     while(test--){
         cin>>size;
         for(int i=0;i<size;i++){
             cin>>value;
             arr.push_back(value);
         }
         
         for(int i=0;i<arr.size();i++){
             if(arr[i]%2==0)
                 res.push_back(arr[i]);
            else{
                res.insert(res.begin()+oddIndex,arr[i]);
                oddIndex++;
            }
         }
         
         sort(res.begin(),res.begin()+oddIndex, greater<long long int>());
         sort(res.begin()+oddIndex,res.end());
         
         for(int i=0;i<res.size();i++)
             cout<<res[i]<<" ";
             cout<<"\n";
             
        res.clear();
        arr.clear();
        oddIndex=0;
     }
     
     cout<<endl;
     return 0;
 }