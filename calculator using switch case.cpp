#include<iostream>
using namespace std;
int main ()
{
    int choice;
    cout<<"Menu"<<endl;
    cout<<"Enter what you want."<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    int a, b, c;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Enter two numbers to add them: "<<endl;
            cin>>a>>b;
            c = a+b;
            cout<<"Addition: "<<c<<endl;
            break;
        }
        case 2:
        {
            cout<<"Enter two numbers to subtract: "<<endl;
            cin>>a>>b;
            c = a-b;
            cout<<"Subtraction: "<<c<<endl;
            break;
        }
        case 3:
        {
            cout<<"Enter two numbers to multiply them: "<<endl;
            cin>>a>>b;
            c = a*b;
            cout<<"Multiplication: "<<c<<endl;
            break;
        }
        case 4:
        {
            cout<<"Enter two numbers to divide them by eachother: "<<endl;
            cin>>a>>b;
            c = a/b;
            cout<<"Division: "<<c<<endl;
            break;
        }
        default:
        {
            cout<<"Wrong input!!!"<<endl;
        }

    } 
}
//output
/*Menu
Enter what you want.
1. Addition
2. Subtraction
3. Multiplication
4. Division
2
Enter two numbers to subtract: 
33
23
Subtraction: 10
*/