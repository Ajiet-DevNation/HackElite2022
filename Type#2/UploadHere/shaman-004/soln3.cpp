#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    
    cin>>a>>b; 
  
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a is="<<a<<endl;
    cout<<"value of b is="<<b;
    return 0;
}
