#pragma once

long factorial(long n)
{
    if (n < 0) return -1;
    return n == 0 ? 1 : n * factorial(n-1);
}
