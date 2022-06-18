#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "libft/libft.h"

typedef struct{
    int sharp;
    int zero;
    int space;
    int comma;
    int plus;
    int minus;
    
}

int ft_printf(const char *format, ...);

#endif