#include <depends>

int main() {
  for (int a, b, c, j = 2, n = 2; j < 1000; j += 2, n = (j*j)/2) for (int i = 1, k = round(sqrt(n)); i < k; i++) if (n%i == 0) if ((c = (j + i) + (b = (a = j + i) + (n/i) - i) - j) + b + a == 1000 && c > b && b > a) return a*b*c;
}
