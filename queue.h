#ifndef _KERNEL_QUEUE_H
#define _KERNEL_QUEUE_H

//#include <kernel.h>


// Estrutura que descreve uma fila circular de tamanho máximo "size".
typedef struct {
	unsigned char *data;

	uint16_t size;
	uint16_t id_last;
	uint16_t id_first;
} queue_t;



bool queue_get_data(queue_t *q, unsigned char *data);
bool queue_insert_data(queue_t *q, unsigned char data);
bool queue_init(queue_t *q, size_t sz);
#define queue_destroy(q) free((q)->data)

#endif

