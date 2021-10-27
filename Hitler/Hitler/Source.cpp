#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;





int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	setlocale(LC_ALL, "");

	srand(time(0));
	int kortti;
	int a;
	int b;
	int ykkönen = 0;
	int kakkonen = 0;
	int kolmonen = 0;
	int neljä = 0;
	int viisi = 0;
	int kuusi = 0;
	int seitsemän = 0;
	int kahdeksan = 0;
	int yhdeksän = 0;
	int kymmenen = 0;
	int jätkä = 0;
	int akka = 0;
	int kunkku = 0;
	int kortit = 0;
	char joo;
	int pelaajat;
	string kysymysmestari;
	string huora;
	string sääntö;
	string pelaaja1;
	string pelaaja2;
	string pelaaja3;
	string pelaaja4;
	string pelaaja5;
	string pelaaja6;
	string pelaaja7;
	string pelaaja8;
	string pelaaja9;
	string pelaaja10;
	int pelaajakerroin;
	//Tervetuloa
	cout << "Hitler-juomapeli!  Kuinka monta pelaajaa? (1-10) \n";
	cin >> pelaajat;
	pelaajakerroin = 1;


			//pelaajien nimet
			switch (pelaajat)
			{
			case 1:
			{
				cout << "Anna pelaajan 1 nimi > " << endl;
				cin >> pelaaja1;
				break;
			}
			case 2:
			{	cout << "Anna pelaajan 1 nimi > " << endl;
			cin >> pelaaja1;
			cout << "Anna pelaajan 2 nimi > " << endl;
			cin >> pelaaja2;
			break;
			}
			case 3:
			{
				cout << "Anna pelaajan 1 nimi > " << endl;
				cin >> pelaaja1;
				cout << "Anna pelaajan 2 nimi > " << endl;
				cin >> pelaaja2;
				cout << "Anna pelaajan 3 nimi > " << endl;
				cin >> pelaaja3;
				break;
			}
			case 4:
			{cout << "Anna pelaajan 1 nimi > " << endl;
			cin >> pelaaja1;
			cout << "Anna pelaajan 2 nimi > " << endl;
			cin >> pelaaja2;
			cout << "Anna pelaajan 3 nimi > " << endl;
			cin >> pelaaja3;
			cout << "Anna pelaajan 4 nimi > " << endl;
			cin >> pelaaja4;
			break;
			}
			case 5:
			{
				cout << "Anna pelaajan 1 nimi > " << endl;
				cin >> pelaaja1;
				cout << "Anna pelaajan 2 nimi > " << endl;
				cin >> pelaaja2;
				cout << "Anna pelaajan 3 nimi > " << endl;
				cin >> pelaaja3;
				cout << "Anna pelaajan 4 nimi > " << endl;
				cin >> pelaaja4;
				cout << "Anna pelaajan 5 nimi > " << endl;
				cin >> pelaaja5;
				break;
			}
			case 6:
			{
				cout << "Anna pelaajan 1 nimi > " << endl;
				cin >> pelaaja1;
				cout << "Anna pelaajan 2 nimi > " << endl;
				cin >> pelaaja2;
				cout << "Anna pelaajan 3 nimi > " << endl;
				cin >> pelaaja3;
				cout << "Anna pelaajan 4 nimi > " << endl;
				cin >> pelaaja4;
				cout << "Anna pelaajan 5 nimi > " << endl;
				cin >> pelaaja5;
				cout << "Anna pelaajan 6 nimi > " << endl;
				cin >> pelaaja6;
				break;
			}
			case 7:
			{	cout << "Anna pelaajan 1 nimi > " << endl;
			cin >> pelaaja1;
			cout << "Anna pelaajan 2 nimi > " << endl;
			cin >> pelaaja2;
			cout << "Anna pelaajan 3 nimi > " << endl;
			cin >> pelaaja3;
			cout << "Anna pelaajan 4 nimi > " << endl;
			cin >> pelaaja4;
			cout << "Anna pelaajan 5 nimi > " << endl;
			cin >> pelaaja5;
			cout << "Anna pelaajan 6 nimi > " << endl;
			cin >> pelaaja6;
			cout << "Anna pelaajan 7 nimi > " << endl;
			cin >> pelaaja7;
			break;
			}
			case 8:
			{
				cout << "Anna pelaajan 1 nimi > " << endl;
				cin >> pelaaja1;
				cout << "Anna pelaajan 2 nimi > " << endl;
				cin >> pelaaja2;
				cout << "Anna pelaajan 3 nimi > " << endl;
				cin >> pelaaja3;
				cout << "Anna pelaajan 4 nimi > " << endl;
				cin >> pelaaja4;
				cout << "Anna pelaajan 5 nimi > " << endl;
				cin >> pelaaja5;
				cout << "Anna pelaajan 6 nimi > " << endl;
				cin >> pelaaja6;
				cout << "Anna pelaajan 7 nimi > " << endl;
				cin >> pelaaja7;
				cout << "Anna pelaajan 8 nimi > " << endl;
				cin >> pelaaja8;
				break;

			}
			case 9:
			{
				cout << "Anna pelaajan 1 nimi > " << endl;
				cin >> pelaaja1;
				cout << "Anna pelaajan 2 nimi > " << endl;
				cin >> pelaaja2;
				cout << "Anna pelaajan 3 nimi > " << endl;
				cin >> pelaaja3;
				cout << "Anna pelaajan 4 nimi > " << endl;
				cin >> pelaaja4;
				cout << "Anna pelaajan 5 nimi > " << endl;
				cin >> pelaaja5;
				cout << "Anna pelaajan 6 nimi > " << endl;
				cin >> pelaaja6;
				cout << "Anna pelaajan 7 nimi > " << endl;
				cin >> pelaaja7;
				cout << "Anna pelaajan 8 nimi > " << endl;
				cin >> pelaaja8;
				cout << "Anna pelaajan 9 nimi > " << endl;
				cin >> pelaaja9;
				break;
			}
			case 10:
			{
				cout << "Anna pelaajan 1 nimi > " << endl;
				cin >> pelaaja1;
				cout << "Anna pelaajan 2 nimi > " << endl;
				cin >> pelaaja2;
				cout << "Anna pelaajan 3 nimi > " << endl;
				cin >> pelaaja3;
				cout << "Anna pelaajan 4 nimi > " << endl;
				cin >> pelaaja4;
				cout << "Anna pelaajan 5 nimi > " << endl;
				cin >> pelaaja5;
				cout << "Anna pelaajan 6 nimi > " << endl;
				cin >> pelaaja6;
				cout << "Anna pelaajan 7 nimi > " << endl;
				cin >> pelaaja7;
				cout << "Anna pelaajan 8 nimi > " << endl;
				cin >> pelaaja8;
				cout << "Anna pelaajan 9 nimi > " << endl;
				cin >> pelaaja9;
				cout << "Anna pelaajan 10 nimi > " << endl;
				cin >> pelaaja10;
				break;
			}
			default:
			{
				cout << "Miksi??";
			}

			}



	
	//pelilooppi
			
			do
			{
				system("cls");
				kortit = kortit + 1;
				kortti = rand() % 13 + 1;



				if (pelaajakerroin == 1 < pelaajat)
				{
					pelaajakerroin = pelaajakerroin + 1;
					cout << pelaaja1 << endl;
				}
				else if (pelaajakerroin == 2 < pelaajat)
				{
					pelaajakerroin = pelaajakerroin + 1;
					cout << pelaaja2 << endl;
				}
				else if (pelaajakerroin == 3 < pelaajat)
				{
					pelaajakerroin = pelaajakerroin + 1;
					cout << pelaaja3 << endl;
				}
				else if (pelaajakerroin == 4 < pelaajat)
				{
					pelaajakerroin = pelaajakerroin + 1;
					cout << pelaaja4 << endl;
				}
				else if (pelaajakerroin == 5 < pelaajat)
				{
					pelaajakerroin = pelaajakerroin + 1;
					cout << pelaaja5 << endl;
				}
				else if (pelaajakerroin == 6 < pelaajat)
				{
					pelaajakerroin = pelaajakerroin + 1;
					cout << pelaaja6 << endl;
				}
				else if (pelaajakerroin == 7 < pelaajat)
				{
					pelaajakerroin = pelaajakerroin + 1;
					cout << pelaaja7 << endl;
				}
				else if (pelaajakerroin == 8 < pelaajat)
				{
					pelaajakerroin = pelaajakerroin + 1;
					cout << pelaaja8 << endl;
				}
				else if (pelaajakerroin == 9 < pelaajat)
				{
					pelaajakerroin = pelaajakerroin + 1;
					cout << pelaaja9 << endl;
				}
				else if (pelaajakerroin == 10)
				{
					pelaajakerroin = pelaajakerroin + 1;

					cout << pelaaja10 << endl;
				}
				else if (pelaajakerroin > pelaajat)
				{
					pelaajakerroin = 1;
					cout << pelaaja1 << endl;
				}


				



				switch (kortti)
				{
				case 1:
					ykkönen = ykkönen + 1;
					if (ykkönen < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;

						cout << " " << endl;
						cout << "Juo kolme. " << ykkönen << "/4" << endl;

						cin >> joo;
					}
					break;
				case 2:
					kakkonen = kakkonen + 1;
					if (kakkonen < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "Anna kolme " << kakkonen << "/4" << endl;

						cin >> joo;
					}
					break;
				case 3:
					kolmonen = kolmonen + 1;
					if (kolmonen < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "1 2 3...  " << kolmonen << "/4" << endl;

						cin >> joo;
					}
					break;
				case 4:
					neljä = neljä + 1;
					if (neljä < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "HITLER! " << neljä << "/4" << endl;

						cin >> joo;
					}
				break;	case 5:
					viisi = viisi + 1;
					if (viisi < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "HITLER! " << viisi << "/4" << endl;

						cin >> joo;
					}
					break;
				case 6:
					kuusi = kuusi + 1;
					if (kuusi < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "Most likely " << kuusi << "/4" << endl;

						cin >> joo;
					}
					break;
				case 7:
					seitsemän = seitsemän + 1;
					if (seitsemän < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "Vesiputous " << seitsemän << "/4" << endl;

						cin >> joo;
					}
					break;
				case 8:
					kahdeksan = kahdeksan + 1;
					if (kahdeksan < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "Kategoria " << kahdeksan << "/4" << endl;

						cin >> joo;
					}
					break;
				case 9:
					yhdeksän = yhdeksän + 1;
					if (yhdeksän < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "Uusi sääntö: " << yhdeksän << "/4" << endl;

						cin >> sääntö;
					}
					break;
				case 10:
					kymmenen = kymmenen + 1;
					if (kymmenen < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "Kysymysmestari " << kymmenen << "/4" << endl;

						cin >> kysymysmestari;
					}
					break;
				case 11:
					jätkä = jätkä + 1;
					if (jätkä < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "Tauko " << jätkä << "/4" << endl;

						cin >> joo;
					}
					break;
				case 12:
					akka = akka + 1;
					if (akka < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "HUORA " << akka << "/4" << endl;

						cin >> huora;
					}
					break;
				case 13:
					kunkku = kunkku + 1;
					if (kunkku < 5)
					{

						cout << "Kysymysmestari:  " << kysymysmestari << endl;
						cout << "HUORA:  " << huora << endl;
						cout << "Sääntö: " << endl;
						cout << "Pelatut kortit " << kortit << "/64" << endl;
						cout << " " << endl;
						cout << "Tarina " << kunkku << "/4" << endl;

						cin >> joo;
					}
					break;
				default:
					cout << "\n ";
				}


			} while (kortit < 65);

	//loppu
	cout << "loppu!!!!!!!!";
	return 0;

}







