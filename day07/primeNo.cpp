#include <iostream>
using namespace std;

int main(){
    // checking the n is prime or not 

    int n;
    cin >> n;
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            isPrime = 0;
            break;
        }
        
    }
    if (isPrime ==0)
    {
            cout << n << " is not a prime no"<< endl;

            
        }else{

            cout << n << " is a prime no \n";
        }
    

    return 0;
}