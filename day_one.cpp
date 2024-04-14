#include<bits/stdc++.h>
using namespace std;
 void search( int a[] )
 { 
    int terget=5;
    for(int i =0; i<5; i++)
    {
        if( a[i] == terget)
        {
            cout<<"found";
        }


    }

 }
  void searchletter(){
    int flag=0;
    //string terget="a";
    string a ="the name of our country is bangladesh ";
    for (int i=0; i<a.size();i++)
    { 
        if (a[i] =='a')
        {
            flag++;
        }
        
    }
    cout<<flag;



  }
int main()
{  
    // int arry[5]=; 
    // for(int i =0; i<5; i=i+1 )
    // {
    //     cin>>arry[i];

    // }
    //  for(int i =0; i<5; i++)
    // {
    //     cout<<arry[i];

    // }
    // // linier search 
    //search(arry);
    searchletter();
    

    
    
}
