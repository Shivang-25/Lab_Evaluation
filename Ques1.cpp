#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cout << "Enter order of Matrix: " << endl;
    cin >> n;

    int arr[n][n];

    //input
    cout << "Enter in matrix: " << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> arr[i][j];
        }
    }

    int deter = 0;
    if(n == 1) {
        deter = arr[0][0];
    }
    else if(n == 2) {
        deter = arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
    }
    else if(n == 3) {
        deter = (arr[0][0]*(arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1]))
                - (arr[0][1]*(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]))
                +  (arr[0][2]*(arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]));
    }

    //display
    cout << "MATRIX : " << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Determinant of matrix: " << deter << endl;
    return 0;
}
