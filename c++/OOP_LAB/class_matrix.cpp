#include <iostream>

class Matrix {
    friend std::ostream &operator<<(std::ostream &out, const Matrix &m);
    private :
        int *mat;
        int rows;
        int columns;

    public :
        Matrix(int rows, int columns);
        ~Matrix();
        void operator+=(const Matrix &m);
        void set_values();
};

Matrix::Matrix(int rows, int columns)
    : mat {nullptr}, rows {rows}, columns {columns} {
    mat = new int[rows][columns];
}

Matrix::~Matrix() {
    delete [][]mat;
}

void Matrix::operator+=(const Matrix &m) {
    for()
}
