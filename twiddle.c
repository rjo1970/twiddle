#include <stdio.h>
#include "twiddle.h"

/* twiddle
  A learning library to twiddle bits
*/

/*
  invert a byte bitwise all 0 => 1 and all 1 => 0
  Introducing the ~ unary operator
*/
BYTE invert_byte(BYTE c) {
  return 0;
}

/*
  move each bit to the left and introduce a 0
  on the far right
  Introduce the shovel << in its original glory!
   abcdefgh => bcdefgh0
*/
BYTE move_left(BYTE c) {
    return 0;
}

/*
  select only the high 4 bits (high nibble)
  with the other bits always set to 0.
  Introduce the bitwise and & with bitmasking
  abcdefgh => abcd0000
*/
BYTE high_nibble(BYTE c) {
  return 0;
}

/*
  take the low nibble (4-bits) of low
  take the high nibble (4-bits) of high
  join them to make the result
  xxxxefgh, abcdxxxx => abcdefgh

  Introduce bitwise or | to build a byte.
*/
BYTE join_nibbles(BYTE low, BYTE high) {
  return 0;
}

/*
  nibble swap  abcdefgh => efghabcd
*/
BYTE nibble_swap(BYTE c) {
  return 0;
}


/*
  turn the high bit to a 1, leave everything
  else the same.
  abcdefgh => 1bcdefgh
*/
BYTE high_bit_on(BYTE c) {
  return 0;
}

/*
  turn the high bit to a 0, leave everything
  else the same.
  abcdefgh => 0bcdefgh
*/
BYTE high_bit_off(BYTE c) {
  return 0;
}

/*
  flip a byte: abcdefgh => hgfedcba
*/
BYTE flip_byte(BYTE c) {
  return 0;
}

/*
  use XOR ^ operations to swap two variables
  such that the value of a goes into b
  and the value of b goes into a
  WITHOUT using a third variable or memory
  location to store either of them!
*/

void xor_demo(BYTE a, BYTE b) {
  /* a = ...; */
  printf("a is now %02x and b is now %02x\n", a, b);
}

void main() {
  xor_demo(1,2);
}
