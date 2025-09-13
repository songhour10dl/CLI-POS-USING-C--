#include<iostream>
#include<vector>
#include<iomanip>  
#include<cstdlib> 
#include<limits>  

using namespace std;

const unsigned T = 65000, GlovePrice = 4000; // Renamed G to GlovePrice to avoid conflict
const double V = 0.1;
int a, b = 0, c, d = 0, e, f, g, h, i;

void A(), B(), C(), D(), E(), F(), G_function(), H(), I();
void J() { system("color 0B"); system("cls"); cout << "____________________\n|1.Sell            |\n____________________\n|2.Price/Discount  |\n____________________\n|3.Statistics      |\n____________________\n|4.Exit            |\n____________________\nInput:"; }
void K() { system("cls"); system("color 0F"); cout << setw(20) << "Snow World\nVisitors: "; cin >> a; b += a; while (cin.fail()) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << "Enter valid numbers: "; cin >> a; } F(); for (int i = 0; i < a; i++) { cout << setw(10) << "Age: "; cin >> c; while (cin.fail()) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << setw(10) << "Age: "; cin >> c; } if (a == 3) { if (c <= 6) { double dp = T * 1; e = T - dp; } else if (c <= 12) { double dp = T * 0.5; e = T - dp; } else if (c <= 26) { double dp = T * 0.1; e = T - dp; } else if (c >= 40) { double dp = T * 0.25; e = T - dp; } else { double dp = T * 0; e = T - dp; } cout << setw(10) << "Price: " << e << " KHR\n"; } else { double dp = T * 0; e = T - dp; cout << setw(10) << "Price: " << e << " KHR\n"; } f += e; g = (f + d) * V; h = f + g; } }
void L() { system("cls"); system("color 0B"); cout << "Price List\nTicket=65000\nGlove=4000\nDiscount:\n1-6:100%\n7-12:50%\n13-26:10%\n27-39:0%\n40+:25%\n"; }
void M() { system("cls"); system("color 0E"); cout << "Statistics\nVisitors: "; if (b > 0) { for (int i = 1; i <= b; i++) { cout << "*"; } cout << " (" << b << ")\n"; } else if (b == 0) { cout << "no data\n"; } cout << "Gloves: "; if (d > 0) { for (int i = 1; i <= d; i++) { cout << "*"; } cout << " (" << d << ")\n"; } else if (d == 0) { cout << "no data\n"; } I(); }
void F() { cout << "Need gloves? (y/n)"; char x; while (cin.fail()) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << "Need gloves? (y/n)"; cin >> x; } cin >> x; if (x == 'y' || x == 'Y') { cout << "How many gloves?: "; cin >> d; cout << "Gloves: " << d << "\n"; } else { cout << "No gloves\n"; } d = d * GlovePrice; } // Changed G to GlovePrice
void G_function() { cout << "ASCII ART\n.##..\n+:**.+.\n.: :+%%-\n.:%%:**=.\n*-%:..\n%+@-.:"; } // Renamed G to G_function
void E() { system("cls"); cout << "RECEIPT\nTickets: " << a << "\nGloves: " << d << " for " << d << " KHR\nBefore VAT: " << f + d << " KHR\nVAT: 10%\nAfter VAT: " << h << " KHR\nThank you!\n"; }

int main() { int x; do { J(); cin >> x; switch (x) { case 1: K(); E(); system("pause"); break; case 2: L(); system("pause"); break; case 3: M(); system("pause"); break; case 4: exit(0); break; default: cout << "Invalid\n"; break; } } while (x != 4); return 0; }
