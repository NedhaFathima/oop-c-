#include<iostream>
#include<string>
using namespace std;
class Patient{
	public: 
	int patientID;
	string PName;
	void getPatientInfo();
	void putPatientInfo();
	void makeAppointment();
	void Diagnosis();
	void Billing();
	void printBill();
	private:
	string Address;
	string Gender;
	int Phone;
	string Blood_Group;
	string doctor_Name;
	string app_date;
	string DiagnosisInfo;
	string MedicineInfo;
	float doctorFee;
	float medicine_charge;
	float Total;
	
};
void Patient::getPatientInfo()
{
	cout<<"Enter patient details\nEnter Patient name:\n";
	cin>>PName;
	cout<<"Enter Patient ID:\n";
	cin>>patientID;
	cout<<"Address:\n";
	cin>>Address;
	cout<<"Gender\n";
	cin>>Gender;
	cout<<"phone no:\n";
	cin>>Phone;
	cout<<"Blood Group:\n";
	cin>>Blood_Group;
}
void Patient::putPatientInfo()
{
	cout<<"Patient name:"<<PName<<endl;
	cout<<"Patient ID: "<<patientID<<endl;
	cout<<"Address: "<<Address<<endl;
	cout<<"Gender: "<<Gender<<endl;
	cout<<"phone no: "<<Phone<<endl;
	cout<<"Blood group: "<<Blood_Group<<endl;
}
void Patient::makeAppointment()
{	
	cout<<"patient name: "<<PName<<endl;
	cout<<"Patient ID: "<<patientID<<endl;
	cout<<"Enter doctor name"<<endl;
	cin>>doctor_Name;
	cout<<"Appointment date: "<<endl;
	cin>>app_date;
};
void Patient::Diagnosis()
{	
	cout<<"patient name: "<<PName<<endl;
	cout<<"Patient ID: "<<patientID<<endl;
	cout<<"Doctor's name: "<<doctor_Name<<endl;
	cout<<"Doctors Diagnosis: "<<endl;
	cin>>DiagnosisInfo;
	cout<<"Medicine prescribed:"<<endl;
	cin>>MedicineInfo;
}
void Patient::Billing()
{
	cout<<"patient name: "<<PName<<endl;
	cout<<"Patient ID: "<<patientID<<endl;
	cout<<"Doctor's name: "<<doctor_Name<<endl;
	cout<<"Consultation fee:\n";
	cin>>doctorFee;
	cout<<"Pharmacy bill:\n";
	cin>>medicine_charge;
	Total=doctorFee+medicine_charge;
	cout<<"Total bill: "<<Total;
};
void Patient::printBill()
{	
	cout<<"***************************"<<endl;
	cout<<"\tRAJAGIRI HOSPITAL"<<endl;
	cout<<"****************************"<<endl;
	cout<<"\t BILL"<<endl;
	cout<<"patient name: "<<PName<<endl;
	cout<<"Patient ID: "<<patientID<<endl;
	cout<<"Doctor's name: "<<doctor_Name<<endl;
	cout<<"Consultation fee:"<<doctorFee<<endl;
	cout<<"Pharmacy bill:"<<medicine_charge<<endl;
	cout<<"Total:"<<Total<<endl;
}
int main()
{	Patient obj;
	int ch;
	while(1)
	{
		cout<<"\tMENU\n1.Enter patient details\n2.Get Patient Details\n3.Make appointment\n4.Diagnosis\n5.Billing\n6.print bill\n7.EXIT\n";
		cin>>ch;
		if(ch==7)
		{	cout<<"Thank you"<<endl;
			break;
		}
		switch(ch)
		{
			case 1:
			obj.getPatientInfo();
			break;
			case 2:
			obj.putPatientInfo();
			break;
			case 3:
			obj.makeAppointment();
			break;
			case 4:
			obj.Diagnosis();
			break;
			case 5:
			obj.Billing();
			break;
			case 6:
			obj.printBill();
			break;
			default:
			cout<<"Invalid option\n";
			break;
		}
	}
}

