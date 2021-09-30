#pragma once
#include <iostream>
#include <vector>
#include <string>

class Table {
private:
	int row;
	int column;
	std::vector<std::vector<std::string>> cell;

public:
	Table(int row, int column);
	int getRow() { return row; }
	int getColumn() { return column; }
	void setRow(int rowToSet) { this->row = rowToSet; }
	void setColumn(int columnToSet) { this->column = columnToSet; }
	void addRow(int rowToAdd) {}
	void addColumn(int columnToAdd) {}


};