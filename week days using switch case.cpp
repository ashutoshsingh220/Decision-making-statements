// Wwite a code to choose for days of the week using switch case.
// ASHUTOSH SINGH
// 23070123033

#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter the choice ";
    cin>>choice;
    switch(choice)
    {
    case 1:
    {
    cout<<"Monday"<<endl;
}
break;
case 2:
    {
    cout<<"Tuesday"<<endl;
}
break;
case 3:
    {
    cout<<"Wednesday"<<endl;
}
break;
case 4:
    {
    cout<<"Thursday"<<endl;
}
break;
case 5:
    {
    cout<<"Friday"<<endl;
}
break;
case 6:
    {
    cout<<"Saturday"<<endl;
}
break;
case 7:
    {
    cout<<"Sunday"<<endl;
}
break;
default:
{
cout<<"Enter valid choice";
}
    }
}

// output
/*Enter the choice 1
Monday
Enter the choice 3
Wednesday
Enter the choice 8                      //(as there are only 7 cases and the entered case is 8 thatswhy the output is this)
Enter valid choice*/                
