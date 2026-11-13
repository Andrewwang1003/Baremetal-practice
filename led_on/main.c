#include <avr/io.h>

int main(void) {
    DDRB |= (1<<DDB5);      // setting the data direction of Port B bit 5 to 1
    PORTB |= (1<<PORTB5);   // setting Port B bit 5 to on 
    while(1){
    }
}