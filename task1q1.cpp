#include<iostream>
using namespace std;
int main() 
{
 float ip, op, ch;
 cout<<"What do you want to perform?"<<endl<<"1.convert into celsius"<<endl<<"2. convert into farhenheit"<<endl;
 cin>>ch;
 if(ch==1)
 {
     cout<<"Temperature in Farhenheit = ";
     cin>>ip;
     op=(ip-32)*5/9;
     cout<<"Temperature in celcius = "<<op<<endl;
 }
 else
 {
   cout<<"Temperature in celcius = ";  
   cin>>ip;
   op=(ip*9/5)+32;
   cout<<"Temperature in Farhenheit = "<<op<<endl;  
 }
    return 0;
}