#include <iostream>
#include "matrix.h"

Matrix::Matrix(int rows, int columns)
    : rows(rows), columns(columns), matrix(rows, std::vector<int>(columns, 0))
{
    if (rows <= 0 || columns <= 0)
    {
        throw std::invalid_argument("Rows and columns must be positive integers.");
    }
}

int &Matrix::at(int row, int column)
{
    if (row < 0 || row >= rows || column < 0 || column >= columns)
    {
        throw std::out_of_range("Index out of range.");
    }
    return matrix[row][column];
}

int Matrix::at(int row, int column) const
{
    if (row < 0 || row >= rows || column < 0 || column >= columns)
    {
        throw std::out_of_range("Index out of range.");
    }
    return matrix[row][column];
}

void Matrix::print() const
{
    for (const auto &row : matrix)
    {
        for (const auto &element : row)
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}
