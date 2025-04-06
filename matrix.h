#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <stdexcept>

class Matrix
{
private:
    int rows;
    int columns;
    std::vector<std::vector<int>> matrix;

public:
    Matrix(int rows, int columns);

    int getRows() const { return rows; }
    int getColumns() const { return columns; }
    int &at(int row, int column);
    int at(int row, int column) const;

    void print() const;
};

#endif // MATRIX_H
