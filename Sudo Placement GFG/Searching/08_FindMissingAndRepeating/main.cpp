/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/find-missing-and-repeating/0/?ref=self
 Date                :  28 Aug, 2019
 **************************/
 
 #include<iostream>
 
 using namespace std;
 
 void MissingAndRepeating(long long int arr[],long long int size) {
     long long int missing{-1}, repeating{-1};
     for(long long int i=1;i<=size;i++) {
         long long int sortedIndex=arr[i];
         if(arr[i]!=arr[sortedIndex]) {
             if(arr[sortedIndex]==repeating)
                 missing=i;
             swap(arr[i],arr[sortedIndex]);
             i--;
         }
         else {
             if(i==sortedIndex)
                 continue;
            else {
                missing=i;
                repeating=arr[i];
            }
         }
     }
     cout<<repeating<<" "<<missing<<endl;
 }
 
 int main(){
     int test{0};
     cin>>test;
     
     while(test--) {
         long long int size;
         cin>>size;
         long long int *arr;
         arr=new long long int[size+1];
         
         for(long long int i=1;i<=size;i++)
             cin>>arr[i];
             
            MissingAndRepeating(arr,size);
     }
     
     cout<<endl;
     return 0;
 }