#include <bits/stdc++.h>
using namespace std;

// Function to calculate factorial iteratively (to avoid recursion issues)
long long factorial(long long n) {
    long long fact = 1;
    for (long long i = 2; i <= n; i++) {
        if (fact > LLONG_MAX / i) break; // Prevent overflow
        fact *= i;
    }
    return fact;
}

int main() {
    long long X;
    cin >> X;

    long long low = 1, high = 20, answer = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long fact = factorial(mid);

        if (fact == X) {
            answer = mid;
            break;
        } else if (fact < X) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << answer << endl;
    return 0;
}




//     #include<bits/stdc++.h>
// using namespace std;

// long long fact(long long x) {
//     long long n = 1;
//     long long a = 1;
//     while(a < x) {
//         n++;
//         a *= n;
//     }

//     if(a == x){
//         return n;
//     } else {
//         return -1;
//     }
// }

// int main() {
//     long long x;
//     cin >> x;
//     long long N = fact(x);
//     cout << N;
//     return 0;
// }
