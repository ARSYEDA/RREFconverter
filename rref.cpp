//main file for rref converter
#include "rref.h"

//main calls the test function and the 
int main() {
    int rows, columns;
    int **new_matrix = user_input_matrix(rows, columns);
    new_matrix = ref_converter(new_matrix, rows, columns);
    return 0;
}

converter::converter() {
    matrix = NULL;
    COLUMNS = 0;
    ROWS = 0;
}

converter::~converter() {

}
