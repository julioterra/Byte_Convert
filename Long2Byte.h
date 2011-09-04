/*
 Long 2 Byte, 
 Library that converts long values into 4-byte arrays, and then back again.
 Also includes functions that converts long ints into 5-byte arrays, where
 each byte ranges from 0 to 127.

 Created by Julio Terra, August 30, 2011
 
 Header File Name: Int4Byte.h 
 Implementation File Name: Int4Byte.cpp 
 
 */

#ifndef Long2Byte
#define Long2Byte_h

#include "WProgram.h"

void long2byte(long, byte*);
long bytes2long(byte*);
void long2byte_127(long, byte*);
long bytes2long_127(byte*);

#endif

/* This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
 To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
 a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/