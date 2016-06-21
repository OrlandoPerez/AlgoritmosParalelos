#include <stdio.h>
#include <stdlib.h>

#include <cmath>



int rowA=1;
int columnA=3;
int columnB=2;

int N=2;

void product(int A[rowA][columnA], int B[columnA][columnB],int C[rowA][columnB]){
    int i,j,k;
    for (i = 0; i < rowA; ++i){
        //printf("\n");
        for (j = 0; j < columnB; ++j){
            for (k = 0; k < columnA; ++k){
                C[i][j] += A[i][k] * B[k][j];

            }

            //printf("%i  ",C[i][j]);
        }
    }

}

void BlockProduct(int A[rowA][columnA], int B[columnA][columnB],int C[rowA][columnB]){
    int i,j,k,i0,j0,k0;
    for (i0 = 0; i0 < rowA; ++i0){
        //printf("\n");
        for (j0 = 0; j0 < columnB; ++j0){
            for (k0 = 0; k0 < columnA; ++k0){
                C[i][j] += A[i][k] * B[k][j];


                for (i = i0; i < min(i0+); ++i){
                    //printf("\n");
                    for (j = 0; j < columnB; ++j){
                        for (k = 0; k < columnA; ++k){
                            C[i][j] += A[i][k] * B[k][j];

                        }

                        //printf("%i  ",C[i][j]);
                    }
                }
            }

            //printf("%i  ",C[i][j]);
        }
    }





        int main(void)
        {
            int a[rowA][columnA];
            int i,j;
            for (i = 0; i < rowA; ++i){
                //printf("\n");
                for (j = 0; j < columnA; ++j){
                    a[i][j] = rand() % 21;
                  //  printf("%i  ",a[i][j]);
                }
            }
            //printf("\n----------------------------\n");

            int b[columnA][columnB];
            for (i = 0; i < columnA; ++i){
                //printf("\n");
                for (j = 0; j < columnB; ++j){
                    b[i][j] = rand() % 21;
                  //  printf("%i  ",b[i][j]);
                }
            }

            //printf("\n----------------------------\n");
            int c[1][2]={{0}};



            product(a,b,c);


            return 0;
        }

