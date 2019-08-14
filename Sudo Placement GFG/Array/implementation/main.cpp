/**************************
 Description    :  Array implemntation
 Date                :  13 Aug, 2019
 **************************/
 
 #include<iostream>
 
 using namespace std;
 
 class Array {
private:
     int  *arr;                 //array name
     int size;                  //capacity of array
     int length;               // number of elements in array
     
public:
     
     //constructor
     Array() {
         size=10;
         arr=new int[10];
         length=0;
     }
     
     Array(int size) {
         this->size=size;
         arr = new int[this->size];
         length=0;
     }
     
     //destrcutor
     ~Array() {
         delete []arr;
     }
     
     //member functions
     void insert(int x, int index);
     void display();
     void deleteElement(int index);
     
 };
 
 //function definitions
 
 void  Array::insert(int x, int index) {
     if(index>length||index<0){
         cout<<"Invalid index"<<endl;
         return ;
     }else{
         for(int i=length; i>index;i--){
             arr[i]=arr[i-1];
         }
         arr[index]=x;
         length+=1;
         cout<<"Element "<<x<<" inserted"<<endl;
     }
 }
 
 void Array::display() {
     cout<<"[";
     for(int i=0;i<length;i++)
         cout<<" "<<arr[i];
    cout<<" ]";
 }
 
 void Array::deleteElement(int index) {
     if(index<0||index>=length){
         cout<<"Invalid index";
         return ;
     }
     else{
         for(int i=index;i<length-1;i++){
             arr[i]=arr[i+1];
         }
         length-=1;
     }
 }
 
 int main(){
     Array obj(5);
     obj.insert(1,0);
     obj.insert(2,1);
     obj.display();
     obj.insert(7,6);
     obj.insert(3,2);
     obj.display();
     obj.insert(4,3);
     obj.deleteElement(1);
     obj.display();
     
     cout<<endl;
     return 0;
 }