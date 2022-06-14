
#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

int main(){
    // deklarasi variabel
    float pi = 3.14;
    int counter = 0;

    // deklarasi molekul butana
    float C1x, C1y, C1z;
    float C2x, C2y, C2z;
    float C3x, C3y, C3z;
    float C4x, C4y, C4z;
    float H1x, H1y, H1z;
    float H2x, H2y, H2z;
    float H3x, H3y, H3z;
    float H4x, H4y, H4z;
    float H5x, H5y, H5z;
    float H6x, H6y, H6z;
    float H7x, H7y, H7z;
    float H8x, H8y, H8z;
    float H9x, H9y, H9z;
    float H10x, H10y, H10z;

    /*              
                H   H   H
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
                
                C1x[counter] = rB_Cx + (i*3.01);
                C1y[counter] = rB_Cy + (j*3.01);
                C1z[counter] = rB_Cz + (k*3.01);

                C2x[counter] = rB_Cx + (i*3.01);
                C2y[counter] = rB_Cy + (j*3.01);
                C2z[counter] = rB_Cz + (k*3.01);

                C3x[counter] = rB_Cx + (i*3.01);
                C3y[counter] = rB_Cy + (j*3.01);
                C3z[counter] = rB_Cz + (k*3.01);

                C4x[counter] = rB_Cx + (i*3.01);
                C4y[counter] = rB_Cy + (j*3.01);
                C4z[counter] = rB_Cz + (k*3.01);

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