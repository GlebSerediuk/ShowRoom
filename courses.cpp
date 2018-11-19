

#include "pch.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <Windows.h>


using namespace std;

class Machin {
public:
	Machin() {}
	Machin(string company, float pover, string color, int ltr) {
		this->company = company;
		this->ltr = ltr;
		this->pover = pover;
		this->color = color;
	}

	void Output()
	{
		cout << "Machin :" << company << endl << "Pover :" << pover << endl << "Color :" << color << endl << "LTR :" << ltr << endl;
	}

protected:
	int ltr;    // litru
	float pover;  //мощность
	string color; //цвет
	string company; //компания
	string Warning = "The commission takes 40.5% of the car cost.In this case, insurance and policy + additional equipment are not counted";
};

class Moto : public Machin {
public:
	Moto(string company, float pover, string color, int ltr) :Machin(company, pover, color, ltr)
	{}
	void OutMot() {
		cout << "Moto :" << company << endl << "Pover :" << pover << endl << "Color :" << color << endl << "LTR :" << ltr << endl;
	}
};

class Gun {
protected:

	string Model;
	int Price;
	string Name;
	string Color;
	int Creat_Year;
public:
	Gun() {}
	Gun(string Model, int Price, string Name, string Color, int Creat_Year) {
		this->Model = Model;
		this->Price = Price;
		this->Name = Name;
		this->Color = Color;
		this->Creat_Year = Creat_Year;


	}
};

class Magnum :public Gun

{
public:
	Magnum(string Model, int Price, string Name, string Color, int Creat_Year) :Gun(Model, Price, Name, Color, Creat_Year)
	{}
	void OutMag() {
		cout << "Model : " << Model << endl << "Price  :" << Price << " " << "$" << endl << "Name : " << Name << endl << "Color : " << Color << endl << "Creat Year : " << Creat_Year << endl;
	}

};
class Knife : public Gun {
public:
	Knife() {}
	Knife(string Model, int Price, string Name, string Color, int Creat_Year) : Gun(Model, Price, Name, Color, Creat_Year)
	{}
	void OutKnife() {
		cout << "Model : " << Model << endl << "Price : " << Price << " " << "$" << endl << "Name : " << Name << endl << "Color : " << Color << endl << "Creat Year : " << Creat_Year << endl;
	}
};

///////////////////////////////////////       ПОПЕРЕДЖЕННЯ
void README() {
	string README = "Remember, a weapon can kill a person. The bullet is always up and on the fuse. Weapons are sold only for the availability of medical certificates and law enforcement. False documents are punishable by criminal statutes";
	cout << README << endl;
}
void README2() {
	string README2 = "Cold arms are sold only if documents are available and people over 21 years old";
	cout << README2 << endl;
}
void Warninng() {
	string Warning = "The commission takes 40.5% of the car cost.In this case, insurance and policy + additional equipment are not counted";
	cout << Warning << endl;
}
//////////////////////////////////////////



