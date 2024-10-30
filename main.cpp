#include <iostream>

int rec(int n, int q) {
    if (n < q) return q;

    return q * rec(n - 1, q);
}

int main(void) {
    std::cout << rec(3, 2);
    int a;
    std::cin >> a;
    
    return 0;
}