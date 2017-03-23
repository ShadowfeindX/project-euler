#include <depends>

int main()
{
    int j = 0;
    for (int i = 1; i < 1000; i++)
        if (!(i%3 && i%5))
            j += i;
    return j;
}
