/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/second-largest/0/?ref=self
 Date                :  25 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<vector>
 
 using namespace std;
 
 int main(){
     int test{0};
     
     cin>>test;
     while(test--){
         vector<int> arr;
         int value{0}, size;
         
         cin>>size;
         for(int i=0;i<size;i++){
             cin>>value;
             arr.push_back(value);
         }
         
         int largest{0}, sLargest{0};
        
        for(int i=0;i<size;i++)
            if(arr[i]>largest)
                largest=arr[i];
                
        for(int i=0;i<size;i++)
            if(arr[i]<largest&& arr[i]>sLargest)
                sLargest=arr[i];
         
         cout<<sLargest<<endl;
     }
     
     cout<<endl;
     return 0;
 }