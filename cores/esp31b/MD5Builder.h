/* 
  md5.h - exposed md5 ROM functions for ESP31B

  Copyright (c) 2015 Hristo Gochkov. All rights reserved.
  This file is part of the ESP31B core for Arduino environment.
 
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#ifndef __ESP31B_MD5_BUILDER__
#define __ESP31B_MD5_BUILDER__

#include "Arduino.h"
#include "md5.h"

class MD5Builder {
  private:
    md5_context_t _ctx;
    uint8_t _buf[16];
  public:
    void begin(void);
    void add(uint8_t * data, uint16_t len);
    void add(const char * data){ add((uint8_t*)data, strlen(data)); }
    void add(char * data){ add((const char*)data); }
    void add(String data){ add(data.c_str()); }
    void addHexString(const char * data);
    void addHexString(char * data){ addHexString((const char*)data); }
    void addHexString(String data){ addHexString(data.c_str()); }
    void calculate(void);
    void getBytes(uint8_t * output);
    void getChars(char * output);
    String toString(void);
};


#endif