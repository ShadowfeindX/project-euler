#include <depends>

uint32_t main()
{
    uint32_t fib, c, b=1, a=0;
    while(fib < 4000000)
    {
        if (!(a%2)) fib += a;
        c = a + b;
        a = b;
        b = c;
    }
    return fib;
}
