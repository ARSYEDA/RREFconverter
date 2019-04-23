//functions for inputing a new matrix
#include "rref.h"

//test functions prototype
//this function allows for the input of matrices and will
//hopefully (eventually) test the edge cases automatically
int ** user_input_matrix(int & rows, int & columns);
void test_display(int ** matrix, int rows, int columns);
void free_mem(int ** matrix, int rows, int columns);

//main calls the test function and the 
int main() {
    int rows, columns;
    int ** new_matrix = user_input_matrix(rows, columns);
    int ** returned_matrix = ref_converter(new_matrix, rows, columns);
    if(!returned_matrix)
	cout << "ERROR: NOT IN REF FORM\n";
    else {
	//RESULTING MATRIX:
        test_display(returned_matrix, rows, columns);
        free_mem(returned_matrix, rows, columns);
    }
    free_mem(new_matrix, rows, columns);
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

void test_display(int ** matrix, int rows, int columns) {
    for(int i = 0; i < rows; ++i) {
        cout << endl;
        for(int k = 0; k < columns; ++k) {
            cout << matrix[i][k] << "   ";
        }
    }
    cout << endl;
}

void free_mem(int ** matrix, int rows, int columns) {
    if(matrix) {
	for(int i = 0; i < rows; ++i) {
	    delete matrix[i];
   	    matrix[i] = NULL;
	}
	delete matrix;
	matrix = NULL;
    }
}
