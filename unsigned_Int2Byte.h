/*
 Unsigned Int 2 Byte, 
 Library that converts unsigned Int values into 2-byte arrays, and then back again.
 Also includes functions that convert unsigned ints into 3-byte arrays, where
 each byte ranges from 0 to 127.
 
 Created by Julio Terra, August 30, 2011
 
 Header File Name: Int2Byte.h 
 Implementation File Name: Int2Byte.cpp 
 
 */

#ifndef Unsigned_Int2Byte
#define Unsigned_Int2Byte_h

#include "WProgram.h"

void unsigned_int2byte(unsigned int, byte*);
unsigned int unsigned_bytes2int(byte*);
void unsigned_int2bytes_127(unsigned int, byte*);
unsigned int unsigned_bytes2int_127(byte*);

#endif

/* This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
 To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
 a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/