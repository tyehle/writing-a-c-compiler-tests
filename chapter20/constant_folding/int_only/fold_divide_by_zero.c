int main()
{
    // make sure that compilation doesn't fail when we attempt to constant fold 1/0
    // TODO analogous tests for overflow and part II conversions
    return 1 || (1 / 0);
}