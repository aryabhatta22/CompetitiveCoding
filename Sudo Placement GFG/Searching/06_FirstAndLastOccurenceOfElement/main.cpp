/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x/0/?track=sp-arrays-and-searching&batchId=152
 Date                :  27 Aug, 2019
 **************************/
 
 #include<iostream>
 
 using namespace std;
 
 int  firstOccurence(long long int arr[], int low, int high, int key) {
     while(low<=high) {
         int mid=(low+high)/2;
         if((mid==0 || key>arr[mid-1] ) && key==arr[mid])
             return mid;
        if(key>arr[mid])
            return firstOccurence(arr,mid+1,high,key);
        else
            return firstOccurence(arr,low, mid-1,key);
     }
     return -1;
 }
 
 int  lastOccurence(long long int arr[], int low, int high, int key) {
     while(low<=high) {
         int mid=(low+high)/2;
         if((mid==high || key<arr[mid+1]) && key==arr[mid])
             return mid;
        if(key>=arr[mid])
            return lastOccurence(arr,mid+1,high,key);
        else
            return lastOccurence(arr,low, mid-1,key);
     }
     return -1;
 }
 
 int main(){
     int test{0};
     
     cin>>test;
     while(test--) {
         int size;
         cin>>size;
         long long int *arr;
         arr=new long long int[size];
         
         for(int i=0;i<size;i++)
             cin>>arr[i];
        
        long long int  key;
        cin>>key;
            
        int firstIndex= firstOccurence(arr,0,size-1,key);
        int lastIndex = lastOccurence(arr,0,size-1,key);
        
        if(firstIndex==-1 && lastIndex==-1)
            cout<<-1<<endl;
        else
        cout<<firstIndex<<" "<<lastIndex<<endl;
     }
     
     cout<<endl;
     return 0;
 }