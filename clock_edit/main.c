#include <avr/io.h>
#include <util/delay.h>

int main(void){
    CLKPR = (1 << CLKPCE);
    CLKPR = (1 << CLKPS3);
    DDRB |= (1 << DDB5);
    while(1){
        PORTB ^= (1 << PORTB5);
        _delay_ms(500);
    }
}

// changing the compiler clock time and the internal clock time causes interesting behavior
// _delay_ms is determined by the complier clock time, which can counteract if we use a different internal clock time through editing CLKPR
// if we do same complier clock time and internal clock time, then it will delay 500, else there will be different delay periods 