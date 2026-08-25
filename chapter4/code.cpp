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
    // int n;
    // cin>>n;
    // for (int i=1; i<=n; i++){
    //     for (int j=i; j>0; j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

// Reverse Triangel pattern eg-2 Reverse loop
    // int n;
    // cin >> n;
    // for (int i = 1; i<=n; i++){
    //     for (int j = i; j>0;j--){
    //         cout << char(64+j)<< "*";
    //         // ...
    //     }
    //     cout << endl;

    // }
    


// Triangle pattern with Alphabits
    // int n;
    // cin >> n;
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<i+1; j++){
    //         cout << char('A'+i);
    //     }
    //     cout<< endl;
    // }

// Floyd's Triangle Pattern
    // int n;
    // cin>>n;
    // int count = 1;
    // for (int i =0; i<n; i++) {
    //     for (int j=1; j<=i+1; j++ ){
    //         cout<< count << " ";
    //         count = count + 1;
    //     }
    //     cout << endl;
    // }

// Floyd's Triangle Cheractor Pattern
    // int n;
    // cin >> n;
    // int count = 1;
    // for (int i =0; i<n; i++){
    //     for (int j=1; j<= i+1; j++) {
    //         cout << char(64 + count) << " " ;
    //         count = count + 1;
    //     }
    //     cout << endl;
    // }

// Inverted Triangle pattern
    // int n;
    // cin >> n;
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<i; j++) {
    //         cout << "  ";
    //     }
    //     for (int j=0; j<n-i; i++){
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }
// Inverted Triangle pattern with alphabets
    // int n;
    // cin >> n;
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<i; j++){
    //         cout << "  ";
    //     }
    //     for (int j=1; j <= n-i; j++){
    //         cout << char(65+i) << " ";
    //     }
    //     cout << endl;
    // }

// pyramid pattern 

    // int n;
    // cin >> n;
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<n-i-1; j++) {
    //         cout << "  ";
    //     }
    //     for (int j=0; j<i+1; j++) {
    //         cout << j+1 << " ";
    //     }
    //     // cout << endl;
    //     for (int j=i; j>0; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

// Diamonad pattern 

    // Top
    // int n;
    // cin >> n;
    // for (int i=0; i<n; i++) {
         
    //     // spaces
    //     for (int j=0; j<n-i-1; j++) {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i !=0) {
    //         // spaces 
    //         for (int j = 0; j< 2*i-1; j++){
    //             cout << " ";
    //         }

    //         cout << "*";
    //     }
        
    //     cout << endl;

    // }
    // // Bottom 
    // for (int i=0; i<n-1; i++) {
    //     // spaces
    //     for (int j=0; j<i+1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i != n-2) {
    //         // spaces 
    //         for (int j = 0; j< 2*(n-i)-5; j++){
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
        
    //     cout << endl;
    // }

// Butterlfly pattern

    int n ;
    cin >> n;
    for (int i=0; i<n; i++) {
        // stars1.1
        for (int j=0; j<i+1; j++) {
            cout << "* ";
        }
        // spaces 
        for (int j=0; j< 2*(n-i-1); j++) {
            cout << "  ";
        } 
        // stars1.2
        for (int j=0; j<i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i=0; i<n-1; i++) {
        // stars2.1 
        for (int j=0; j<(n-1)-i; j++) {
            cout << "* ";
        } 
        // spaces
        for (int j=0; j<2*(i+1); j++){
            cout << "  ";
        }
        // stars2.2
        for (int j=0; j<(n-1)-i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

}

