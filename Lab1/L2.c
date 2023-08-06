#include <stdio.h>
int main() {
FILE *fp;
char data[100];
fp = fopen("data.txt", "w");
fprintf(fp, "Some data to write to a file.\n");
  	fclose(fp);
  	fp = fopen("data.txt", "r");
  	fgets(data, sizeof(data), fp);
 	printf("%s\n", data);
  	fclose(fp);
      return 0;
}