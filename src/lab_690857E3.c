#include "lab_690857E3.h"
#include <stdio.h>

void copy(char *psource, char *ptarget, unsigned num_char)
{
    while (num_char > 0 && *psource != '\0')
    {
        *ptarget = *psource;
        psource++;
        ptarget++;
        num_char--;
    }
    *ptarget = '\0';
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
      if (buffer_size == 0)
    {
        return;
    }
    
    copy(psrc1, ptarget, buffer_size - 1);

    
    char *p_end = ptarget;
    while (*p_end != '\0')
    {
        p_end++;
    }

    
    unsigned used = p_end - ptarget;
    unsigned remaining = buffer_size - used - 1;

    if (remaining > 0)
    {
        copy(psrc2, p_end, remaining);
    }
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s\n", buffer);
    return 0;
}
#endif
// DO NOT change the code above