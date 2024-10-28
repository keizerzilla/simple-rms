#include "signal.h"

int main(int argc, char **argv) {
	size_t size = 32;
	struct signal *s = signal_new(size, 12000);
	
	if (s == NULL)
		printf("Erro ao alocar memória suficiente!");
	
	for (int i = 0; i < size; i++)
		printf("%f\n", s->array[i]);
	
	signal_debug(s, stdout);
	signal_free(s);
	
	return 0;
}
