/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/remove-duplicates-from-unsorted-array/0/?ref=self
 Date                :  14 Aug, 2019
 **************************/
 
 #include<iostream>
 
 using namespace std;
 
 void deleteElement(int arr[], int index, int *size) {
     for(int i=index;i<(*size)-1;i++)
         arr[i]=arr[i+1];
    *size=*size-1;
 }
 
 int main(){
     int test{0}, size{0};
     int *arr,*hash;

     cin>>test;
     
     while(test--){
         cin>>size;
         arr=new int[size];
         hash=new int[101];
         for(int i=0;i<101;i++)
             hash[i]=NULL;
         for(int i=0;i<size;i++){
             cin>>arr[i];
            if(hash[arr[i]]==NULL)
             hash[arr[i]]=arr[i];
             else{
                 deleteElement(arr,i,&size);
                 i--;
             }
         }
         for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        cout<<"\n";
     }
     
     cout<<endl;
     return 0;
 }