#include <iostream>
using namespace std;

int main() {
    // cout << "Suresh Kammari";
// Triangle pattern
    // int n ;
    // cin >> n;
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<i+1; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
// Triangle pattern with numbers
    // int n ;
    // cin >> n;
    // for(int i=0 ; i<n; i++) {
    //      for(int j=0; j<i+1; j++){
    //          cout << (i+1)<< " ";
    //      } 
    //      cout << endl;
    // }

// Triangle pattern with numbers
    // int n;
    // cin >> n;
    // for (int i=1; i<n+1; i++) {
    //     for (int j=1; j<i+1; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
// Reverse Triangle pattern eg-1
    // int n ;
    // cin>>n;
    // for (int i=1; i<=n; i++){
    //     for (int j=0; j<i; j++){
    //         cout << (i-j) << " ";
    //     }
    //     cout << endl;
    // }
// Reverse Triangel pattern eg-2 Reverse loop
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=i; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }

// Triangle pattern with Alphabits
    // int n;
    // cin >> n;
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<i+1; j++){
    //         cout << char('A'+i);
    //     }
    //     cout<< endl;
    // }

}

