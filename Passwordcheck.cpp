//Abhinav Rakhunde
//PRN:24070123001
#include<iostream>
using namespace std;

int main() {
    int lock=1234;
    int userlock;

    cout<<"Enter the password ="<<endl;
    cin>>userlock;

        if(userlock!=lock)
            cout<<"Password is incorrect"<<endl;
        else
            cout<<"Correct Password"<<endl;
    return 0;

}
/* OUTPUT:
Enter the password =
1245
Password is incorrect (Correct password =1234)
*/