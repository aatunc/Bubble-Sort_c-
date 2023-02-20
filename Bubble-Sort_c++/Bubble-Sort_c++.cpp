// Bubble-Sort_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int main()
{
	int a[10], i, zw, change;

	cout << "unsotiert:         ";
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << ' ';

	}
	do
	{
		cout << "\nZwischenschritt: ";
		change = 0;
		for (i=0; i<9; i++)
			if (a[i] > a[i + 1])
			{
				zw = a[i]; a[i] = a[i + 1]; a[i + 1] = zw;
				change = 1;
			}
		for (i = 0; i < 10; i++) cout << a[i] << ' ';
	} while (change);
	{

	}
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
