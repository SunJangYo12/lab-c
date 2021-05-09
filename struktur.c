#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct GrayHat_t {
   char buf[80];
   int val;
   double squareRoot;
} GrayHat;

int main(int argc, char **argv)
{
   GrayHat gh;
   if (argc == 4) {
      GrayHat *g = (GrayHat*)malloc(sizeof(GrayHat));

      strncpy(g->buf, argv[1], 80);
      g->val = atoi(argv[1]);
      g->squareRoot = sqrt(atof(argv[3]));

      strncpy(gh.buf, argv[0], 80);
      gh.val = 0xdeadbeef;
   }

   return 0;
}
