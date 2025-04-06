#include <iostream>
#include "algorithm.h"

void GaussianElimination::fill(int row, int column, int value)
{
    matrix.at(row, column) = value;
}

void GaussianElimination::calculate()
{
    if (matrix.getRows() != 3 && matrix.getColumns() != 4)
    {
        std::invalid_argument("The matrix must have 3 rows and 4 columns");
    }
}

void GaussianElimination::print() const
{
    matrix.print();
}
