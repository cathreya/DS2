#include <iostream>
#include <stdlib.h>
#include "matrix.h"
using namespace std;
matrix::matrix(int r, int c){
	mat = new double*[r];
	for(int i=0;i<r;i++){
		*(mat+i) = new double[c];
	}
	rows = r;
	cols = c;
}

matrix::matrix(double **m, int r, int c){
	mat = new double*[r];
	for(int i=0;i<r;i++){
		*(mat+i) = new double[c];
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			mat[i][j] = m[i][j];
		}
	}
	rows = r;
	cols = c;
}

matrix::matrix(const matrix &m){
	mat = new double*[m.rows];
	for(int i=0;i<m.rows;i++){
		*(mat+i) = new double[m.cols];
	}
	for(int i=0;i<m.rows;i++){
		for(int j=0;j<m.cols;j++){
			mat[i][j] = m.mat[i][j];
		}
	}
	rows = m.rows;
	cols = m.cols;
}

matrix::~matrix(){
	if(mat!=NULL){
		for(int i=0;i<rows;i++){
			delete[] mat[i];
			mat[i] = NULL;
		}
		delete[] mat;
		mat = NULL;
	}
}

void matrix::read(){
	cout<<"Enter the Matrix:\n";
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>mat[i][j];
		}
	}
}

void matrix::display() const{
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<"  "<<mat[i][j];
		}
		cout<<endl;
	}
	cout<<endl;	
}

bool matrix::operator+=(const matrix &m){
	if(rows == m.rows && cols == m.cols){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				mat[i][j]+=m.mat[i][j];
			}
		}
		return true;
	}
	else{
		return false;
	}
}


const matrix& matrix::operator=(const matrix &m){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			mat[i][j] = m.mat[i][j];
		}
	}
	return *this;
}

/*
matrix matrix::operator+(matrix m){
	matrix result(rows,cols);
	if(m.rows == rows && cols == m.cols){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				result.mat[i][j] = mat[i][j] + m.mat[i][j];
			}
		}
		return result;
	}	
	return *this;
}
*/

/*
matrix matrix::operator+(const matrix &m1){
	int a = m1.rows, b = m1.cols;
	matrix res(a,b);
	if(m1.rows == rows && m1.cols == cols){
		for(int i=0;i<m1.rows;i++){
			for(int j=0;j<m1.cols;j++){
				res.mat[i][j] = m1.mat[i][j] + mat[i][j];
			}
		}
		return res;
	}
	return *this;
}
*/

matrix operator+(matrix m1, matrix m2){
	if(m1.rows == m2.rows && m1.cols == m2.cols){
		for(int i=0;i<m1.rows;i++){
			for(int j=0;j<m1.cols;j++){
				m1.mat[i][j] += m2.mat[i][j];
			}
		}
	}
	return m1;
}


matrix matrix::operator*(const int n){
	matrix product(rows,cols);
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			product.mat[i][j] = mat[i][j]*n;
		}
	}	
	return product;
}

bool matrix::operator==(matrix m) const{
	if(rows == m.rows && cols == m.cols){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				if(mat[i][j]!=m.mat[i][j]){
					return false;
				}
			}
		}
		return true;
	}
	return false;
}

bool matrix::operator!=(matrix m) const{
	if(rows == m.rows && cols == m.cols){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				if(mat[i][j]==m.mat[i][j]){
					return false;
				}
			}
		}
		return true;
	}
	return true; 
}

bool matrix::operator<(matrix m) const{
	if(rows == m.rows && cols == m.cols){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				if(mat[i][j]!=m.mat[i][j]){
					if(mat[i][j]<m.mat[i][j]){
						return true;
					}
					else{
						return false;	
					}
				}
			}
		}
	}
	return false; 
}

matrix::row matrix::operator[](int index){
	row r(mat[index],cols);
	return r;
}

double matrix::operator[](string index){
	if(index.length() == 3){
		int a = (int)index[0];
		int b = (int)index[2];
		return mat[a-1][b-1];
	}
	cout<<"Out of Bound\n";
	return 0.0;
}

/*
void* matrix::operator new(size_t size){
	void ptr = malloc(sizeof(matrix));
	ptr->mat = NULL;
	ptr->rows = ptr->cols = 0;
	return ptr;
}
*/

void *matrix::operator new(size_t size){
	matrix* ptr = ::new matrix;
	return ptr;
}

void matrix::operator delete(void *p){
	free(p);
}
