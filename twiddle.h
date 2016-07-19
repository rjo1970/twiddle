#ifndef __TWIDDLE
#define __TWIDDLE

/*
  What you will see in "real code is"
  this represented as u8 instead of BYTE
*/
typedef unsigned char BYTE;

/* Used for the last example with two BYTE values as
  a single return value */
typedef struct {
  BYTE a;
  BYTE b;
} xor_result;

#endif
