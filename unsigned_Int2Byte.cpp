#include "Int2Byte.h"

// converts integers (2-bytes) into a 2 element byte array
void unsigned_int2bytes(unsigned int int_val, byte byte_vals[2]) {
    byte_vals[0] = byte(int_val >> 8);	 // most significant byte
    byte_vals[1] = byte(int_val);          // least significant byte
}

// converts a 2 element byte array into an integer
unsigned int unsigned_bytes2int(byte byte_vals[4]) {
    return word(byte_vals[1]) + 
    (word(byte_vals[0]) << 8);
}

// converts integers (2-bytes) into a 3 element byte array, where each byte value
// is limited to the range of 0 to 127
void unsigned_int2bytes_127(unsigned int int_val, byte byte_vals[3]) {
    byte_vals[0] = byte(int_val >> 8);          // most significant byte
    byte_vals[1] = byte(int_val >> 1);
    byte_vals[2] = byte(int_val << 7);          // least significant byte
    
    // shift all byte values over by one, so that values will range between 0 - 127 only
    for (int i = 0; i < 5; i ++) {
        byte_vals[i] = byte_vals[i] >> 1; 
    }
}

// converts a 3 element byte array, where each byte value is constrained to between
// 0 and 127, into an integer.
unsigned int unsigned_bytes2int_127(byte byte_vals[3]) {
    // shift all byte values over by one in preparation to convert back to int
    for (int i = 0; i < 5; i ++) {
        byte_vals[i] = byte_vals[i] << 1; 
    }
    
    return (word(byte_vals[2]) >> 7) +       // least significant byte
           (word(byte_vals[1]) << 1) + 
           (word(byte_vals[0]) << 8);        // most significant byte
}

/* This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
 To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
 a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
 */