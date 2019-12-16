/**************************
 Description    :
 Date           :
 **************************/
 
 #include<iostream>
 #include<vector>
 
 #define N 5
 
 using namespace std;
 
 int main() {
     vector<int> vec;
     
                                //input data
     for(int i=0;i<N;i++)
        vec.push_back(i);
        
                                //Print data
    
    //in sequence
    for(auto i=vec.begin();i<vec.end(); i++)
        cout<<*i<<" ";
    cout<<endl;
    
    //in reverse
    for(auto i=vec.rbegin();i<vec.rend(); i++)
        cout<<*i<<" ";
        
                                //Capacity
    
    cout<<"\n>>Capcity"<<endl;
    cout<<boolalpha<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.max_size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.empty()<<endl;
    
                                //Access elements
    
    cout<<"\n>>Acess Elements"<<endl;
    cout<<vec.at(3)<<endl;
    cout<<vec.front()<<" "<<vec.back()<<endl;
    
                                //Modifiers
                                
    cout<<"\n>>Modifiers"<<endl;
    vec.assign(9, 5);       //assigns 9 5 times
    for(auto i=vec.begin();i<vec.end(); i++)
        cout<<*i;
    cout<<endl;
    vec.pop_back();
    vec.insert(vec.begin()+2, 7);
    vec.erase(vec.begin()+4);
    for(auto i=vec.begin();i<vec.end(); i++)
        cout<<*i;
    
    //vec.clear()
    
     cout<<endl;
     return 0;
 }