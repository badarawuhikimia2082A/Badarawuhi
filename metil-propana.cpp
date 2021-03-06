
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

    C1x = - sin (54.7355*pi/180) * 1.540;
    C1y = 0.0;
    C1z = - cos (54.7355*pi/180) * 1.540;
    
    C2x = 0.0;
    C2y = 0.0;
    C2z = 0.0;

    C3x = - C1x;
    C3y = 0.0;
    C3z = C1z;

    C4x = 0.0;
    C4y = - sin (35.265*pi/180) * 1.540;
    C4z = cos (35.265*pi/180) * 1.540;

    H1x = - sin (109.471*pi/180) * 2.163;
    H1y = 0.0;
    H1z = - cos (109.471*pi/180) * 2.163;

    H2x = -1.2575;
    H2y = sin (17.632*pi/180) * 2.163;
    H2z = - cos (17.632*pi/180) * 2.163;

    H3x = -1.2575;
    H3y = - H2y;
    H3z = H2z;

    H4x = 0.0;
    H4y = sin (35.265*pi/180) * 1.090;
    H4z = cos (35.265*pi/180) * 1.090;

    H5x = - H1x;
    H5y = 0.0;
    H5z = H1z;

    H6x = 1.2575;
    H6y = sin (17.632*pi/180) * 2.163;
    H6z = cos (17.632*pi/180) * 2.163;

    H7x = 1.2575;
    H7y = - H6y;
    H7z = H6z;

    H8x = 0.0;
    H8y = - sin (109.471*pi/180) * 2.163;
    H8z = cos (109.471*pi/180) * 2.163;

    H9x = -0.89;
    H9y = - sin (109.471*pi/180) * 2.163;
    H9z = cos (109.471*pi/180) * 2.163; 

    H10x = 0.89;
    H10y = - H9y;
    H10z = H9z;

    // memasukkan nilai tersebut ke dalam File 
    ofstream file;
    file.open("metil-propana.xyz");
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

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H2x << setw(14) << " "\
    << fixed << setprecision(14) << H2y << setw(14) << " "\
    << fixed << setprecision(14) << H2z << "\n";

    file << setw(14) << "H" << setw(14) << " " \
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

    cout << "program sudah berhasil bestie!";

    return 0;
}
 
