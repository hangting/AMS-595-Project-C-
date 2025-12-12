#include <iostream>
#include <vector>
using namespace std;

// 1 Conditional Statements
void conditional_statements() {
    int n;
    
    cout << "Enter a number: ";
    cin >> n;

    switch (n) {
        case -1:
            cout << "negative one\n";
            break;
        case 0:
            cout << "zero\n";
            break;
        case 1:
            cout << "positive one\n";
            break;
        default:
            cout << "other value\n";
    }
}

// 2 Printing a Vector
void print_vector(vector<int> v) {
    
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\n";
}

// 3 While Loops
void fibonacci() {
    
    int a = 1;
    int b = 2;

    cout << "Fibonacci sequence not exceed 4,000,000:\n";

    // initial
    cout << a;

    // stop at last number
    while (b <= 4000000) {
        cout << ", " << b;
        int c = a + b;
        a = b;
        b = c;
    }
    cout << "\n";
}

// 4 Function
// 4.1 If Prime
bool isprime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

void test_isprime() {
    cout << "isprime(2) = " << isprime(2) << "\n";
    cout << "isprime(10) = " << isprime(10) << "\n";
    cout << "isprime(17) = " << isprime(17) << "\n";
}

// 4.2 Factorize
vector<int> factorize(int n) {
    vector<int> fac;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            fac.push_back(i);
    }

    return fac;
}

void test_factorize() {
    print_vector(factorize(2));
    print_vector(factorize(72));
    print_vector(factorize(196));
    cout << "\n";
}

// 4.3 Prime Factorization
vector<int> prime_factorize(int n) {
    vector<int> pfac;

    for (int p = 2; p * p <= n; p++) {
        while (n % p == 0) {
            pfac.push_back(p);
            n /= p;
        }
    }

    if (n > 1)
        pfac.push_back(n);
    return pfac;
}

void test_prime_factorize() {
    print_vector(prime_factorize(2));
    print_vector(prime_factorize(72));
    print_vector(prime_factorize(196));
    cout << "\n";
}

// 5 Recursive Functions and Loops
void pascal_triangle(int n) {
    if (n <= 0)
        return;

    vector<int> p1;
    p1.push_back(1);

    for (int i = 1; i <= n; i++) {
        vector<int> p2;
        p2.push_back(1);

        for (int j = 1; j < p1.size(); j++) {
            p2.push_back(p1[j - 1] + p1[j]);
        }

        if (i > 1)
            p2.push_back(1);

        for (int x : p2)
            cout << x << " ";
            cout << "\n";
        p1 = p2;
    }
}

// Execution
int main() {
    // 1
    cout << "1. Conditional Statements\n\n";
    conditional_statements();
    
    // 2
    cout << "\n2. Printing a Vector\n\n";
    vector<int> v = {1, 2, 3, 1234};
    print_vector(v);

    // 3
    cout << "\n3. While Loops\n\n";
    fibonacci();

    // 4.1
    cout << "\n4.1. If Prime\n\n";
    test_isprime();

    // 4.2
    cout << "\n4.2. Factorize\n\n";
    test_factorize();

    // 4.3
    cout << "\n4.3. Prime Factorization\n\n";
    test_prime_factorize();

    // 5
    cout << "\n5. Recursive Functions and Loops\n\n";
    pascal_triangle(6);

    cout << "\n";
}
