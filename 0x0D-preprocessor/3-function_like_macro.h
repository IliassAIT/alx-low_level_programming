#ifndef ABS(x)
#if x < 0
#define ABS(x) ((x) * (-1))
#elif x >= 0
#define ABS(x) x
#endif
#endif
