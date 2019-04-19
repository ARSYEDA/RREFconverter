//functions for rref converter
#include "rref.h"

node::node() {
  data = NULL;
  next = NULL;
}

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

void converter::display_lll() {
  node * temp = head;
  while(temp) {
    cout << endl;
    for(int k = 0; k < COLUMNS; ++k) {
      cout << temp -> data[k] << "   ";
    }
    temp = temp -> next;
  }
  cout << endl;
}

void converter::check_dimensions(int rows, int columns) {
  set_columns(columns);
  set_rows(rows);
}

void converter::make_lll() {
  node * temp = head;
  for(int i = 0; i < ROWS; ++i) {
    temp = new node;
    temp -> data = new int[COLUMNS];
    for(int k = 0; k < COLUMNS; ++k) {
      temp -> data[COLUMNS] = matrix[i][k];
    } 
    temp = temp -> next;
  }
  head = temp;
}
