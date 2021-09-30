#include <iostream>
#include "table.h"

Table::Table(int row, int column) {} : (row = 1, column = 1);

void Table::addRow(int rowToAdd) {
	setRow(getRow() + rowToAdd);
}
void Table::addColumn(int columnToAdd) {
	setRow(getColumn() + columnToAdd);
}


//ki�rat�s, ez a fv h�v�dik meg minden akci� ut�n
void Table::printTable() {
	const std::string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		for (int i = 0; i < getColumn(); i++) {
			std::cout << letters[i] << "\t";
		}
	std::cout << std::endl;
	for (int i = 1; i < cell.size(); i++) {
		std::cout << i << " ";
		for (int j = 0; j < cell[i].size(); j++) {
			std::cout << cell[i][j] << "\t" << "  ";
		}
		std::cout << std::endl;
	}
}
