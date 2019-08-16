/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/print-an-array-in-pendulum-arrangement/0/?track=sp-arrays-and-searching&batchId=152
 Date                :  14 AAug, 2019
 **************************/
 
 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<math.h>
 
 using namespace std;
 
 int main(){
     unsigned int test{0};
     int size{0}, mid{0};
     long int value{0};
     vector<long int> arr;
     vector<long int> res;
     
     cin>>test;
     while(test--) {
         cin>>size;
         for(int i=0;i<size;i++){
             cin>>value;
             arr.push_back(value);
         }
        for(int i=0;i<size;i++)
             res.push_back(NULL);
        sort(arr.begin(),arr.end());
        
        mid=floor((size-1)/2);
        
        res[mid]=arr[0];
        arr.erase(arr.begin());
        
        for(int i=1;i<=mid;i++){
            res[mid+i]=arr[0];
            arr.erase(arr.begin());
            
            res[mid-i]=arr[0];
            arr.erase(arr.begin());
        }
        
        if(size%2==0)
            res[size-1]=arr[0];
        
        for(int i=0;i<res.size();i++)
        cout<<res.at(i)<<" ";
        cout<<"\n";
        arr.clear();
        res.clear();
        
     }
     
     cout<<endl;
     return 0;
 }