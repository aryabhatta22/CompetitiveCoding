/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/?ref=self
 Date                :  14 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 //reverse function
 
 void revArr(long int arr[],long int initialIndex,long int finalIndex) {
     int count{0};
     int size=finalIndex-initialIndex+1;
     while(count<(floor(size/2))) {
         swap(arr[initialIndex+count], arr[finalIndex-count]);
         count++;
     }
 }
 
 int main(){
     int test{0};
    long int size{0}, d{0};
     long int *arr;
     
     cin>>test;
     while(test--) {
         cin>>size;
        cin>>d;
         arr=new long int[size];
         
         for(int i=0;i<size;i++)
             cin>>arr[i];
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
 
 
 
 /* Hint : reverse first part  of  array. reverse second part. Reverse whole array.