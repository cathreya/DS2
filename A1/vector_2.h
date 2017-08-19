//A1: Learning Classes, Objects, Constructor using Bank money transfer and planar geometry applications
class vector{
	public:
		vector(){
			x=0;y=0;
		}
		vector(float a, float b){
			x=a; y=b;
		}
		inline float getX(){
			return x;
		}
		inline float getY(){
			return y;
		}
		inline bool nonZero(){
			return(!x==0 && !y==0);
		}
		vector difference(vector &a);
		float inner(vector &a);
		bool isPerpendicular(vector &a);
		bool isParallel(vector &a);
		void display();
		float mod();
		float angle(vector &a);
		
	private:
		float x;
		float y;
};

vector getVector();
