//functions for rref converter
#include "rref.h"

//this function can be called to start the ref conversion process.
//it requires a int ** matrix and the row, columns of that matrix.
//it returns a reduced matrix 
int ** ref_converter(int **new_matrix, int rows, int columns) {
    converter c;
    c.set_matrix(new_matrix);
    c.dimensions(rows, columns);
    int status = c.convert();
    if(status == 1)
	return c.get_matrix();
    if(status == 7)
	cout << "\nexiting\n";
    return 0;
}

//display function for 2d array
void converter::display_matrix() {
    for(int i = 0; i < ROWS; ++i) {
        cout << endl;
        for(int k = 0; k < COLUMNS; ++k) {
            cout << matrix[i][k] << "   ";
        }
    }
    cout << endl;
}

//This function takes the inputed dimensions and then sets 
//the corresponding values in the class to those values
void converter::dimensions(int rows, int columns) {
    set_columns(columns);
    set_rows(rows);
}

//This function should check the whole matrix to see if 
//it is in REF form by going through each row, checking
//that the leading coef is equal to 1 and then checking
//that pivot column to see if all other entries are 0
int converter::is_ref() {
    if(!matrix) {
	cout << "\n error with matrix\n";
	return 7;
    }
    for(int i = 0; i < ROWS; ++i) {
	for(int k = 0; k < COLUMNS; ++k) {
	    
	} 
    }
    return true;
}

//this function checks all entries in a column below the 
//leading coeffiecient (called the pivot), this column is listed
//as a pivot column if it has a 1 in the leadinf coef position
//it is in the correct form if there are all 0s below the 1
bool converter::check_pivot(int row, int column) {
    for(int i = row+1; i < ROWS; ++i) {
	if(matrix[i][column] != 0) 
	    return false;
    }
    return true;
}

//This function will go through the matrix and reduce by calling
//helper functions, this function manages the reducing
int converter::convert() {
    int ref = is_ref();
    if(ref == 7)
	return ref;
    if(ref == 1)
	return 0;
}
