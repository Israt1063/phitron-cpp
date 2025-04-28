#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 

        int A[N];
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; 
        }

        int result = INT_MAX; 

       
        for (int i = 0; i < N - 1; ++i) {
            for (int j = i + 1; j < N; ++j) {
                
                int current = A[i] + A[j] + (j - i);
                
                result = min(result, current);
            }
        }

        cout << result << endl;
    }

    return 0;
}