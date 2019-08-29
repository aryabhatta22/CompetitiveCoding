/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array/0/?track=sp-arrays-and-searching&batchId=152
 Date                :  29 Aug, 2019
 **************************/
 
 #include<iostream>
 
 #define ll long long
 
 using namespace std;
 
 ll FloorInArray(ll arr[], ll low, ll high,ll key, ll smaller)  {
     ll mid=(low+high)/2;
     while(low<=high) {
         if(arr[mid]==key)
             return mid;
        else {
            if(arr[mid]<key){
                smaller=mid;
                return FloorInArray(arr,mid+1,high,key, smaller);
            }
            else
                return FloorInArray(arr,low,mid-1,key,smaller);
        }
     }
     return smaller;
 }
 
 int main(){
     
     int test{0};
     cin>>test;
     
     while(test--) {
         ll size{0}, key{-1};
         ll *arr;
         cin>>size;
         cin>>key;
         
         arr=new ll[size];
         for(ll int i=0;i<size;i++)
             cin>>arr[i];
             
        cout<<FloorInArray(arr,0,size-1,key,-1)<<endl;
         
     }
     
     
     cout<<endl;
     return 0;
 }