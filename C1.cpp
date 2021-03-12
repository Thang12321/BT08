#include<iostream>
using namespace std;
int length(char a[])
{
    int dem=0;
    for(int i=0;a[i]!='\0';i++)
    {
        dem++;
    }
    return dem;
}
string reverse(char a[])
  {
string b;
  for(int i=0;i<length(a);i++)
b+=a[length(a)-i-1];
  return b;
  }
string delete_char(char a[], char c)
{
string b;

    for(int i=0;i<length(a);i++)
    {
if(a[i]==c) continue;
b+=a[i];
    }

    return b;
}
string pad_right(char a[], int n)
{string b=a;
    for(int i=length(a);i<n;i++)
        b+=' ';
    return b;
}
string pad_left(char a[], int n)
{string b=a;
    for(int i=length(a);i<n;i++)
       b=' '+b;
    return b;
}
string truncate(char a[], int n)
{
string b;
    for(int i=0;i<n;i++)
    {
      b+=a[i];

    }
    return b;
}
bool is_palindrome(char a[])
{
    for(int i=0;i<length(a)/2;i++)
    {
        if(a[i]!=a[length(a)-i-1]) return false;
    }
    return true;
}
string trim_left(char a[])
{string b;
int qua=0;
    for(int i=0;i<length(a);i++)
    {
        if(a[i]==' '&&qua==1) continue;
     qua=0;
     b+=a[i];
    }
    return b;
}
string trim_right(char a[])
{string b;
int qua=0;
    for(int i=length(a)-1;i>=0;i--)
    {
        if(a[i]==' '&&qua==1) continue;
     qua=0;
     b=a[i]+b;
    }
    return b;
}
main()
{
    char a[1000];
 cin>>a;
    cout<<length(a)<<endl;
    cout<<reverse(a)<<endl;
    cout<<delete_char(a,'x')<<endl;
    cout<<pad_right(a,10)<<endl;
    cout<<pad_left(a,10)<<endl;
  cout<<truncate(a,3)<<endl;
  cout<<is_palindrome(a)<<endl;
  cout<<trim_left(a)<<endl;
  cout<<trim_right(a);

}
