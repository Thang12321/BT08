#include <iostream>
using namespace std;
int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   //kieu int
{


       int a[4]={0,1,2,3};
       for(int *cp=a; (*cp) <= 3; cp++)
       {
           cout << cp << " : " << (*cp) << endl;
       }
}
  //kieu double
 {
     int dem=0;
      double a[4]={0.1,1.3,2.2,3.4};
       for(double *cp=a; dem<=4; cp+=2,dem++)
       {
           cout << cp << " : " << (*cp) << endl;
       }
 }

}
