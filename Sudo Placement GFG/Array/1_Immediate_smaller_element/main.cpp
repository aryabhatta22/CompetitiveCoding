#include <iostream>
using namespace std;

int main() {
	//code
	int test{0}, size{0};
	int *arr; 
	
	//inputting no of test cases
	cin>>test;      
	//from 1 to test
	for(int i=1;i<=test;i++){
	//input size
	cin>>size;
	//dynamically alloacte array
	arr=new int[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
	//traverse through array
	for(int i=0;i<size-1;i++){
	//manipulate element a/c to succeding elemnts
	    if(arr[i]>arr[i+1])
	        arr[i]=arr[i+1];
	   else
	        arr[i]=-1;
	        
	    
	}
	
	arr[size-1]=-1;
	
	//print array
	
	for(int i=0;i<size;i++)
	cout<<arr[i];
	  
	}
	
	
	return 0;
}