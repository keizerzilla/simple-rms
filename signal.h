/**
 * \file signal.h
 * \author Artur Rodrigues Rocha Neto
 * \date 2024
 * \brief Estrutura de dados para manipulação de sinais 1D (em especial para cálculo de RMS).
 */

#ifndef RMS_H
#define RMS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * \var real
 * \brief Máscara para o tipo ponto flutuante; mudar em função da precisão do sistema (preprocessor?)
 */
typedef float real;

struct signal {
	size_t size;
	real *array;
};

/**
 * \brief Cria um novo sinal vazio.
 * \param size Tamanho do sinal.
 * \return Ponteiro para.
 */
struct signal *signal_new(size_t size);

/**
 * \brief Cria sinal lendo o conteúdo de um arquivo-texto onde cada linha é um 'real' do sinal.
 * \param filename Caminho para o arquivo.
 * \return Ponteiro para.
 */
struct signal *signal_from_file(char *filename);

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

/**
 * \brief Calcula RMS do sinal.
 * \param s Sinal a ser debugado.
 * \return Valor do RMS.
 */
real signal_rms(struct signal *s);

#endif // RMS_H
