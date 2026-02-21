#include <iostream>
using namespace std;

int main(){

    // filter caracter  and no etc
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;

    if (ch>= 'a' && ch<= 'z')
    {
        cout << "its an LowerCase";
    }else if (ch>= 'A' && ch<= 'Z')
    {
        cout << " its an UpperCase";
    }else{
        cout << "its a number or special symbol";
    }
    
    

    return 0;
}