/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/find-the-closest-number/0/?ref=self
 Date                :  16 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<vector>
 #include<math.h>
 
 using namespace std;
 
 int main(){
     
     unsigned int test{0};
     long long int size{0},key{0},value{0}, closestValue{0},mid{0},diff{0};
     bool change{false};
     vector<long long int> arr;
     long long int leftIndex{0}, rightIndex{0};
     
     cin>>test;
     while(test--){
         cin>>size;
         cin>>key;
         for(int i=0;i<size;i++){
             cin>>value;
             arr.push_back(value);
         }
         leftIndex=0;
         rightIndex=size-1;
         while(leftIndex<=rightIndex){
             change=false;
             mid=floor((leftIndex+rightIndex)/2);
             closestValue=arr[mid];
             diff=abs(key-closestValue);
             
             if((mid-1>=0)&&(abs(key-arr[mid-1]))<diff){
                 rightIndex=mid;
                 change=true;
             }
            if((mid+1)<size && (abs( key-arr[mid+1]))<=diff){
                leftIndex=mid+1;
                change=true;
            }
            
            if(!change) break;
         }
         
         cout<<closestValue<<"\n";
         arr.clear();
     }
     
     cout<<endl;
     return 0;
 }