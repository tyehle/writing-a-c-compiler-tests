// TODO do we want to check this? GCC/clang warn but don't fail.
int main() {
    static int arr[3] = {1, 2, 3, 4};
    return arr[2];
}