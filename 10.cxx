#include <depends>

uint64_t main() {
  uint64_t sum = 0;
  QVector<int> primes;
  primes.push_back(2);
  for(int i = 3, prime = 1; i < 2000000; i++, prime = true) {
    for(int j = 0; j<primes.size() && primes[j]*primes[j] <= i && prime; j++)
      if(i % primes[j] == 0) prime = false;
      if(prime) primes.push_back(i);
  } foreach (int prime, primes) {
    sum += prime;
  } return sum;
}
