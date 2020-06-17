#ifndef OUTPUT_H_
#define OUTPUT_H_

#include <Arduino.h>
#include "serial.h"

/* mapeamento das saÃ­das */
//enum {OUT1=8, OUT2, OUT3, OUT4} OUTPUTS;
enum{OUTPUT_OFFSET = 1, LAM_D, LAM_R, EN1, EN2, OUT1, OUT2, OUT3, OUT4, SOLE, ARC, SIR};


/* mapeamento da saída analógica */
#define ANALOG_OUTPUT_OFFSET 10

extern void init_output();
int ajustaAr(int value);
extern void write_init_output(String msg);
extern void write_output(String msg);
extern void analog_write_output(String msg);

#endif