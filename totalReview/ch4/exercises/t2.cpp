#include <iostream>
#include <vector>

bool is_prime(int num, const std::vector<int>& primes) {
    for (int prime : primes) {
        if (prime * prime > num) {
            break;  // No need to check further
        }
        if (num % prime == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> primes = {2};  // Start with the first prime, 2

    for (int num = 3; num <= 100; num++) {
        if (is_prime(num, primes)) {
            primes.push_back(num);
        }
    }

    std::cout << "Prime numbers between 1 and 100:" << std::endl;
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}
