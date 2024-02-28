#include <stdio.h>

int main() {
  int rgba = 0x010203FF;
  unsigned char *c = (unsigned char *) &rgba;
// r = 01 
  printf( "r: %d \n", *(c + 3) );

// g = 02
  printf( "g: %d \n", *(c + 2) );  
// b = 03
  printf( "b: %d \n", *(c + 1) );
// a = FF (255 em decimal)
  printf( "a: %d \n", *(c) );
  return 0;
}