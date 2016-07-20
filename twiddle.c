#include <assert.h>
#include <stdlib.h>
#include "twiddle.h"

/* twiddle
  A learning library to twiddle bits

  Make this work.  Test drive any code you write.

  We start with an unsigned character, typedefed
  as a BYTE.  Look in twiddle.h to see the typedef.

  You can think of this as 8 switches lined up,
  with the right-most switch representing 1,
  and each switch left doubling in value:
      128, 64, 32, 16, 8, 4, 2, 1

  When a number is stored in memory, you are
  actually just turning these switches on or off.
  The value is simply the sum of each switch
  that is "on" or "1".
  binary 1101 = (8 * 1) + (4 * 1) + (2 * 0) + (1 * 1) = 13
*/

/*
 Create an array of bitmasks that reperesent
 each of these switches present in a BYTE.
*/

BYTE MASK[8] = {1, 2, 4, 8 /* ...continue... */ };

/*
  Invert a byte bitwise all 0's => 1's and
  all 1's => 0's
  Introducing the bitwise NOT ~ unary operator

  for each bit: ~1 == 0
                ~0 == 1

*/
BYTE invert_byte(BYTE c) {
  return 0;
}

/*
  Move each bit to the left and introduce a 0
  on the far right
  Introduce the shovel << operator
  abcdefgh => bcdefgh0

  Note the "a" bit falls off the end of the earth.
*/
BYTE move_left(BYTE c) {
    return 0;
}

/*
  Move each bit to the right and introduce a 0
  on the far right.  Introduce the shift right
  operator >>
*/

BYTE move_right(BYTE c) {
  return 0;
}

/*
  Select only the high 4 bits (high nibble)
  with the other bits always set to 0.
  Introduce the bitwise and &

  bit a | bit b | a & b
    1   |   1   | 1
    1   |   0   | 0
    0   |   1   | 0
    0   |   0   | 0

  HINT:  Use your MASK above to select the
  bits you want to keep.

  abcdefgh => abcd0000
*/
BYTE high_nibble(BYTE c) {
  return 0;
}

/*
  Take the low nibble (4-bits) of low
  take the high nibble (4-bits) of high
  join them to make the result
  xxxxefgh, abcdxxxx => abcdefgh

  Introduce bitwise or | to build a BYTE from pieces.

  bit a | bit b | (a | b)
    1   |   1   | 1
    1   |   0   | 1
    0   |   1   | 1
    0   |   0   | 0

*/
BYTE join_nibbles(BYTE low, BYTE high) {
  return 0;
}

/*
  Nibble swap  abcdefgh => efghabcd
*/
BYTE nibble_swap(BYTE c) {
  return 0;
}

/*
  Turn the high bit to a 1, leave everything
  else the same.
  abcdefgh => 1bcdefgh
*/
BYTE high_bit_on(BYTE c) {
  return 0;
}

/*
  Turn the high bit to a 0, leave everything
  else the same.
  abcdefgh => 0bcdefgh
*/
BYTE high_bit_off(BYTE c) {
  return 0;
}

/*
  Flip a byte: abcdefgh => hgfedcba
*/
BYTE flip_byte(BYTE c) {
  return 0;
}

/*
 Introducing exclusive-or ^ facts
  
  bit a | bit b | (a ^ b)
    1   |   1   | 0
    1   |   0   | 1
    0   |   1   | 1
    0   |   0   | 0

 demonstrate the following in tests:
 For a BYTE c of any value,
   c ^ 0x00 == c;
   c ^ 0xff == ~c;
   c ^ c == 0;
   c ^ (any byte value) ^ (any byte value) == c
*/

int xor_demo(BYTE c) {
  return ((c ^ 0x00) == ~c) &&
    ((c ^ 0xff) == c); /*  && .... */
  /* make these pass and do the rest... */
}

/*
  use XOR ^ operations to swap two variables
  such that the value of a goes into b
  and the value of b goes into a
  WITHOUT using a third variable or memory
  location to store either of them!

HINT:
  Use the fact that even numbers of XORs of
  the same value cancel each other out...
*/

xor_result* xor_swap(BYTE a, BYTE b) {
  xor_result* result = malloc(sizeof(xor_result));
  result->a = a;
  result->b = b;

  /*
   do xor operations on result->a and result->b
   such that result->b = a and result->a = b
  */

  return result;
}
