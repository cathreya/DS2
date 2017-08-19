#include <iostream>
using namespace std;
class matrix{
	public:

		class row{
			public:
				row(){
					rrow=NULL;				
				};
				row(double* r, int s){
					rrow = new double[s];
					for(int i=0;i<s;i++){
						rrow[i] = r[i];
					}
				}
				double operator[](int index){
					return rrow[index];
				}
			private:
				double *rrow;
		};


		matrix(){
			mat = NULL;
			rows=0;
			cols=0;
		};
		matrix(int r, int c);
		matrix(double **m, int r, int c);
		matrix(const matrix&);
		~matrix();

		//matrix operator+(const matrix &m);
		friend matrix operator + (matrix m1, matrix m2);
		void read();
		void display() const;
	
		const matrix& operator=(const matrix &m);
		matrix operator*(const int n);
		bool operator+=(const matrix &m);
		
		bool operator==(matrix m)const;
		bool operator!=(matrix m)const;
		bool operator<(matrix m)const;

	
		row operator[](int index);
		double operator[](string index);

		void* operator new(size_t size);
		void operator delete(void*);

	private:
		double **mat;
		int rows;
		int cols;

};

