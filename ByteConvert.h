/*
 ByteConvert, 
 Library that converts int and long values into byte arrays, and then back again.
 
 Created by Julio Terra, August 30, 2011; Modified on November 23, 2011
 
 Header File Name: ByteConvert.h 
 Implementation File Name: ByteConvert.cpp 
 
 */
 

#ifndef __ByteConvert_h__
#define __ByteConvert_h__

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
  #else
  #include "WProgram.h"
#endif

void int2bytes(int, byte*);
int bytes2int(byte*);
void int2bytes_127(int, byte*);
int bytes2int_127(byte*);

void unsigned_int2byte(unsigned int, byte*);
unsigned int unsigned_bytes2int(byte*);
void unsigned_int2bytes_127(unsigned int, byte*);
unsigned int unsigned_bytes2int_127(byte*);

void long2byte(long, byte*);
long bytes2long(byte*);
void long2byte_127(long, byte*);
long bytes2long_127(byte*);

#endif
