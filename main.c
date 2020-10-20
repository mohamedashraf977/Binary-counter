/*
 * File:   main.c
 * Author: Mohamed-PC
 *
 * Created on September 28, 2020, 1:42 PM
 */

#include <xc.h>
#include "config.h"

void main(void) {
    
    TRISB=0x00;
    PORTB=0x00;
    
    TMR1=0x00;
    TMR1CS=1;
    T1OSCEN=1;
    T1CKPS1=0;
    T1CKPS0=0;
    T1SYNC=0;
    TMR1ON=1;
    
    while (1)
    {
        PORTB=TMR1;
        if (TMR1==0b1000)
            TMR1=0x00;
    }
    return;
}
