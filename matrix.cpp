//functions for inputing a new matrix

int ** test_function(int & rows, int & columns) {
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
