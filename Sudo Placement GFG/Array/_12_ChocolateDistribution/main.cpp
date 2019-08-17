/**************************
 Description :  https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0/?track=sp-arrays-and-searching&batchId=152
 Date             :  16 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<vector>
 #include<algorithm>
 
 using namespace std;
 
 int main(){
     
     unsigned int test{0};
     long long int size{0}, groupSize{0},value{0};
     vector<long long int> arr;
     vector<long long int> diff;
     
     cin>>test;
     while(test--) {
         cin>>size;
         for(int i=0;i<size;i++){
             cin>>value;
             arr.push_back(value);
         }
         cin>>groupSize;
         
         sort(arr.begin(),arr.end());
         for(int i=0;i<=size-groupSize;i++)
             diff.push_back(  *(max_element(arr.begin()+i,arr.begin()+i+groupSize))
                                                                    -  
                                        *(min_element(arr.begin()+i,arr.begin()+i+groupSize)));
             
        cout<<*(min_element(diff.begin(),diff.end()));
        cout<<"\n";
        
        diff.clear();
        arr.clear();
     }
     
     cout<<endl;
     return 0;
 }