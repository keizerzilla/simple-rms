# simple-rms

Implementação de uma TAD simples de vetores unidimensionais e cálculo de RMS (*Root Mean Square*).

## Demo

O arquivo `32k_samples.txt` é um arquivo com 32 mil amostras de um sinal qualquer cujo RMS é aproximadamente `7,6994`. O programa `main.c` carrega o sinal desse arquivo e cálcula o RMS.

## Compilando e executando

```bash
gcc signal.c main.c -lm -o main.exec
./main.exec
```
