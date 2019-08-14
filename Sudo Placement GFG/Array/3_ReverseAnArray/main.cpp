/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/reverse-an-array/0/?track=sp-arrays-and-searching&batchId=152
 Date                :  14 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 void revArr(int  arr[], int size) {
     int count{0};
     while(count<floor(size/2)) {
         swap(arr[count],arr[size-1-count]);
         count++;
     }
 }
 
 int main(){
     int *arr;
     int test{0},size{0};
     cin>>test;
     
     while(test--){
     cin>>size;
     arr=new int[size];
     
     for(int i=0;i<size;i++)
         cin>>arr[i];
    revArr(arr,size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
     }
     cout<<endl;
     return 0;
 }