int main()
{


	cout << "CAR SHOWROOM AND Guns - OPEN" << endl;
	cout << "___________________________________________________________________________" << endl;

	////////////////////////////////////////////////////////////////////
	Machin BMW("BMW.model-M2", 5.6, "Black", 150);
	Machin Lanos("Lanos.model-sens", 3.9, "Blue", 90);
	Machin Ford("Ford.model-Mustang GT", 6.2, "Red", 170);

	Moto Yamaha("Yamaha.model-Rex2.V4", 4.0, "Black", 50);
	Moto Honda("Honda.Model-Jac88", 5.2, "White", 75);
	Moto Ducati("Ducati.model-LS.BxGT9", 4.8, "Black", 60);
	//Об*єкти класів

	Magnum Smith("Smith.44", 550, "Killers", "White", 1844);
	Magnum Tomas("Tomas.32BXreks", 1000, "BigBoy", "Silver", 1900);
	Magnum Smith2("Smith.88", 1300, "Master", "White", 2000);

	Knife Machete("Machete", 1500, "pAIn", "Silver", 2000);
	Knife Katana("Katana", 5000, "BlackMamba", "Black", 1400);
	Knife Excalibur("Excalibur", 9000, "Old", "Gold", 500);
	///////////////////////////////////////////////////////////////////////
	while (true) {
		cout << endl;
		cout << "Choose where you want to go : Car SHOROOM or GUNs" << endl << "1 -> GUNs" << endl << "2-> CAR SHOWROOM" << endl;
		cout << endl;
		int Buy;
		int x;
		cin >> x;
		system("cls");
		if (x == 1) {


			int Guns;
			cout << "Welcome to GUNs" << endl;
			cout << "1.Magnum\t" << endl;
			cout << "2.Knife\t" << endl;
			cout << "3.Exit\t" << endl;
			cin >> Guns;
			system("cls");


			switch (Guns) {
			case 1:
				int Magnum;
				cout << "1. Company Smith" << endl;
				cout << "2. Company Tomas " << endl;
				cout << "3. Company Smith.2" << endl;
				cout << "4. READ ME" << endl;
				cout << "5. Exit" << endl;
				cin >> Magnum;
				system("cls");

				cout << "___________________________________________________________________________" << endl;
				switch (Magnum) {
				case 1:
					cout << "Company Smith :\t" << endl;
					Smith.OutMag();
					cout << " Do you want to buy ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations GUNs is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}

					break;

				case 2:
					cout << "Company Tomas :\t" << endl;
					Tomas.OutMag();
					cout << " Do you want to buy? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations GUNs is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}

					break;
				case 3:
					cout << "Company Smith.2 :\t" << endl;
					Smith2.OutMag();
					cout << " Do you want to buy  ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations GUNs is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 4:
					cout << "READ ME :\t" << endl;
					README();
					break;
				case 5:
					cout << "Exit :\t" << endl;
					exit(EXIT_SUCCESS);
					break;
				default:
					cout << "Error.Please Enter valuer 1-5\t" << endl;
					exit(EXIT_FAILURE);

				}


				break;

			case 2:
				int Knife;
				cout << "1. Company Machete" << endl;
				cout << "2. Company Katana" << endl;
				cout << "3. Company Excalibur" << endl;
				cout << "4. READ ME" << endl;
				cout << "5. Exit" << endl;
				cin >> Knife;
				system("cls");

				cout << "___________________________________________________________________________" << endl;
				switch (Knife) {
				case 1:
					cout << "Machete:\t" << endl;
					Machete.OutKnife();
					cout << " Do you want to buy  ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations GUNs is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 2:
					cout << "Katana :\t" << endl;
					Katana.OutKnife();
					cout << " Do you want to buy  ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations GUNs is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 3:
					cout << "Excalibur :\t" << endl;
					Excalibur.OutKnife();
					cout << " Do you want to buy ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations GUNs is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 4:
					cout << "READ ME :\t" << endl;
					README2();
					break;
				case 5:
					cout << "Exit :\t" << endl;
					exit(EXIT_SUCCESS);
					break;
				default:
					cout << "Error.Please Enter valuer 1-5\t" << endl;
					exit(EXIT_FAILURE);
				}
				break;
			case 3:
				exit(EXIT_SUCCESS);
				break;
			default:
				cout << "Error.Please Enter valuer 1-5\t" << endl;
				exit(EXIT_FAILURE);
			}

		}
		else if (x == 2) {
			/////////////////////////////////////////////////////////////////////////////////////////////////
			int Car_Showroom;
			cout << "1.Moto\t" << endl;
			cout << "2.Auto\t" << endl;
			cout << "3.Exit\t" << endl;
			cin >> Car_Showroom;
			system("cls");
			cout << "___________________________________________________________________________" << endl;

			switch (Car_Showroom) {
			case 1:
				int Moto;
				cout << "1. Company Yamaha" << endl;
				cout << "2. Company Honda " << endl;
				cout << "3. Company Ducati" << endl;
				cout << "4. Warninng" << endl;
				cout << "5. Exit" << endl;
				cin >> Moto;
				system("cls");
				cout << "___________________________________________________________________________" << endl;
				switch (Moto) {
				case 1:
					cout << "Company Yamaha :\t" << endl;
					Yamaha.OutMot();
					cout << "Do you want to buy this car? ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations car is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 2:
					cout << "Company Honda :\t" << endl;
					Honda.OutMot();
					cout << "Do you want to buy this car? ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations car is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 3:
					cout << "Company Ducati :\t" << endl;
					Ducati.OutMot();
					cout << "Do you want to buy this moto ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations moto is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 4:
					cout << "Warninng :\t" << endl;
					Warninng();
					break;
				case 5:
					cout << "Exit :\t" << endl;
					exit(EXIT_SUCCESS);
					break;
				default:
					cout << "Error.Please Enter valuer 1-5\t" << endl;
					exit(EXIT_FAILURE);
				}

				break;
			case 2:
				int Auto;
				cout << "Welcome to CAR SHOWROOM" << endl;
				cout << "1. Company BMW" << endl;
				cout << "2. Company Lanos" << endl;
				cout << "3. Company Ford" << endl;
				cout << "4. Warninng" << endl;
				cout << "5. Exit" << endl;


				cin >> Auto;
				system("cls");
				cout << "___________________________________________________________________________" << endl;
				switch (Auto) {
				case 1:
					cout << "Company BMW :\t" << endl;
					BMW.Output();
					cout << "Do you want to buy this car? ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations car is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 2:
					cout << "Company Lanos :\t" << endl;
					Lanos.Output();
					cout << "Do you want to buy this car? ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations car is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 3:
					cout << "Company Ford :\t" << endl;
					Ford.Output();
					cout << "Do you want to buy this car ? " << endl << "Enter \n 1->Buy \n 2->Back to menu" << endl;
					cin >> Buy;
					cout << endl;
					if (Buy == 1) {
						cout << "Congratilations car is Your" << endl;
						cout << endl;
					}
					else if (Buy == 2) {



						break;
					}
					break;
				case 4:
					cout << "Warninng :\t" << endl;
					Warninng();
					break;
				case 5:
					cout << "Exit :\t" << endl;
					exit(EXIT_SUCCESS);
					break;
				default:
					cout << "Error.Please Enter valuer 1-5\t" << endl;
					exit(EXIT_FAILURE);
				}
				break;
			case 3:
				exit(EXIT_SUCCESS);
				break;
			default:
				cout << "Error.Please Enter valuer 1-5\t" << endl;
				exit(EXIT_FAILURE);
			}
		}
		else {
			cout << "error, pleas return" << endl;
		}
	}
	system("pause");
	return 0;
}