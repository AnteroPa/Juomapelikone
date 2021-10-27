#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
using namespace std;


//TERVETULORUUTU
void sääntöruutu(string seuraava)
{
	system("cls");
	cout << "\n";
	cout << "Tervetuloa pelaaman Hitler-juomapeliä! Peli toimii näin:\n\n";
	cout << "Kukin pelaaja nostaa vuorollaan kortin, kortin numero määrittää suoritettavan tehtävän.\n Tehtävä on suoritettava. Vikisemättä.";
	cout << "\n\nKORTIT:\n";
	cout << "[1] Juo Kolme. Kortin nostanut pelaaja juo kolme huikkaa.\n";
	cout << "[2] Anna kolme.  Kortin nostanut pelaaja määrää päättämälleen pelaajalle kolme huikkaa.\n";
	cout << "[3] 1, 2, 3... Kortin nostanut pelaaja juo yhden huikan, hänestä seuraava kaksi, hänestä seuraava kolme jne...\n";
	cout << "[4], [5] HITLER. Pelaajat huutavat Hitler mahdollisimman nopeasti ja nostavat kätensä iloiseen tervehdykseen. Viimeisen juo kolme huikkaa.\n";
	cout << "[6] Riimi. Kortin nostanut pelaaja keksii sanan. Seuraava pelaaja keksii sen kanssa rimmaavan sanan, tätä jatketaan kunnes riimiä ei enää keksitä. Epäluova pelaaja juo kolme.\n";
	cout << "[7] Vesiputous. Pelaajat alkavat juoda samaan aikaan, lopettaa saa vasta, kuin pelaajaa N edeltävä pelaaja on lopettanut. Kortin nostanut pelaaja saa lopettaa ensimmäisenä.\n";
	cout << "[8] Kategoria. Kortin nostanut pelaaja keksii kategorian, esimerkiksi automerkit. Pelaaja, joka ei enää keksi automerkkiä, juo kolme huikkaa.\n";
	cout << "[9] Kortin nostanut pelaaja keksii säännön. Kun seuraava sääntökortti nostetaan, voidaan aiempi sääntö pitää voimassa tai kumota ja keksitään tilalle uusi.\n";
	cout << "[10] Kysymysmestari. Kortin nostamasta pelaajasta tulee uusi kysymysmestari. Jos muut pelaajat vastaavat Kysymysmestarin esittämään kysymykseen, juovat he kolme huikkaa.\n";
	cout << "[11] Taukokortti. Pidetään 5 min tauko. Tauon voi myös jättää pitämättä, jos pelaajat niin tahtovat.\n";
	cout << "[12] Huora. Kortin nostamasta pelaajasta tulee uusi Huora. Aina, kun toinen pelaaja juo, juo Huora saman verran.\n";
	cout << "[13] Tarina. Kortin nostanut pelaaja keksii sanan. Tästä sanasta alkaa tarina. Pelaajat jatkavat vuorollaan tarinaa yhdellä sanalla. Jos pelaaja ei muista koko tarinaa, hän juo kolme.\n";
	cout << "OK? > ";
	cin >> seuraava;
	cout << "\n";

};

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	setlocale(LC_ALL, "");

	srand(time(0));
	int kortti;
	int a;
	int b;
	int kortit = 0;
	int pelaajat = 0;
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
	int pelaajakerroin = 1;
	char uudestaan;
	char pelaajamäärä;
	char sääntö[100];
	string joo;
	string seuraava;
	string kysymysmestari;
	string huora;
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


	//TERVETULOA
	//________________________________________________________________________________________________
	//Pelaajien määrä
	do
	{
	system("cls");
	cout << "Tervetuloa juomapelikoneeseen!\n";
	cout << "Kuinka monta pelaajaa? (1-10) \n";
	cin >> pelaajamäärä;
	switch (pelaajamäärä)
	{
	case '1':
		pelaajat = 1;
		break;
	case '2':
		pelaajat = 2;
		break;
	case '3':
		pelaajat = 3;
		break;
	case '4':
		pelaajat = 4;
		break;
	case '5':
		pelaajat = 5;
		break;
	case '6':
		pelaajat = 6;
		break;
	case '7':
		pelaajat = 7;
		break;
	case '8':
		pelaajat = 8;
		break;
	case '9':
		pelaajat = 9;
		break;
	case '10':
		pelaajat = 10;
		break;
	default:
		pelaajat = 11;
		break;
	}
}while (pelaajat > 10);

	//Pelaajien nimet
	switch (pelaajat)
	{
	case 1:
	{
		cout << "\nAnna pelaajan 1 nimi > ";
		cin >> pelaaja1;
		break;
	}
	case 2:
	{
		cout << "\nAnna pelaajan 1 nimi > ";
	cin >> pelaaja1;
	cout << "\nAnna pelaajan 2 nimi > ";
	cin >> pelaaja2;
	break;
	}
	case 3:
	{
		cout << "\nAnna pelaajan 1 nimi > ";
		cin >> pelaaja1;
		cout << "\nAnna pelaajan 2 nimi > ";
		cin >> pelaaja2;
		cout << "\nAnna pelaajan 3 nimi > ";
		cin >> pelaaja3;
		break;
	}
	case 4:
	{cout << "\nAnna pelaajan 1 nimi > ";
	cin >> pelaaja1;
	cout << "\nAnna pelaajan 2 nimi > ";
	cin >> pelaaja2;
	cout << "\nAnna pelaajan 3 nimi > ";
	cin >> pelaaja3;
	cout << "\nAnna pelaajan 4 nimi > ";
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
		cout << "Anna pelaajan 10 nimi > ";
		cin >> pelaaja10;
		break;
	}
	default:
	{
		cout << "Miksi??";
	}

	}

	//PELIN VALINTA

	sääntöruutu(seuraava);


	//_______________________________________________________________________________
		//Peli HITLER
		do
		{
			system("cls");
			kortti = rand() % 13 + 1;
			kortti = 9;
			//Perustietoja kierrokselle
			cout << "Kysymysmestari:  " << kysymysmestari << endl;
			cout << "HUORA:  " << huora << endl;
			cout << "Sääntö: " << sääntö << endl;
			cout << "Pelatut kortit " << kortit << "/52" << endl;
			cout << " " << endl;






			//pelaajan nimen tulostus
			
			if (pelaajakerroin > pelaajat)
			{
				pelaajakerroin = 1;
			};
			cout << "___________\n";
			cout << "PELAAJA: ";
			switch (pelaajakerroin)
			{
			case 1:
				cout << pelaaja1;
				break;
			case 2:
				cout << pelaaja2;
				break;
			case 3:
				cout << pelaaja3;
				break;
			case 4:
				cout << pelaaja4;
				break;
			case 5:
				cout << pelaaja5;
				break;
			case 6:
				cout << pelaaja6;
				break;
			case 7:
				cout << pelaaja7;
				break;
			case 8:
				cout << pelaaja8;
				break;
			case 9:
				cout << pelaaja9;
				break;
			case 10:
				cout << pelaaja10;
				break;

			}
			cout << "\n___________\n";
		
			//kortin tulostus
			cout << "KORTTI: ";
			switch (kortti)
			{
			case 1:
				ykkönen = ykkönen + 1;
				if (ykkönen < 5)
				{
					kortit = kortit + 1;
					pelaajakerroin = pelaajakerroin + 1;

					cout << " " << endl;
					cout << "[1] Juo kolme. " << ykkönen << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;

				}
				break;

			case 2:
				kakkonen = kakkonen + 1;
				if (kakkonen < 5)
				{

					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[2] Anna kolme " << kakkonen << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
				}
				break;
			case 3:
				kolmonen = kolmonen + 1;
				if (kolmonen < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[3] 1 2 3...  " << kolmonen << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
				}
				break;

			case 4:
				neljä = neljä + 1;
				if (neljä < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[4] HITLER! " << neljä << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
				}
				break;

			case 5:
				viisi = viisi + 1;
				if (viisi < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[5] HITLER! " << viisi << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
				}
				break;

			case 6:
				kuusi = kuusi + 1;
				if (kuusi < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[6] Most likely " << kuusi << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
				}
				break;
			case 7:
				seitsemän = seitsemän + 1;
				if (seitsemän < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[7] Vesiputous " << seitsemän << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
				}
				break;

			case 8:
				kahdeksan = kahdeksan + 1;
				if (kahdeksan < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[8] Kategoria " << kahdeksan << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
				}
				break;
			case 9:
				yhdeksän = yhdeksän + 1;
				if (yhdeksän < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[9] Uusi sääntö, valmiina lisäämään? " << yhdeksän << "/4" << endl;
					cin.getline(sääntö, 100);
				}
				break;
			
			case 10:
				kymmenen = kymmenen + 1;
				if (kymmenen < 5)
				{
					
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[10] Kysymysmestari " << kymmenen << "/4" << endl;
				
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
					switch (pelaajakerroin) {
					case 1:
					{kysymysmestari = pelaaja1;
					break; }
					case 2:
					{kysymysmestari = pelaaja2;
					break; }
					case 3:
					{kysymysmestari = pelaaja3;
					break; }
					case 4:
					{kysymysmestari = pelaaja4;
					break; }
					case 5:
					{kysymysmestari = pelaaja5;
					break; }
					case 6:
					{kysymysmestari = pelaaja6;
					break; }
					case 7:
					{kysymysmestari = pelaaja7;
					break; }
					case 8:
					{kysymysmestari = pelaaja8;
					break; }
					case 9:
					{kysymysmestari = pelaaja9;
					break; }
					case 10:
					{kysymysmestari = pelaaja10;
					break; }
					default:
					{break; }
					}
					pelaajakerroin = pelaajakerroin + 1;
				}
				break;
			case 11:
				jätkä = jätkä + 1;
				if (jätkä < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[11] Tauko " << jätkä << "/4" << endl;
					cout << "Jatketaan. " << endl;
					cin >> seuraava;
				}
					break;
			case 12:
				akka = akka + 1;
				if (akka < 5)
				{
					
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[12] HUORA " << akka << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
					switch (pelaajakerroin) {
					case 1:
					{huora = pelaaja1;
					break; }
					case 2:
					{huora = pelaaja2;
					break; }
					case 3:
					{huora = pelaaja3;
					break; }
					case 4:
					{huora = pelaaja4;
					break; }
					case 5:
					{huora = pelaaja5;
					break; }
					case 6:
					{huora = pelaaja6;
					break; }
					case 7:
					{huora = pelaaja7;
					break; }
					case 8:
					{huora = pelaaja8;
					break; }
					case 9:
					{huora = pelaaja9;
					break; }
					case 10:
					{huora = pelaaja10;
					break; }
					default:
					{break; }
					}
					pelaajakerroin = pelaajakerroin + 1;
				}
				break;
			case 13:
				kunkku = kunkku + 1;
				if (kunkku < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[13] Tarina " << kunkku << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = sääntöruutu." << endl;
					cin >> seuraava;
				}
				break;
			default:
				cout << "hajosin ";
			}


			//TULOSRUUTU
			if (kortit == 52)
			{
				system("cls");
				cout << "\n___________\n";
				cout << "Selvisitte";
				cout << "\n___________\n";
				return 0;
			};
		} while (kortit < 53);
}	