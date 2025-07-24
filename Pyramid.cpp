//Abhinav Rakhunde
//PRN:24070123001
#include <iostream>
using namespace std;

int main() {
    int i,j,k;
    int n=5;
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
        cout<<" ";
    }
    for(k=1;k<(n-i);k++) {
        cout<<"* ";
    }
    cout<<endl;
} 
for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j)
            cout << " ";
        for (int k = 0; k < 2*i-1; k++)
            cout << " *";
        cout << endl;
    }
    return 0;
}


/*OUTPUT:
    * 
   * *
  * * *
 * * * *
* * * * *

*/