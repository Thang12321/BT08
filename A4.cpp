#include <iostream>
using namespace std;
int main()  {
   char **s;
   s=new char* ;

   char foo[] = "Hello World";

*s=foo;

cout<<"s is "<<s<<endl;
   s[0] = foo;
cout<<"s[0] is "<<s[0];
   return(0);
}
//ta can phai cap phat bo nho cho char ** s truoc khi gan gia tri
// khi khoi tao mot con tro ma khong tro den bat cu bien nao ma gan truc tiep gia tri thi khong co dia chi de luu gia tri do
// vay ta phai cap phat dia chi cho con tro truoc khi gan gia tri

