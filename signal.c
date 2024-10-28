#include "signal.h"

struct signal *signal_new(size_t size, size_t samplerate)
{
	struct signal *s = malloc(sizeof(struct signal));
	
	if (s == NULL)
		return NULL;
	
	s->size = size;
	s->samplerate = samplerate;
	s->array = malloc(size * sizeof(float));
	
	if (s->array == NULL) {
		free(s);
		s = NULL;
		
		return NULL;
	}
	
	return s;
}

struct signal *signal_from_file(char *filename, size_t samplerate)
{
	FILE *file = fopen(filename, "r");
	
	if (file == NULL)
		return NULL;
	
	// continuar aqui!
	
	//struct signal *s = signal_new(samplerate);
	
	return NULL;
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
	
	fprintf(output, "-----------------------------\n");
	fprintf(output, "SIZE:       %lu samples\n", s->size);
	fprintf(output, "SAMPLERATE: %lu Hz\n", s->samplerate);
	fprintf(output, "-----------------------------\n");
}
