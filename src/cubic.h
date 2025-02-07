#pragma once

void matrixMultiply(int** matrix1, int rows1,
                    int** matrix2, int rows2,
                    int columns,
                    int** product)
{
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns; j++) {
            product[i][j] = 0;
            for (int k = 0; k < rows2; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
