//
//  main.c
//  Traccia 5 - Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 11/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>
double maxOfSumRows(double [6][4], int, int);

int main(int argc, const char * argv[]) {
    double points[6][4] = {{1.4,5.4,0.3,0.9},{10.1,54.3,2.2,1.1},{3.3,25.7,8.8,8.9},{8.1,13.5,21.3,4.6},{9.9,10.9,0.9,7.6},{41.4,34.0,21.4,7.5}};
    double max = maxOfSumRows(points, 6, 4);
    printf("max = %0.2f\n", max);
    return 0;
}

double maxOfSumRows(double matrix[6][4], int row_size, int column_size){
    int i,j;
    double sum, max_sum = 0;
    
    for (i = 0; i < row_size; i++) {
        sum = 0;
        for (j = 0; j < column_size; j++) {
            sum += matrix[i][j];
            //debug : printf("somma + matrice |%d|%d| (somma di %f) = %f\n", i,j,matrix[i][j], sum);
        }
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    return max_sum;
}

