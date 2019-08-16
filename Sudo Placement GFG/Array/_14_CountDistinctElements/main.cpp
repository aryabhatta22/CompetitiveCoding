/**************************
 Description :  https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1/?track=sp-arrays-and-searching&batchId=152
 Date             : 16 Aug, 2019
 **************************/
 
 {
#include <bits/stdc++.h>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}

}
 
 /*This is a function problem.You only need to complete the function given below*/
/*You are required to complete below method */
void countDistinct(int A[], int k, int n)
{
    //Your code here
   
    unordered_set<int> res;
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            res.insert(A[j]);
        }
        cout<<res.size()<<" ";
        res.clear();
    }
}