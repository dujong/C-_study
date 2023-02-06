#include <iostream>
#include <string>
#include <fstream>
#include <ostream>

class Cell {
protected:
	int x, y;
	Table* table;
	std::string data;

public:
	Cell(std::string data, int x, int y);
};

Cell::Cell(std::string data, int x, int y) : data(data), x(x), y(y) {}

class Table {
	int max_row_size;
	int max_col_size;

	Cell*** data_table;

public:
	Table(int max_row_size, int max_col_size);
	~Table();
	void reg_cell(Cell* c, int row, int col);
	int to_numeric(const std::string& s);
	int to_numeric(int row, int col);
	std::string stringify(const std::string& s);
	std::string stringify(int row, int col);

	virtual std::string print_table() = 0;

};

Table::Table(int max_row_size, int max_col_size) : max_row_size(max_row_size), max_col_size(max_col_size) {
	data_table = new Cell **[max_row_size];
	for (int i = 0; i < max_row_size; i++) {
		data_table[i] = new Cell * [max_col_size];
		for (int j = 0; j < max_col_size; j++) {
			data_table[i][j] = NULL;
		}
	}
}

Table::~Table() {
	for (int i = 0; i < max_row_size; i++) {
		for (int j = 0; j < max_col_size; j++) {
			if (data_table[i][j]) delete[] data_table[i][j];
		}
	}
	for (int i = 0; i < max_row_size; i++) {
		delete[] data_table[i];
	}
	delete[] data_table;
}


void Table::reg_cell(Cell* c, int row, int col){
	if (!(row < max_row_size && col < max_col_size)) return;

	if (data_table[row][col]) {
		delete data_table[row][col];
	}
	data_table[row][col] = c;
}

int Table::to_numeric(const std::string& s){

	return 0;
}



int main() {
	

	return 0;
}


