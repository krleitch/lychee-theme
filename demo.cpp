#include <iostream>
#include <string>

// Fizzbuzz
int main ()
{
	using namespace std;
	for(auto &e : "The vexxy. Alp? He be testy `g0d-dreddy.`! Hold	021 par at "
				"oldy baddy. Eldox y0na, arti$t? Petzy ty~"s) {
		static char *a = &e;
		switch(e&03) {
			case 0: std::cout << (&e-&a[-1]) << "\n"; break;
			case 1: std::cout << "FIZZ\n";            break;
			case 2: std::cout << "BUZZ\n";            break;
			case 3: std::cout << "FIZZBUZZ\n";        break;
		}
	}
}














