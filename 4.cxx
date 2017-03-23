#include <depends>
int main() {
    QList<int> nums;
    int max = 0;
    for(int i=100;i<1000;i++) nums << i;
    foreach (int i, nums) {
        for (int j = i-100; j<900;j++) {
            int k = i*nums[j];
            QString forwards = QString("%1").arg(k);
            QString backwards;
            foreach (QChar c, forwards) {
                backwards.prepend(c);
            } if (!forwards.compare(backwards) &&
                  k >= max) max = k;
        }
    }
    return max;
}
