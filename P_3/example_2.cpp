#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    number_tram:
    cout << "Enter the number of the Kyiv tram: ";
    cin >> a;
switch (a)
{
case 8: cout << " initial stop : Art. Poznyaki \n last stop: Art. Lisova"; break;

case 17: cout << " initial stop : Art. Jordanian \n last stop: Kurenivsky Park"; break;

case 18: cout << " initial stop : Pushcha-Vodytsia forest \n last stop: St. Jordanian"; break;

case 22: cout << " initial stop : St. Starovozalna \n last stop: Art. m. Contract Square (T18)"; break;

case 23: cout << " initial stop : Alisher Navoi Ave \n last stop: St. Makarenko"; break;

case 28: cout << " initial stop : St. Myloslavska \n last stop: Art. Lisova"; break;

case 29: cout << " initial stop : Art. Boryspilska \n last stop: Art. Lisova"; break;

case 32: cout << " initial stop : Art. Art. Lisova \n last stop: St. Makarenko"; break;

case 33: cout << " initial stop : St. Serzh Lifarya \n last stop: St. Makarenko"; break;

case 35: cout << " initial stop : St. Serzh Lifarya \n last stop: Art. Lisova"; break;

default: cout << "The tram number you dialed is not in the list. Try writing another one The tram number you dialed is not in the list. Try writing another one \n"; goto number_tram;
}
}