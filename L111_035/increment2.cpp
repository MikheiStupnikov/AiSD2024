
int increment2(int y) {
  if (y == 0) {
    return 1;
  } else {
    if (y % 2 == 1) {
      return 2 * increment2(y / 2);
    } else {
      return y + 1;
    }
  }
}
