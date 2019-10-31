
#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	double wynik, stopnie, alfa, x, v0, y0;
	const double G = 9.81;

	cout << " wprowadz kat alfa w stopniach: ";
	cin >> stopnie;

	cout << "\n" <<" wprowadz przebyta  odleglosc x  w poziomie: ";
	cin >> x;

	cout << "\n" << " wprowadz predkosc poczatkowa, podawana w jednostce km/h: ";
	cin >> v0;

	v0 = v0 * 1000.0 / 3600;

	cout << "\n" << " wprowadz wysokosc, z ktorej pilka zostaje rzucona, podawana w metrach: ";
	cin >> y0;

	alfa = stopnie * M_PI / 180.0;


	wynik = x * tan(alfa) - (1.0 / 2 * v0 * v0) * (G * x * x / cos(alfa) * cos(alfa)) + y0;

	cout << "\n" << "wysokosc, na ktorej znajduje sie pilka  po przebyciu odleglosci  w poziomie to " << wynik;
}