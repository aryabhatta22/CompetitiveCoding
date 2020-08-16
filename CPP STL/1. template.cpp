#include <iostream>
using namespace std;

template <typename T>
T area_rectangle(T a, T b) {
	T result = a*b;
	return result;
}


int main() {
  
  int resultInInt = area_rectangle<int>(10.5,5);
  double resultInDouble = area_rectangle<double>(10.5,5);
  float resultInFloat = area_rectangle<float>(10.5,5);
  
  cout<<"Result in:\n"<<endl;
  cout<<"Int:\t"<<resultInInt<<endl;
  cout<<"Float:\t"<<resultInFloat<<endl;
  cout<<"Double:\t"<<resultInDouble<<endl;
  
  return 0;
}