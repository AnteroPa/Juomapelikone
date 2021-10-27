#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
using namespace std;


//TERVETULORUUTU
void s��nt�ruutu(string seuraava)
{
	system("cls");
	cout << "\n";
	cout << "Tervetuloa pelaaman Hitler-juomapeli�! Peli toimii n�in:\n\n";
	cout << "Kukin pelaaja nostaa vuorollaan kortin, kortin numero m��ritt�� suoritettavan teht�v�n.\n Teht�v� on suoritettava. Vikisem�tt�.";
	cout << "\n\nKORTIT:\n";
	cout << "[1] Juo Kolme. Kortin nostanut pelaaja juo kolme huikkaa.\n";
	cout << "[2] Anna kolme.  Kortin nostanut pelaaja m��r�� p��tt�m�lleen pelaajalle kolme huikkaa.\n";
	cout << "[3] 1, 2, 3... Kortin nostanut pelaaja juo yhden huikan, h�nest� seuraava kaksi, h�nest� seuraava kolme jne...\n";
	cout << "[4], [5] HITLER. Pelaajat huutavat Hitler mahdollisimman nopeasti ja nostavat k�tens� iloiseen tervehdykseen. Viimeisen juo kolme huikkaa.\n";
	cout << "[6] Riimi. Kortin nostanut pelaaja keksii sanan. Seuraava pelaaja keksii sen kanssa rimmaavan sanan, t�t� jatketaan kunnes riimi� ei en�� keksit�. Ep�luova pelaaja juo kolme.\n";
	cout << "[7] Vesiputous. Pelaajat alkavat juoda samaan aikaan, lopettaa saa vasta, kuin pelaajaa N edelt�v� pelaaja on lopettanut. Kortin nostanut pelaaja saa lopettaa ensimm�isen�.\n";
	cout << "[8] Kategoria. Kortin nostanut pelaaja keksii kategorian, esimerkiksi automerkit. Pelaaja, joka ei en�� keksi automerkki�, juo kolme huikkaa.\n";
	cout << "[9] Kortin nostanut pelaaja keksii s��nn�n. Kun seuraava s��nt�kortti nostetaan, voidaan aiempi s��nt� pit�� voimassa tai kumota ja keksit��n tilalle uusi.\n";
	cout << "[10] Kysymysmestari. Kortin nostamasta pelaajasta tulee uusi kysymysmestari. Jos muut pelaajat vastaavat Kysymysmestarin esitt�m��n kysymykseen, juovat he kolme huikkaa.\n";
	cout << "[11] Taukokortti. Pidet��n 5 min tauko. Tauon voi my�s j�tt�� pit�m�tt�, jos pelaajat niin tahtovat.\n";
	cout << "[12] Huora. Kortin nostamasta pelaajasta tulee uusi Huora. Aina, kun toinen pelaaja juo, juo Huora saman verran.\n";
	cout << "[13] Tarina. Kortin nostanut pelaaja keksii sanan. T�st� sanasta alkaa tarina. Pelaajat jatkavat vuorollaan tarinaa yhdell� sanalla. Jos pelaaja ei muista koko tarinaa, h�n juo kolme.\n";
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
	int ykk�nen = 0;
	int kakkonen = 0;
	int kolmonen = 0;
	int nelj� = 0;
	int viisi = 0;
	int kuusi = 0;
	int seitsem�n = 0;
	int kahdeksan = 0;
	int yhdeks�n = 0;
	int kymmenen = 0;
	int j�tk� = 0;
	int akka = 0;
	int kunkku = 0;
	int pelaajakerroin = 1;
	char uudestaan;
	char pelaajam��r�;
	char s��nt�[100];
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
	//Pelaajien m��r�
	do
	{
	system("cls");
	cout << "Tervetuloa juomapelikoneeseen!\n";
	cout << "Kuinka monta pelaajaa? (1-10) \n";
	cin >> pelaajam��r�;
	switch (pelaajam��r�)
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

	s��nt�ruutu(seuraava);


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
			cout << "S��nt�: " << s��nt� << endl;
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
				ykk�nen = ykk�nen + 1;
				if (ykk�nen < 5)
				{
					kortit = kortit + 1;
					pelaajakerroin = pelaajakerroin + 1;

					cout << " " << endl;
					cout << "[1] Juo kolme. " << ykk�nen << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
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
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
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
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
					cin >> seuraava;
				}
				break;

			case 4:
				nelj� = nelj� + 1;
				if (nelj� < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[4] HITLER! " << nelj� << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
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
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
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
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
					cin >> seuraava;
				}
				break;
			case 7:
				seitsem�n = seitsem�n + 1;
				if (seitsem�n < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[7] Vesiputous " << seitsem�n << "/4" << endl;
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
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
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
					cin >> seuraava;
				}
				break;
			case 9:
				yhdeks�n = yhdeks�n + 1;
				if (yhdeks�n < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[9] Uusi s��nt�, valmiina lis��m��n? " << yhdeks�n << "/4" << endl;
					cin.getline(s��nt�, 100);
				}
				break;
			
			case 10:
				kymmenen = kymmenen + 1;
				if (kymmenen < 5)
				{
					
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[10] Kysymysmestari " << kymmenen << "/4" << endl;
				
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
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
				j�tk� = j�tk� + 1;
				if (j�tk� < 5)
				{
					pelaajakerroin = pelaajakerroin + 1;
					kortit = kortit + 1;
					cout << " " << endl;
					cout << "[11] Tauko " << j�tk� << "/4" << endl;
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
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
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
					cout << "Jatketaan. 1 = seuraava kortti. 2 = s��nt�ruutu." << endl;
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