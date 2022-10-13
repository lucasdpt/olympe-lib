/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ologger - header
*/

#ifndef OLOGGER_H_
    #define OLOGGER_H_

    #include <olympe/ostring.h>

typedef enum {
    LOG_INFO,
    LOG_WARNING,
    LOG_ERROR
} log_level;

void ologger(log_level level, char *str, ...);

#endif /* !OLOGGER_H_ */
