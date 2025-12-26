#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;  
int L[MAX][MAX];      

void findAllLCS(char X[], char Y[], int m, int n, char lcs[], int index) {
    if (m == 0 || n == 0) {
        lcs[index] = '\0';
        for (int i = index - 1; i >= 0; i--)
            cout << lcs[i];
        cout << endl;
        return;
    }

    if (X[m - 1] == Y[n - 1]) {
        lcs[index] = X[m - 1];
        findAllLCS(X, Y, m - 1, n - 1, lcs, index + 1);
    } else {
        if (L[m - 1][n] == L[m][n])
            findAllLCS(X, Y, m - 1, n, lcs, index);
        if (L[m][n - 1] == L[m][n])
            findAllLCS(X, Y, m, n - 1, lcs, index);
    }
}

void optimalLCS(char X[], char Y[], int m, int n) {

    for (int i = 0; i <= m; i++)
        L[i][0] = 0;
    for (int j = 0; j <= n; j++)
        L[0][j] = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    cout << "Length of LCS: " << L[m][n] << endl;

    char lcs[MAX]; 
    findAllLCS(X, Y, m, n, lcs, 0);
}


int main() {
    char X[MAX], Y[MAX];
    cout << "Enter first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;

    int m = strlen(X);
    int n = strlen(Y);

    // Calculate LCS and print all sequences
    optimalLCS(X, Y, m, n);

    return 0;
}







