#include <iostream>
using namespace std;

int main() {
    // cout << "kammarisuresh";
// Butterlfly patterns
    int n;
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
