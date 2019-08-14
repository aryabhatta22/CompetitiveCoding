/**************************
 Description    :  https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0/?track=sp-arrays-and-searching&batchId=152
 Date                :  13 Aug, 2019
 **************************/

#include<iostream>
using namespace std;
int main()
 {
	//code
	
	int test{0};
    long int size{0}, resSize{0};
	long int* arr;
    long int* result;
    
	int max{0};
	
	cin>>test;
	while(test--){
	    cin>>size;
	    arr=new long int[size];
        result=new long int[size];
	    for(int i=0;i<size;i++)
	        cin>>arr[i];
        
        max=arr[size-1];
        result[resSize]=max;
        resSize++;
        for(int i=size-2;i>=0;i--){
            if(arr[i]>=max){
                max=arr[i];
                result[resSize]=max;
                resSize++;
            }else continue;
        }
        
        for(int i=resSize-1;i>=0;i--)
            cout<<result[i]<<" ";
        cout<<"\n";
        resSize=0;
	}
	
	return 0;
}


/* Hint: approach from left of array and store a max value, whenever left value is geater than max value
                print the max value and set left value as max value. Repeat till the index 0.
                */