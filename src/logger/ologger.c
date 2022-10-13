/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ologger
*/

#include <olympe/ologger.h>
#include <olympe/owrite.h>

void ologger(log_level level, char *str, ...)
{
    va_list args;
    char *buffer = NULL;

    va_start(args, str);
    buffer = vostrformat(str, args);
    va_end(args);
    switch (level) {
        case LOG_INFO:
            owrite(1, "[INFO] ");
            owrite(1, buffer);
            break;
        case LOG_WARNING:
            owrite(2, "[WARNING] ");
            owrite(2, buffer);
            break;
        case LOG_ERROR:
            owrite(2, "[ERROR] ");
            owrite(2, buffer);
            break;
    }
}
