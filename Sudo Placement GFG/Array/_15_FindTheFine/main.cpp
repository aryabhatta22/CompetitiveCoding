/**************************
 Description :  https://practice.geeksforgeeks.org/problems/find-the-fine/0/?track=sp-arrays-and-searching&batchId=152
 Date             : 16 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<vector> 
 
 using namespace std;
 
 int main(){
     unsigned int test{0}, date{0};
     long long int size{0},value{0},sum{0};
     vector<long long int> car;
     vector<long int> penalty;
     
     cin>>test;
     while(test--){
         cin>>size;
         cin>>date;
         
         for(int i=0;i<size;i++){
             cin>>value;
             car.push_back(value);
         }
         
         for(int i=0;i<size;i++){
             cin>>value;
             penalty.push_back(value);
         }
         
         if(date%2==0){
             for(int i=0;i<size;i++){
                 if((car[i]%2)!=0)
                     sum=sum+penalty[i];
             }
         }
         else{
             for(int i=0;i<size;i++){
                 if((car[i]%2)==0)
                     sum=sum+penalty[i];
             }
         }
         
         cout<<sum<<endl;
         penalty.clear();
         car.clear();
         sum=0;
     }
     
     cout<<endl;
     return 0;
 }