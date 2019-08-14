/**************************
 Description    :  Vector STL implementation
 Date                :  14 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<vector>         //must include header file
 
 using namespace std;
 
 int main(){
     
     vector<int> v1;        //vector declaration
     
     //inputting data
     for(int i=0;i<5;i++)
         v1.push_back(i+10);
     
     //printing data in vector
     for(int i=0;i<5;i++)
         cout<<v1.at(i)<<" ";
         
    //size of vector
    cout<<"Size: "<<v1.size()<<endl;
    
                                            //iterartor
    
     //pointing from beginning of vector
     cout<<"begin(): "<<*(v1.begin())<<endl;
     cout<<"end(): "<<*(v1.end())<<endl;
     
     //pointing from end of vector
     cout<<"rbegin(): "<<*(v1.rbegin())<<endl;
     cout<<"rend(): "<<*(v1.rend())<<endl;
     
                                            //capacity & element acces
     
     cout<<"empty(): "<<v1.empty()<<endl;
     cout<<"front(): "<<v1.front()<<endl;
     cout<<"back(): "<<v1.back()<<endl;
     cout<<"data(): "<<*(v1.data())<<endl;
     cout<<"data(): "<<*(v1.data()+1)<<endl;
     
                                            //modifiers
                                        
    v1.assign(5, 10);           //reassign the value 10 5 times
     
//     for(int i=0;i<5;i++)
//         cout<<v1.at(i)<<" ";
//     
     v1.push_back(12);
     v1.push_back(3);
     
//     for(int i=0;i<v1.size();i++)
//         cout<<v1.at(i)<<" ";
    
    v1.pop_back();          //remove element from last
    
//         for(int i=0;i<v1.size();i++)
//         cout<<v1.at(i)<<" ";

    v1.insert(v1.begin()+2,77);     //insert element at specified index
    
//         for(int i=0;i<v1.size();i++)
//         cout<<v1.at(i)<<" ";

    v1.erase(v1.begin()+3);
    
//         for(int i=0;i<v1.size();i++)
//         cout<<v1.at(i)<<" ";
    
    vector<int> v2;
    
    for(int i=0; i<v1.size();i++)
        v2.push_back(i+10);
    
    v1.swap(v2);                            //used to swap the contents of two vectors 
    
         for(int i=0;i<v1.size();i++)
         cout<<v1.at(i)<<" ";


     cout<<endl;
     return 0;
 }