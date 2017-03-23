#include <depends>

int main() {
    int i = 2;
    QVector<int> primes;
    primes.push_back(i);
    while (++i,primes.count() < 10001) {
        bool prime = true;
        foreach (int j, primes) {
            prime = (i % j != 0);
            if (!prime) break;
        } if(prime) primes.push_back(i);
    } return primes.last();
}
