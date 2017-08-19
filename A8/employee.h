#ifndef EMP_H
#define EMP_H

class Employee{
	public:
		Employee(int eno=0, string name="",int sal=0){
			this->empName = name;
			this->empNo = eno;
			this->salary = sal;

		}
		inline int getEno() const{
			return empNo;
		}
		inline string getName() const{
			return empName;
		}
		inline int getSal() const{
			return salary;
		}
	private:
		string empName;
		int empNo;
		int salary;

};

#endif