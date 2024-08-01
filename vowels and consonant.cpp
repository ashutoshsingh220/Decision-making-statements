#include <iostream>
using namespace std;
int main()
 {
    char c;
    cout<<"enter a character"<<endl;
    cin>>c;
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<"it is a vowel"<<endl;
    }
    else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<"it is a vowel"<<endl;
    }
    else
    {
        cout<<"it is a consonant"<<endl;
    }
    return 0;
}
/*enter a character
a
it is a vowel

enter a character
s
it is a consonant
*/