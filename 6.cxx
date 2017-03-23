#include <depends>
int main() {
    int i = 1, numbers = 100;
    int squaresum = 0, sumsquare = 0;
    do {
        squaresum += i;
        sumsquare += i*i;
    } while (numbers > i++);
    return pow(squaresum,2)-sumsquare;
}
