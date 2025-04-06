#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "matrix.h"

class GaussianElimination
{
private:
    Matrix matrix;

public:
    void fill(int row, int column, int value);
    void calculate();
    void print() const;
};

#endif // ALGORITHM_H
