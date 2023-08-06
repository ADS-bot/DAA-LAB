#include <stdio.h>
int main() {
  FILE *fp;
  char ch;
  int word_count = 0;
  fp = fopen("data.txt", "r");
  if (fp == NULL) {
    printf("Could not open file.\n");
    return 1;
  }
  while ((ch = fgetc(fp)) != EOF) {
    if (ch == ' ' || ch == '\n') {
      word_count++;
    }
  }
  fclose(fp);
  printf("The number of words in the file is: %d\n", word_count);
  return 0;
}