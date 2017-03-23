#include <depends>

uint64_t main() {
    uint64_t sum, largest = 0;
    QTextStream num(&BIGNUM);
    QString digits(num.read(13));
    while (sum = 1, !num.atEnd()) {
        foreach (QString digit, digits.split("", QString::SkipEmptyParts)) {
            sum *= digit.toInt();
        } largest = sum>largest?sum:largest;
        digits.remove(0,1); digits.append(num.read(1));
    } return largest;
}
