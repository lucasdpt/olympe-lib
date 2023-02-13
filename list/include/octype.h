/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ctype - header
*/

#ifndef OCTYPE_H_
    #define OCTYPE_H_

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef signed long long llong;
typedef unsigned long long ullong;

    #ifndef NULL
        #define NULL (0)
    #endif

    #ifndef bool
        #define bool _Bool
        #define true (1)
        #define false (0)
    #endif

    #ifndef EXIT_SUCCESS
        #define EXIT_SUCCESS 0
    #endif

    #define UNUSED __attribute__((unused))
    #define EXIT_FAILTEK 84
    #define INT_TO_ASCII 48
#endif
