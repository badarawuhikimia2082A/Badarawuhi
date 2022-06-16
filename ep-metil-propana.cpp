%%writefile ep-metil-propana.cpp

#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

float densitas;         /*densitas ini memiliki satuan g cm^-3
                          dan ini harus diinput dari user */
// converter dari nilai cm^-3 ke A^3
float cm3_to_A3 = 1.0E-24;
float numb_mol;
float Na = 6.022E23;            // bilangan avogadro
float Mr_metana = 58.0;         // massa relatif dari metana
int numb_lat;                   // panjang sel simulasi
int N;                          // jumlah molekul
float volum;                    // volume dari molekul metana
float lx, ly, lz;               // panjang sel simulasi terhitung 
float lat;                      // jarak antar molekul metana

// variabel perhitungan energi potensial
float sigma = 2.725;            // satuan (A)
float epsilon = 3.725;          // satuan (kj/mol)
float rij, rcut, rcut2;
float Ep, Ep_LJ, A12, B6;
float rij6, rij12;
float dx, dy, dz;

int main(){
    
    rcut = 3 * sigma;
    rcut2 = pow(rcut,2);
    
    cout << "program menghitung energi potensial dari metana" << endl;
    cout << "Masukkan nilai densitas dari metana (eg. 1.0): ";
    cin >> densitas;

    numb_mol = densitas * (Na / Mr_metana) * cm3_to_A3;
    cout << "Masukkan panjang sel simulasi (eg. 5): ";
    cin >> numb_lat;
    N = (pow(numb_lat,3)) * 3;
    volum = (float)N / numb_mol;

    // panjang sel simulasi secara perhitungan
    lx = pow(volum,(1.0/3.0));
    ly = lx;
    lz = lx;
    if(lx < (2*rcut)){
        cout << "sorry mazeh, sel simulasi kamu besar";
        exit(0);
    } else{
        cout << "panjang sek simulasi baru: " << lx << endl;
    }
    lat = lx / (float)numb_lat;

    // deklarasi variabel
    float pi = 3.14;
    
    // deklarasi molekul metil-propana
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
                
            molekul metil-propana itu bentuk rigid
    */
  
    float rB_C1x = 0.0;
    float rB_C1y = 0.0;
    float rB_C1z = 0.0;

    float rB_C2x = 0.0;
    float rB_C2y = 0.0;
    float rB_C2z = 0.0;

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


    int counter = 0;
        for(int i = 0; i < numb_lat; i++){ //x
           for(int j = 0; j < numb_lat; j++){ //y
               for(int k = 0; k < numb_lat; k++){ //z 
                
                C1x[counter] = rB_C1x + (i*lat);
                C1y[counter] = rB_C1y + (j*lat);
                C1z[counter] = rB_C1z + (k*lat);

                C2x[counter] = rB_C2x + (i*lat);
                C2y[counter] = rB_C2y + (j*lat);
                C2z[counter] = rB_C2z + (k*lat);

                C3x[counter] = rB_C3x + (i*lat);
                C3y[counter] = rB_C3y + (j*lat);
                C3z[counter] = rB_C3z + (k*lat);

                C4x[counter] = rB_C4x + (i*lat);
                C4y[counter] = rB_C4y + (j*lat);
                C4z[counter] = rB_C4z + (k*lat);

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
    // main hitung energi potensial
    A12 = 4.0 * epsilon * pow(sigma,12);
    B6 = 4.0 * epsilon * pow(sigma, 6);

    Ep = 0.0;
    for(int a = 0; a < (N-1); a++){
        for(int b = (0+1); b < N; b++){
            
            dx = Cx[a] - Cx[b];
            dy = Cy[a] - Cy[b];
            dz = Cz[a] - Cz[b];

            dx = dx - round(dx/lx) * lx;
            dy = dy - round(dy/ly) * ly;
            dz = dz - round(dz/lz) * lz;

            rij = pow(dx,2) + pow(dy,2) + pow(dz,2);
            if(rij < rcut2){
                rij6 = pow(rij,3);
                rij12 = pow(rij6,2);
                Ep = (A12/rij12) - (B6/rij6);
                Ep_LJ = (A12/rij12) - (B6/rij6);
                Ep += Ep_LJ;
            }
        }
    }

    cout << "Energi potensial dari molekul propana ruah: " \
         << Ep/(float)N << "kJ/mol";

    // hasil iterasi dimasukkan ke dalam file xyz
    ofstream file;
    file.open("propana-hitung_ep.xyz");
    file << N << "\n" << endl;

    int Nw = N/14;

    // iterasi dalam output array
    for(int m = 0; m < Nw; m++){
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

    return 0;
}
