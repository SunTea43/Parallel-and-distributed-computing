/*Fecha: 08/02/2022
* Autor: Andres C. Lopez R.
* Subject: Parallel and Distributed Computing.
* Topic: Construction of the first Benchmark
* Description: Application that allows evaluating the performance
*  of a specific aspect of the computer using matrix multiplication
*  with the calssical algorithm (rows x columns)
*
*/

#ifndef MODULE_C_H_INCLUDE
#define MODULE_C_H_INCLUDE


void sampleStart();
void sampleEnd();
double randNumber();
void initMatrix(int SZ, double *Ma, double *Mb, double *Mr);
void printMatrix(int SZ, double *M);
void MM1c(int size, double *Ma, double *Mb, double *Mr);
void MM1f(int size, double *Ma, double *Mb, double *Mr);
double ** memReserve (int size);
void initMatrix_DoublePointers (double **MA, double **MB, double **MC, int size);
void printMatrix_DoublePointers (double **M, int size);
void *multMM(void *arg);
void printTransposed(int size, double *M);
typedef struct argsThreads{
    int numThreads;
    int matrixSize;
    double **matrixA;
    double **matrixB;
    double **matrixR;
    int idThread;
} threadsArguments;

#endif
