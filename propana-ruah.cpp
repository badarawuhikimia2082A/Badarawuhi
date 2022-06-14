%%writefile propana-ruah.cpp

#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

int main(){
    // deklarasi variabel
    float pi = 3.14;
    int counter = 0;

    // deklarasi molekul propana
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
            
    /*             H  H  H
                    \ | /
                      C   
                      | 
                  H   C   H
                  | / | \ |
              H — C   H   C — H
                  |       |
                  H       H
                
            molekul propana itu bentuk rigid
    */

    float rB_C1x = 
    float rB_C1y = 
    float rB_C1z = 

    float rB_C2x = 
    float rB_C2y = 
    float rB_C2z = 

    float rB_C3x = 
    float rB_C3y = 
    float rB_C3z = 

    float rB_C4x = 
    float rB_C4y = 
    float rB_C4z = 

    float rB_H1x = 
    float rB_H1y = 
    float rB_H1z = 

    float rB_H2x = 
    float rB_H2y = 
    float rB_H2z = 

    float rB_H3x = 
    float rB_H3y = 
    float rB_H3z = 

    float rB_H4x = 
    float rB_H4y = 
    float rB_H4z = 

    float rB_H5x = 
    float rB_H5y = 
    float rB_H5z =

    float rB_H6x = 
    float rB_H6y = 
    float rB_H6z =

    float rB_H7x = 
    float rB_H7y = 
    float rB_H7z =

    float rB_H8x = 
    float rB_H8y = 
    float rB_H8z =

    float rB_H9x = 
    float rB_H9y = 
    float rB_H9z =

    float rB_H10x = 
    float rB_H10y = 
    float rB_H10z =

    // iterasi untuk setiap molekul metana 
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                
                C1x[counter] = rB_C1x + (i*3.01);
                C1y[counter] = rB_C1y + (j*3.01);
                C1z[counter] = rB_C1z + (k*3.01);

                C2x[counter] = rB_C2x + (i*3.01);
                C2y[counter] = rB_C2y + (j*3.01);
                C2z[counter] = rB_C2z + (k*3.01);

                C3x[counter] = rB_C3x + (i*3.01);
                C3y[counter] = rB_C3y + (j*3.01);
                C3z[counter] = rB_C3z + (k*3.01);

                C4x[counter] = rB_C4x + (i*3.01);
                C4y[counter] = rB_C4y + (j*3.01);
                C4z[counter] = rB_C4z + (k*3.01);
                
                H1x[counter] = Cx[counter] + rB_H1x;
                H1y[counter] = Cy[counter] + rB_H1y;
                H1z[counter] = Cz[counter] + rB_H1z;

                H2x[counter] = Cx[counter] + rB_H2x;
                H2y[counter] = Cy[counter] + rB_H2y;
                H2z[counter] = Cz[counter] + rB_H2z;

                H3x[counter] = Cx[counter] + rB_H3x;
                H3y[counter] = Cy[counter] + rB_H3y;
                H3z[counter] = Cz[counter] + rB_H3z;

                H4x[counter] = Cx[counter] + rB_H4x;
                H4y[counter] = Cy[counter] + rB_H4y;
                H4z[counter] = Cz[counter] + rB_H4z;

                H5x[counter] = Cx[counter] + rB_H5x;
                H5y[counter] = Cy[counter] + rB_H5y;
                H5z[counter] = Cz[counter] + rB_H5z;

                H6x[counter] = Cx[counter] + rB_H6x;
                H6y[counter] = Cy[counter] + rB_H6y;
                H6z[counter] = Cz[counter] + rB_H6z;

                H7x[counter] = Cx[counter] + rB_H7x;
                H7y[counter] = Cy[counter] + rB_H7y;
                H7z[counter] = Cz[counter] + rB_H7z;

                H8x[counter] = Cx[counter] + rB_H8x;
                H8y[counter] = Cy[counter] + rB_H8y;
                H8z[counter] = Cz[counter] + rB_H8z;

                H9x[counter] = Cx[counter] + rB_H9x;
                H9y[counter] = Cy[counter] + rB_H9y;
                H9z[counter] = Cz[counter] + rB_H9z;

                H10x[counter] = Cx[counter] + rB_H10x;
                H10y[counter] = Cy[counter] + rB_H10y;
                H10z[counter] = Cz[counter] + rB_H10z;

                 counter += 1;
            }
        }
    }

    // hasil iterasi dimasukan ke dalam file xyz
    ofstream file;
    file.open("propana-ruah.xyz");
    int N = 216 * 14;
    file << N << "/n" << endl;

    // iterasi dalam output array
    for(int m = 0; m < 216; m++){
        file << setw(14) << "C" << setw(14) << " " \
    << fixed << setprecision(14) << C1x[m] << setw(14) << " "\
    << fixed << setprecision(14) << C1y[m] << setw(14) << " "\
    << fixed << setprecision(14) << C1z[m] << "\n";

    file << setw(14) << "C" << setw(14) << " " \
    << fixed << setprecision(14) << C2x[m] << setw(14) << " "\
    << fixed << setprecision(14) << C2y[m] << setw(14) << " "\
    << fixed << setprecision(14) << C2z[m] << "\n";

    file << setw(14) << "C" << setw(14) << " " \
    << fixed << setprecision(14) << C3x[m] << setw(14) << " "\
    << fixed << setprecision(14) << C3y[m] << setw(14) << " "\
    << fixed << setprecision(14) << C3z[m] << "\n";

    file << setw(14) << "C" << setw(14) << " " \
    << fixed << setprecision(14) << C4x[m] << setw(14) << " "\
    << fixed << setprecision(14) << C4y[m] << setw(14) << " "\
    << fixed << setprecision(14) << C4z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H1x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H1y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H1z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H2x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H2y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H2z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H3x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H3y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H3z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H4x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H4y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H4z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H5x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H5y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H5z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H6x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H6y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H6z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H7x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H7y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H7z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H8x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H8y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H8z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H9x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H9y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H9z[m] << "\n";

    file << setw(14) << "H" << setw(14) << " " \
    << fixed << setprecision(14) << H10x[m] << setw(14) << " "\
    << fixed << setprecision(14) << H10y[m] << setw(14) << " "\
    << fixed << setprecision(14) << H10z[m] << "\n";

    }

   file.close();

   cout << "program telah selesai";

   return 0;
}
