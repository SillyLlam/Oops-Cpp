#include <iostream>
using namespace std;
class Doctor
{
protected:
    string DoctorName;

public:
    void setDocName(string Dname)
    {
        DoctorName = Dname;
    }
    string getDocName()
    {
        return DoctorName;
    }
};
class Patient : public Doctor
{
protected:
    string PatientName;

public:
    void setPatientName(string Pname)
    {
        PatientName = Pname;
    }
    string getPatName()
    {
        return PatientName;
    }
};
class PatientDetails : public Patient
{
protected:
    string PatientType;
    int bedNum;

public:
    void setPatientDetails(string PatType, int bed)
    {
        PatientType = PatType;
        bedNum = bed;
    }
    void displayDetails(void)
    {
        cout << "Doctor Name: " << getDocName() << endl;
        cout << "Patient Name: " << getPatName() << endl;
        cout << "Patient Type: " << PatientType << endl;
        cout << "Bed Number: " << bedNum << endl;
    }
};
int main()
{
    PatientDetails Rash;
    Rash.setDocName("Parry");
    Rash.getDocName();
    Rash.setPatientName("Rash");
    Rash.getPatName();
    Rash.setPatientDetails("Stomach Ache", 2);
    Rash.displayDetails();
    return 0;
}