#include <iostream>
using namespace std;

int main(){
    //sum of 1 to n
    int n;
    int sum = 0;
    int i = 1;
    cin>> n;

    while (i<=n)
    {
        sum = i + sum;
        i++;

    }
    cout << sum;
    

    return 0;
}