/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/reversal-algorithm/0/?track=sp-arrays-and-searching&batchId=152
 Date                :  14 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 //reverse function
 
 void revArr(long int arr[], int initialIndex, int finalIndex) {
     int count{0};
     int size=finalIndex-initialIndex+1;
     while(count<(floor(size/2))) {
         swap(arr[initialIndex+count], arr[finalIndex-count]);
         count++;
     }
 }
 
 int main(){
     int test{0};
    int size{0}, d{0};
     long int *arr;
     
     cin>>test;
     while(test--) {
         cin>>size;
         arr=new long int[size];
         
         for(int i=0;i<size;i++)
             cin>>arr[i];
        cin>>d;
        revArr(arr,0,d-1);
        revArr(arr,d,size-1);
        revArr(arr,0,size-1);
        
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
        
     }
     
     cout<<endl;
     return 0;
 }