#ifndef __MERLING_MEMCPY_512_1D_INTERFACE_H_
#define __MERLING_MEMCPY_512_1D_INTERFACE_H_
#include "memcpy_512.h"
#define c_get_range(tmp, x, y) merlin_get_range_512(&tmp, y, x)
#define c_set_range(tmp, x, y, val) merlin_set_range_512(&tmp, y, x, val)
#define LARGE_BUS 512
#define MARS_WIDE_BUS_TYPE merlin_uint_512
#include "mars_wide_bus.h"
#undef LARGE_BUS
#undef MARS_WIDE_BUS_TYPE
#undef c_get_range
#undef c_set_range
#endif
