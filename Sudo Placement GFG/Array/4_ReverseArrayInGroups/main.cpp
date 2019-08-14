/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0/?ref=self
 Date                :  14 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 //reverse function
 
 void revArr(long int arr[], long int initialIndex, long int finalIndex) {
     long int count{0};
     long int size=finalIndex-initialIndex+1;
     while(count<(floor(size/2))) {
         swap(arr[initialIndex+count], arr[finalIndex-count]);
         count++;
     }
 }
 
 int main(){
     int test{0};
     long int size{0}, groupSize{0};
     long int *arr;
     
     cin>>test;
     while(test--) {
         cin>>size;
         cin>>groupSize;
         arr=new long int[size];
         for(int i=0;i<size;i++)
             cin>>arr[i];
        for(int i=0;i<size;i=i+groupSize){
            if(i<=size-groupSize)
                revArr(arr,i,i+groupSize-1);
            else
                revArr(arr,i,size-1);
        }
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
        
     }
     
     cout<<endl;
     return 0;
 }