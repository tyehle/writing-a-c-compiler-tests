int main()
{
    long x[10];
    long *ptr = x;
    unsigned long *ptr2 = (unsigned long *)ptr;
    // can't subtract pointers to different types
    return ptr - ptr2;
}