/*
	CSVを読み込むところ
*/

//インクルードガード
#ifndef INCLUDE_CSVREAD_H
#define INCLUDE_CSVREAD_H

class CCSVRead
{
public:
	static void readCSV(int rowMAX, int columnMAX, int* dest, char* filename);
	static void readCSV_index(int rowMAX, int columnMAX, int* dest, char* filename, int row_offset, int col_offset);
};

#endif

/*EMD*/
