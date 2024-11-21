/**
 * \file demo.c
 * \author Artur Rodrigues Rocha Neto
 * \date 2024
 * \brief Demonstração da TAD definida em 'signal.h'
 */

#include "signal.h"

int main(int argc, char **argv) {
	struct signal *s = signal_from_file("32k_samples.txt");
	
	if (s == NULL)
		printf("Erro ao alocar memória suficiente!");
	
	printf("RMS = %f\n", signal_rms(s));
	
	signal_free(s);
	
	return 0;
}
