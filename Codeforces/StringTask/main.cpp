/**************************
 Description :  https://codeforces.com/problemset/problem/118/A
 Date                :  23 July 2019
 **************************/
 
 #include<iostream>
 #include<ctype.h>
 #include<string.h>
 
 using namespace std;
 
 
 //checking for vowel
 bool isVowel(char str){
     if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u'||str=='y')
         return true;
    else return false;
 }
 
 //driver code
 int main(){
     
     char str[256];

     //input string
     cin>>str;
        for(size_t i=0;i<=strlen(str);i++){
            str[i]=tolower(str[i]);
        }
 
     for(int i=0;i<strlen(str);i++){
         
         
         if(isVowel(str[i])){
             
             //removing vowel
             for(int j=i;j<strlen(str);j++){
                 str[j]=str[j+1];
             }
    
                i=i-1;
         }
         else{
             
                 //adding '.' before constant
                 for(int j=strlen(str);j>=i;j--){
                         str[j+1]=str[j];
                 }
                 str[i]='.';
                       i=i+1;
         }
         
   
     }
     
     cout<<str;
     return 0;
 }