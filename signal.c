/**
 * \file signal.c
 * \author Artur Rodrigues Rocha Neto
 * \date 2024
 * \brief Implementação da TAD definida por 'signal.h'
 */

#include "signal.h"

struct signal *signal_new(size_t size)
{
	struct signal *s = malloc(sizeof(struct signal));
	if (s == NULL)
		return NULL;
	
	s->size = size;
	
	s->array = malloc(size * sizeof(real));
	if (s->array == NULL) {
		free(s);
		s = NULL;
		
		return NULL;
	}
	
	return s;
}

struct signal *signal_from_file(char *filename)
{
	FILE *file = fopen(filename, "r");
	if (file == NULL)
		return NULL;
	
	real v = 0;
	size_t size = 0;
	while (!feof(file) && (fscanf(file, "%f\n", &v) != EOF))
		size = size + 1;
	
	struct signal *s = signal_new(size);
	if (s == NULL)
		return NULL;
	
	fseek(file, 0, SEEK_SET);
	size_t count = 0;
	while (!feof(file) && (fscanf(file, "%f\n", &v) != EOF)) {
		s->array[count] = v;
		count = count + 1;
	}
	
	return s;
}

void signal_free(struct signal *s)
{
	if (s == NULL)
		return;
	
	free(s->array);
	free(s);
	s = NULL;
}

void signal_debug(struct signal *s, FILE *output)
{
	if (s == NULL) {
		fprintf(output, "!!! SINAL VAZIO !!!");
		return;
	}
	
	fprintf(output, "--------------------\n");
	fprintf(output, "SIZE: %lu samples\n", s->size);
	fprintf(output, "--------------------\n");
}

real signal_rms(struct signal *s)
{
	return 69420;
}

real signal_fast_rms(struct signal *s)
{
	return 69420;
}
