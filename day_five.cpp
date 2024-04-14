#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int count=0;
    int a[3];
    for(int i=0;i<=3;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
    {
        if(a[i]==a[j] &&  i!=j )
        {
            count++;
        }
    }
    
    
    }
   
    if(count==6)
    {
        cout<<"3";
    }
    else{
         cout<<count;
    }
    
    
}