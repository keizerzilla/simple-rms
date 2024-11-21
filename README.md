# simple-rms

Implementação de uma TAD (Tipo Abstrato de Dados) simples de vetores unidimensionais e cálculo de RMS (*Root Mean Square*).

## Código

- `signal.h`: Assinaturas da TAD de sinal, além de declarações para o pré-processador. 
- `signal.c`: Implementação da TAD.
- `demo.c`: Demonstração.

## Demo

O arquivo `32k_samples.txt` é um arquivo com 32 mil amostras de um sinal cujo RMS é aproximadamente `7,6994`. O programa `demo.c` carrega o sinal oriundo do arquivo e exibe o RMS calculado.

## Compilando e executando

```bash
gcc signal.c demo.c -lm -o demo.exec
./demo.exec
```
