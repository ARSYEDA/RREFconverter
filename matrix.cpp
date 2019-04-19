//functions for inputing a new matrix
#include "rref.h"

//main calls the test function and the 
int main() {
    int rows, columns;
    int **new_matrix = user_input_matrix(rows, columns);
    new_matrix = ref_converter(new_matrix, rows, columns);
    return 0;
}

int ** user_input_matrix(int & rows, int & columns) {
    cout << "\nthis function tests the REF converter"
         << "\nplease enter how many rows are in the system: ";
    rows = 0;
    cin >> rows;
    cout << "\nplease enter how many columns are in the system: ";
    columns = 0;
    cin >> columns;
  
    int** matrix = new int*[rows];
    for(int i = 0; i < rows; ++i)
        matrix[i] = new int[columns];

    for(int i = 0; i < rows; ++i) {
        cout << "\nrow " << i+1 << ": \n";
        for(int k = 0; k < columns; ++k) {
            cin >> matrix[i][k];
        }  
        cout << endl;
    }
    return matrix;
}
