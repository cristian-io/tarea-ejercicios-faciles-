EJERCICIO 1

#include <iostream>

using namespace std;

int main() {
    double cm, inches;
    cout << "Ingresa la longitud en centímetros: ";
    cin >> cm;
    inches = cm / 2.54;
    cout << cm << " centímetros es igual a " << inches << " pulgadas." << endl;
    return 0;
}

EJERCICIO 2

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

EJERCICIO 3

#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "\nEl numero es par" << endl;
    } else {
        cout << "\nEl numero es impar" << endl;
    }
    return 0;
}

EJERCICIO 4

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;
    if (isPrime(num)) {
        cout << num << " es un numero primo" << endl;
    } else {
        cout << num << " no es un numero primo" << endl;
    }
    return 0;
}

EJERCICIO 5 

#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;
    cout << "Ingresa un numero: ";
    cin >> num;
    if (num < 0) {
        cout << "Error! El factorial de un número negativo no existe.";
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "El factorial de " << num << " es " << factorial;
    }
    return 0;
}

EJERCICIO 6

#include <iostream>
using namespace std;

int countSheep(bool arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    bool arr[] = {true, false, true, true, false, true, false, true, false, true,
                  true, false, true, false, false, true, true, true, true, false, true, true, true, false, true, true};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "El número de ovejas presentes en el array es: " << countSheep(arr, n) << endl;
    return 0;
}

EJERCICIO 7 

#include <iostream>
#include <cmath>
using namespace std;

double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    double base = 2.0;
    double exponent = 3.0;
    cout << base << " elevado a la " << exponent << " es igual a " << power(base, exponent) << endl;
    return 0;
}


