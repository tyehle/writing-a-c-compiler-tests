/* A constant is not an lvalue, so it's illegal to take its address. */
int main() {
    int *ptr = &10;
    return 0;
}