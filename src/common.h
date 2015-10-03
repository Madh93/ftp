#ifndef COMMON_H
#define COMMON_H

#include <cstdlib>

inline void errexit(const char *format, ...){

    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
    exit(1);
}

#endif