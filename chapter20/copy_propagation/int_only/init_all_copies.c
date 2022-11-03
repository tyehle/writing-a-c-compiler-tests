static int x = 0;

// test that we initialize each basic block w/ incoming set of all copies
int callee() {
  x = x + 2;
  return 0;
}
int count_down() {
  static int i = 2;
  i = i - 1;
  return i;
}
int target() {
  int y = 3;
  do {
    // when we first process this, one predecessor will having reaching copy y =
    // 3 other predecessorw on't be processed yet
    callee();
  } while (count_down());
  return y; // should become return 3
}

int main() {
  int result = target();
  return x == 4 && result == 3;
}