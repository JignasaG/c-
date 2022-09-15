
//find out reverse of the numbe
//123 ans :321
#include<iostream>
using namespace std;
main()
{

int n,r,sum=0,temp;
cout<<"enter the number=";
cin>>n;
temp=n;
while(n >= 0)
 {
    r = n % 10;
    sum = sum * 10 +r;
    n /= 10;
  }
if (temp==n)
  cout <<" number is palindrome";
  else
  cout<<"not a palindrome";

  return 0;
}

