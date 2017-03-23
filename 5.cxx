#include <depends>
int main() {
    int num = 20;
    QVector<int> divisors;
    divisors.reserve(num);
    for (int i = 0; i < num; i++) {
        divisors.append(i+1);
    } do {
        bool smallest = true;
        foreach (int i, divisors) {
            if (num%i!=0) {
                smallest = false;
            }
        } if (smallest) return num;
    } while (++num);
}
