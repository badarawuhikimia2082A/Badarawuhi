%%writefile molekul-butana.cpp

#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

int main(){
    // deklarasi variabel
    float pi = 3.14;
  
    // deklarasi molekul butana
    float C1x[216], C1y[216], C1z[216];
    float C2x[216], C2y[216], C2z[216];
    float C3x[216], C3y[216], C3z[216];
    float C4x[216], C4y[216], C4z[216];
    float H1x[216], H1y[216], H1z[216];
    float H2x[216], H2y[216], H2z[216];
    float H3x[216], H3y[216], H3z[216];
    float H4x[216], H4y[216], H4z[216];
    float H5x[216], H5y[216], H5z[216];
    float H6x[216], H6y[216], H6z[216];
    float H7x[216], H7y[216], H7z[216];
    float H8x[216], H8y[216], H8z[216];
    float H9x[216], H9y[216], H9z[216];
    float H10x[216], H10y[216], H10z[216];
    
    // masukan nilai untuk setiap variabel C4H10

    C1x = - sin (109.471*pi/180) * 3.7545;
    C1y = 0.0;
    C1z = cos (109.471*pi/180) * 3.7545;
    
    C2x = - cos (35.2645*pi/180) * 0.77;
    C2y = 0.0;
    C2z = - sin (35.2645*pi/180) * 0.77;

    C3x = - C2x;
    C3y = 0.0;
    C3z = - C2z

    C4x = - C1x
    C4y = 0.0;
    C4z = - C1z
    
    H1x = 0.0;
    H1y = sin (35.25*pi/180) * 8.596;
    H1z = cos (35.25*pi/180) * 8.596;

    H2x = 0.0;
    H2y = - H1y;
    H2z = H1z;

    H3x = - sin (109.471*pi/180) * 12.340;
    H3y = 0.0;
    H3z = - cos (109.471*pi/180) * 12.340;

    H4x = 0.0;
    H4y = cos (35.2645*pi/180) * 2.341;
    H4z = - sin (35.2645*pi/180) * 2.341;

    H5x = 0.0;
    H5y = -H4y;
    H5z = H4z;

    H6x = 0.0;
    H6y = H4y;
    H6z = -H4z;

    H7x = 0.0;
    H7y = -H4y;
    H7z = -H4z;

    H8x = 0.0;
    H8y =  H1y;
    H8z = - H1z;

    H9x = 0.0;
    H9y = H2y;
    H9z = - H2z;

    H10x = 0.0; 
    H10y = - H3y;
    H10z = - H3z;  
    
    // memasukkan nilai tersebut ke dalam File
    ofstream file;
    file.open("butana.xyz");
    file << "14\n" << endl;
    file << setw(14) << "C" << setw(14) << " " \
    << fixed << setprecision(14) << C1x << setw(14) << " "\
    << fixed << setprecision(14) << C1y << setw(14) << " "\
    << fixed << setprecision(14) << C1z << "\n";

    file << setw(14) << "C" << setw(14) << " " \
    << fixed << setprecision(14) << C2x << setw(14) << " "\
    << fixed << setprecision(14) << C2y << setw(14) << " "\
    << fixed << setprecision(14) << C2z << "\n";

    file << setw(14) << "C" << setw(14) << " " \
    << fixed << setprecision(14) << C3x << setw(14) << " "\
    << fixed << setprecision(14) << C3y << setw(14) << " "\
    << fixed << setprecision(14) << C3z << "\n";

    file << setw(14) << "C" << setw(14) << " " \
    << fixed << setprecision(14) << C4x << setw(14) << " "\
    << fixed << setprecision(14) << C4y << setw(14) << " "\
    << fixed << setprecision(14) << C4z << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H1x << setw(14) << " "\
    << fixed << setprecision(14) << H1y << setw(14) << " "\
    << fixed << setprecision(14) << H1z << "\n";

    file << setw(14) << "H" << setw(5) << " " \
    << fixed << setprecision(14) << H2x << setw(14) << " "\
    << fixed << setprecision(14) << H2y << setw(14) << " "\
    << fixed << setprecision(14) << H2z << "\n";

    file << setw(14) << "H" << setw(5) << " " \
    << fixed << setprecision(14) << H3x << setw(14) << " "\
    << fixed << setprecision(14) << H3y << setw(14) << " "\
    << fixed << setprecision(14) << H3z << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H4x << setw(14) << " "\
    << fixed << setprecision(14) << H4y << setw(14) << " "\
    << fixed << setprecision(14) << H4z << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H5x << setw(14) << " "\
    << fixed << setprecision(14) << H5y << setw(14) << " "\
    << fixed << setprecision(14) << H5z << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H6x << setw(14) << " "\
    << fixed << setprecision(14) << H6y << setw(14) << " "\
    << fixed << setprecision(14) << H6z << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H7x << setw(14) << " "\
    << fixed << setprecision(14) << H7y << setw(14) << " "\
    << fixed << setprecision(14) << H7z << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H8x << setw(14) << " "\
    << fixed << setprecision(14) << H8y << setw(14) << " "\
    << fixed << setprecision(14) << H8z << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H9x << setw(14) << " "\
    << fixed << setprecision(14) << H9y << setw(14) << " "\
    << fixed << setprecision(14) << H9z << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H10x << setw(14) << " "\
    << fixed << setprecision(14) << H10y << setw(14) << " "\
    << fixed << setprecision(14) << H10z << "\n";


    file.close(); 

    cout << "program selesai!";

    return 0;
}

    %%shell

    g++ molekul-butana.cpp -o butana
    ./butana
