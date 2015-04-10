/*
 * demo_1.1.1.c
 *
 *  Created on: Apr 10, 2015
 *      Author: lisong
 */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#define __GP_REGISTER8(name, address)\
  static inline void write##name(uint8_t _data) {\
	write(address, _data);\
	}\
  static inline uint8_t read##name() {\
		return read(address);\
	}
__GP_REGISTER8(TMSR, 0x001B)
int main(void) {

	return 0;
}
