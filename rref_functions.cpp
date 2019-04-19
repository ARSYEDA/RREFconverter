//functions for rref converter
#include "rref.h"

converter::converter() {
  matrix = NULL;
  head = NULL;
  COLUMNS = 0;
  ROWS = 0;
}

void converter::display_matrix() {
  for(int i = 0; i < ROWS; ++i) {
    cout << endl;
    for(int k = 0; k < COLUMNS; ++k) {
      cout << matrix[i][k] << "   ";
    }
  }
  cout << endl;
}

void converter::check_dimensions(int rows, int columns) {
  set_columns(columns);
  set_rows(rows);
}

