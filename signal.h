/**
 * \file signal.h
 * \author Artur Rodrigues Rocha Neto
 * \date 2024
 * \brief Estrutura de dados para manipulação de sinais 1D (em especial para cálculo de RMS).
 */

#ifndef RMS_H
#define RMS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define SIGNAL_MAX_SIZE 115200

struct signal {
	size_t size;
	size_t samplerate;
	float *array;
};

/**
 * \brief Cria um novo sinal vazio.
 * \param size Tamanho do sinal.
 * \param samplerate Taxa de amostragem usada para gerar o sinal.
 * \return Ponteiro para.
 */
struct signal *signal_new(size_t size, size_t samplerate);

/**
 * \brief Cria sinal lendo o conteúdo de um arquivo-texto onde cada linha é um float do sinal.
 * \param filename Caminho para o arquivo.
 * \param samplerate Taxa de amostragem usada para gerar o sinal.
 * \return Ponteiro para.
 */
struct signal *signal_from_file(char *filename, size_t samplerate);

/**
 * \brief Libera memória alocada por um sinal.
 * \param s Sinal que deve ser liberado.
 */
void signal_free(struct signal *s);

/**
 * \brief Debuga um sinal.
 * \param s Sinal a ser debugado.
 * \param output Arquivo onde a informação de debug deve ser mostrada.
 */
void signal_debug(struct signal *s, FILE *output);

#endif // RMS_H
