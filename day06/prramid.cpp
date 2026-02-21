#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    int i = 0;

    while (i<n)
    {
        int space = n -i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j=1;
        while (j<=i)
        {
            cout << j;
            j++;

        }
        while (j)
        {
            cout << j;
            j--;
        }
      
        
        
        
        cout << endl;
        i++;
        
    }
    

    return 0;
}


//      1
//     121
//    12321
//   1234321
//  123454321