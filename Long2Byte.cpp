#include "Long2Byte.h"

// converts integers (4-bytes) into a 4 element byte array
void long2bytes(long int_val, byte byte_vals[4]) {
    byte_vals[0] = byte(int_val >> 24);    // most significant byte
    byte_vals[1] = byte(int_val >> 16);
    byte_vals[2] = byte(int_val >> 8);
    byte_vals[3] = byte(int_val);          // least significant byte
}

// converts a 4 element byte array into an integer
long bytes2long(byte byte_vals[4]) {
    return int(byte_vals[3]) + 
    (int(byte_vals[2]) << 8) + 
    (int(byte_vals[1]) << 16) + 
    (int(byte_vals[0]) << 24);
}

// converts long integers (4-bytes) into a 5 element byte array, where each byte value
// is limited to the range of 0 to 127
void long2bytes_127(int int_val, byte byte_vals[5]) {
    byte_vals[0] = byte(int_val >> 24);    // most significant byte
    byte_vals[1] = byte(int_val >> 17);    
    byte_vals[2] = byte(int_val >> 10);
    byte_vals[3] = byte(int_val >> 3);
    byte_vals[4] = byte(int_val << 4);     // least significant byte
    
    for (int i = 0; i < 5; i ++) {
        byte_vals[i] = byte_vals[i] >> 1; 
    }
}

// converts a 5 element byte array, where each byte value is constrained to between
// 0 and 127, into a long integer.
long bytes2long_127(byte byte_vals[5]) {    
    for (int i = 0; i < 5; i ++) {
        byte_vals[i] = byte_vals[i] << 1; 
    }
    
    return (int(byte_vals[4]) >> 4) + 
           (int(byte_vals[3]) << 3) + 
           (int(byte_vals[2]) << 10) + 
           (int(byte_vals[1]) << 17) + 
           (int(byte_vals[0]) << 24);
}


/* This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
 To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
 a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
 */