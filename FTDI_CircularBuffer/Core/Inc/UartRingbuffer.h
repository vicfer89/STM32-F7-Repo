/*
 * UartRingbuffer.h
 *
 *  Created on: 10-Jul-2019
 *      Author: Controllerstech
 */

#ifndef UARTRINGBUFFER_H_
#define UARTRINGBUFFER_H_

#include "main.h"

/* change the size of the buffer */
#define UART_BUFFER_SIZE 64

typedef struct
{
  unsigned char buffer[UART_BUFFER_SIZE];
  volatile unsigned int head;
  volatile unsigned int tail;
} ring_buffer;


/* Initialize the ring buffer */
void Ringbuf_init(void);

/* reads the data in the rx_buffer and increment the tail count in rx_buffer */
int Uart_read(void);

/* Checks if the data is available to read in the rx_buffer */
int IsDataAvailable(void);

#endif /* UARTRINGBUFFER_H_ */
