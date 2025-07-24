//Abhinav Rakhunde
//PRN:24070123001

#include<iostream>
using namespace std;

int main() {
    int i,j,k=1;
    int n;

    cout<<"Enter n:"<<endl;
    cin>>n;

    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
}
return 0;
}

/*OUTPUT:
Enter n:
4
1 
2 3
4 5 6
7 8 9 10
*/