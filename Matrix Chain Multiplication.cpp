
#include <iostream>
using namespace std;

const int MAX = 100;  
const int INF = 1e9; 

int lookupChain(int m[MAX][MAX], int p[], int i, int j) {
    if (m[i][j] <= INF)
        return m[i][j];

    if (i == j) { 
        m[i][j] = 0;
    } else {
        for (int k = i; k < j; k++) {
            int cost = lookupChain(m, p, i, k) + lookupChain(m, p, k + 1, j) + p[i - 1] * p[k] * p[j];
            if (cost < m[i][j]) 
                m[i][j] = cost;
        }
    }
    return m[i][j];
}

int memoizedMCM(int p[], int n) {
    int m[MAX][MAX]; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = INF;
        }
    }

    return lookupChain(m, p, 1, n - 1); 
}

int main() {
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;

    int p[MAX];
    cout << "Enter the dimensions array (size " << n + 1 << "): ";
    for (int i = 0; i <= n; i++) {
        cin >> p[i];
    }

    int result = memoizedMCM(p, n + 1);
    cout << "Minimum number of multiplications: " << result << endl;

    return 0;
}
