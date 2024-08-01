#include <iostream>
using namespace std;
int main() {
    int a ,b,c;
     cout<<"enter a no1"<<endl;
     cout<<"enter a no2"<<endl;
     cout<<"enter a no3"<<endl;
     cin>>a>>b>>c;
     if(a>=b)
     {
        if(a>=c)
        {
            cout<<a<<" is largest"<<endl;
        }
     }
     else if(b>=c)
     {
        cout<<b<<" is largest"<<endl;
     }
     else 
     {
     cout<<c<<"  is largest"<<endl;
     }
}
/*enter a no1
enter a no2
enter a no3
3
4
2
4 is largest*/
