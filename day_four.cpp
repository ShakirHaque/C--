#include<iostream>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--){
    cin>>a;
    if(a%2!=0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
        for(int i=1;i<=a/2;i++){
            if(i%2==0)
                cout<<"CC";
            else{cout<<"DD";}
        }
    }
    cout<<endl;
    }
    return 0;
 
}