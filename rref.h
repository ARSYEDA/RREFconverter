//header file for rref converter
#include <iostream>
using namespace std;

//class interface

class converter {
  public:
    converter();
    void set_matrix(int ** new_matrix) {matrix = new_matrix;}
    void set_head(node * temp) {head = temp;}
    void set_columns(int mcolumns) {COLUMNS = mcolumns;}
    void set_rows(int mrows) {ROWS = mrows;}
    void display_matrix();

    void check_dimensions(int rows, int columns);
    int make_matrix();
    bool check_ref();
  private:
    int ** matrix;
    node * head;
    int COLUMNS;
    int ROWS;
};

//test function prototype
int ** test_function(int & rows, int & columns);

