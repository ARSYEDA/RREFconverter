//main file for rref converter
#include "rref.h"

int main() {
  converter c;
  int rows, columns;
  int **new_matrix = test_function(rows, columns);
  c.set_matrix(new_matrix);
  c.check_dimensions(rows, columns);
  c.display_matrix();
  return 0;
}
