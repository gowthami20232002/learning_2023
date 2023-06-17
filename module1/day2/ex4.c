#include <stdio.h>
int count_bits(int array[], int size) {
  int total_bits = 0;
  for (int i = 0; i < size; i++) {
    int num = array[i];
    int count = 0;
    while (num != 0) {
      if (num & 1) {
        count++;
      }
      num >>= 1;
    }
    total_bits += count;
  }
  return total_bits;
}
