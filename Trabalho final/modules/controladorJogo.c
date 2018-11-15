#include <stdio.h>
#include "controladorJogo.h"
void start();
void startWithParameters(int argc,int argv[]);
int main() {
  int length = 4;
  unsigned char colors = 6;
  int n = 1;
  int i;
  for (i = 1; i <= length; i++) {
    n *= colors;
  }
  bool* S = create_all(length, colors, n);
  unsigned char* move = get_code(length, colors, 7); // BestMove(S, length, colors, n);
  int newN = n;
  while (n > 0) {
    printf("%d remaining candidates\n", newN);
    print_one(move, length);
    printf("\n");
    int c;
    int p;
    printf("Colors: ");
    scanf("%d", &c);
    printf("Place: ");
    scanf("%d", &p);
    if (c == 0 && p == 4) {
      printf("Yay! I win!\n");
      break;
    }
    newN = reduce(S, move, c, p, length, colors, n);
    if (newN == 0) {
      printf("I'm Stumped...\n");
      break;
    }
    SetReduce(S, move, c, p, length, colors, n);
    free(move);
    move = BestMove(S, length, colors, n);
  }
  free(S);
  free(move);
  return 0;
}
