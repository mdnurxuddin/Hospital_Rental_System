#include <iostream>
#include <string>

using namespace std;
// Base Class Staff

class Staff {
private:

int id;
string name;

protected:
int age;

public:
Staff(int id, string name, int age) : id(id), name(name), age(age){}
virtual void displayDetails() {

cout<<"ID: "<<id<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
}

};
// Derived Class Doctor

class Doctor : public Staff {

private:
string specialization;

public:
Doctor(int id, string name, int age, string specialization): Staff(id, name, age),
specialization(specialization){}

void displayDetails() {
Staff::displayDetails();
cout<<"Specialization: "<<specialization<<endl;
}

int calculateSalary(int hours, int hourlyRate) {
return hours * hourlyRate;
}

};
// Derived Class Nurse
class Nurse : public Staff {

private:
string shift;

public:
Nurse(int id, string name, int age, string shift): Staff(id, name, age), shift(shift){}
void displayDetails() {

Staff::displayDetails();
cout<<"Shift: "<<shift<<endl;
}

int calculateSalary(int days, int dailyRate) {
return days * dailyRate;
}

};

//-------------------------------------------//

int main() {

Doctor d1(198, "Nur", 35, "Dentist");
cout<< "Doctor Details:" << endl;

d1.displayDetails();
Nurse n1(291, "Devid", 32, "Nurse");
cout<< "\nNurse Details:" << endl;

n1.displayDetails();
int doctor_hours= 30;
int doctor_hourly_rate= 100;
int nurse_days= 22;
int nurse_daily_rate= 90;
int doctor_salary= d1.calculateSalary(doctor_hours, doctor_hourly_rate);
int nurse_salary= n1.calculateSalary(nurse_days, nurse_daily_rate);

cout<<"\nSalaries:"<<endl;
cout<<"Doctor's Salary: "<<doctor_salary<<endl;
cout<<"Nurse's Salary: "<<nurse_salary<<endl;

return 0;

}
