#include<iostream>
using namespace std;
int main()
{
   int a,b,c,n,count=0;
   cin>>n;
   for(int i=0; i<n; i++)
   {
       cin>>a>>b>>c;
       int sum= a+b+c;
       if(sum>=2)
       {
           count++;
       }
 
 
   }
   cout<<count;
}