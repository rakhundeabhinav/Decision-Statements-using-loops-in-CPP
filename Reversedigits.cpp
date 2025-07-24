//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int num;
    int reverse=0;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    
    while (num != 0) {
        reverse = reverse*10 + num%10;
        num /= 10;
    }
    cout<<"Reversed digits:"<<reverse<<endl;

    return 0;
}
/*OUTPUT:
Enter a number:
12345678
Reversed digits:87654321
*/
