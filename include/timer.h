#ifndef _TIMER_H
#define _TIMER_H

#include <stdint.h>

#ifdef __cplusplus
#define PROTOHEADER extern "C"
#else
#define PROTOHEADER
#endif
PROTOHEADER uint32_t SDL_GetTicks();

//PROTOHEADER void sleep(int ms);

PROTOHEADER void InitTimer(void);

PROTOHEADER void DestroyTimer(void);

#endif //_TIMER_H
