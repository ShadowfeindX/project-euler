#include <depends>
uint32_t main() {
    uint64_t num = 600851475143;
    uint factor = 2;
    do {
        while (num % factor == 0 &&
               num != factor) {
            num /= factor;
        } if (pow(factor,2) >= num)
            break;
    } while (++factor);
    return num;
}
