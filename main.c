/**
 * \file main.c
 * \author Artur Rodrigues Rocha Neto
 * \date 2024
 * \brief Demonstração da TAD definida pela 'signal.h'
 */

#include "signal.h"

int main(int argc, char **argv) {
	struct signal *s = signal_from_file("32k_samples.csv");
	
	if (s == NULL)
		printf("Erro ao alocar memória suficiente!");
	
	printf("RMS = %f\n", signal_rms(s));
	
	signal_free(s);
	
	return 0;
}
