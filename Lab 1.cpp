#include <iostream>
#include <string>


using namespace std;

class HR{
private:
	string Name_Of_Company;
	int Workers_Quantity;
	int Workhours_Per_Month;
	int Payment_Per_Hour;
	double Income_Tax;

public:
	void Set_Name_Company(string set_Name_Company){
		Name_Of_Company = set_Name_Company;
	}
	void Set_Workers_Quantity(int set_Workers_Quantity) {
		Workers_Quantity = set_Workers_Quantity;
	}
	void Set_Workhours_Per_Month(int set_Workhours_Per_Month) {
		Workhours_Per_Month = set_Workhours_Per_Month;
	}
	void Set_Payment_Per_Hour(int set_Payment_Per_Hour) {
		Payment_Per_Hour = set_Payment_Per_Hour;
	}
	void Set_Income_Tax(double set_Income_Tax) {
		Income_Tax = set_Income_Tax;
	}
	int Get_Salary() {
		return Payment_Per_Hour * Workhours_Per_Month;
	}
	double Get_Income_Tax() {
		return Get_Salary() * Income_Tax;
	}
	string Get_Name_Company() {
		return Name_Of_Company;
	}
};

int main(){
	setlocale(LC_ALL, "RU");
	string Name_Of_Company = "Redwings";
	int Workers_Quantity = 55;
	int Workhours_Per_Month = 255;
	int Payment_Per_Hour = 500;
	double Income_Tax = 0.13;
	HR Operate;
	Operate.Set_Name_Company(Name_Of_Company);
	Operate.Set_Workers_Quantity(Workers_Quantity);
	Operate.Set_Workhours_Per_Month(Workhours_Per_Month);
	Operate.Set_Payment_Per_Hour(Payment_Per_Hour);
	Operate.Set_Income_Tax(Income_Tax);
	cout << "Company: " << Operate.Get_Name_Company() << endl;
	cout << "Worker's salary: " << Operate.Get_Salary() << endl;
	cout << "Income tax: " << Operate.Get_Income_Tax();
	return 0;
}