
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
float Mr_butana = 58.00;         // massa relatif dari butana
int numb_lat;                   // panjang sel simulasi
int N;                          // jumlah molekul
float volum;                    // volume dari molekul butana
float lx, ly, lz;               // panjang sel simulasi terhitung 
float lat;                      // jarak antar molekul  butana

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
    
    cout << "program menghitung energi potensial dari butana" << endl;
    cout << "Masukkan nilai densitas dari metana (eg. 1.0): ";
    cin >> densitas;
 
 numb_mol = densitas * (Na / Mr_butana) * cm3_to_A3;
    cout << "Masukkan panjang sel simulasi (eg. 5): ";
    cin >> numb_lat;
    N = (pow(numb_lat,3)) * 3;
    volum = (float)N / numb_mol;

    // panjang sel simulasi secara perhitungan
    lx = pow(volum,(1.0/3.0));
    ly = lx;
    lz = lx;
    if(lx < (2*rcut)){
        cout << "Maaf, sel simulasi anda terlalu besar";
        exit(0);
    } else{
        cout << "panjang sel simulasi baru: " << lx << endl;
    }
    lat = lx / (float)numb_lat;

    // deklarasi variabel
    float pi = 3.14;
    
    // deklarasi molekul metana
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
    /* H   H    H    H   H
        \ /    /    /   /
         C  - C  - C - C 
        /    /    /   / \
      H     H    H   H   H

     molekul butana itu bentuk rigid
   */

  
    float rB_C1x = - sin (109.471*pi/180) * 3.7545;
    float rB_C1y = 0.0;
    float rB_C1z = cos (109.471*pi/180) * 3.7545;
    
    float rB_C2x = - cos (35.2645*pi/180) * 0.77;
    float rB_C2y = 0.0;
    float rB_C2z = - sin (35.2645*pi/180) * 0.77;

    float rB_C3x = cos (35.2645*pi/180) * 0.77;
    float rB_C3y = 0.0;
    float rB_C3z = sin (35.2645*pi/180) * 0.77;

    float rB_C4x = sin (109.471*pi/180) * 3.7545;
    float rB_C4y = 0.0;
    float rB_C4z = - cos (109.471*pi/180) * 3.7545;

    float rB_H1x = 0.0;
    float rB_H1y = sin (35.25*pi/180) * 8.596;
    float rB_H1z = cos (35.25*pi/180) * 8.596;

    float rB_H2x = 0.0;
    float rB_H2y = - sin (35.25*pi/180) * 8.596;
    float rB_H2z = cos (35.25*pi/180) * 8.596;

    float rB_H3x = - sin (109.471*pi/180) * 12.340;
    float rB_H3y = 0.0;
    float rB_H3z = - cos (109.471*pi/180) * 12.340;

    float rB_H4x = 0.0;
    float rB_H4y = cos (35.2645*pi/180) * 2.341;
    float rB_H4z = - sin (35.2645*pi/180) * 2.341;

    float rB_H5x = 0.0;
    float rB_H5y = - cos (35.2645*pi/180) * 2.341;
    float rB_H5z = - sin (35.2645*pi/180) * 2.341;

    float rB_H6x = 0.0;
    float rB_H6y = cos (35.2645*pi/180) * 2.341;
    float rB_H6z = sin (35.2645*pi/180) * 2.341;

    float rB_H7x = 0.0;
    float rB_H7y = - cos (35.2645*pi/180) * 2.341;
    float rB_H7z = sin (35.2645*pi/180) * 2.341;

    float rB_H8x = 0.0;
    float rB_H8y = sin (35.25*pi/180) * 8.596;
    float rB_H8z = - cos (35.25*pi/180) * 8.596;

    float rB_H9x = 0.0;
    float rB_H9y = - sin (35.25*pi/180) * 8.596;
    float rB_H9z = - cos (35.25*pi/180) * 8.596;

    float rB_H10x = sin (109.471*pi/180) * 12.340; 
    float rB_H10y = 0.0;
    float rB_H10z = cos (109.471*pi/180) * 12.340;

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

                H1x[counter] = C1x[counter] + rB_H1x;
                H1y[counter] = C1y[counter] + rB_H1y;
                H1z[counter] = C1z[counter] + rB_H1z;

                H2x[counter] = C1x[counter] + rB_H2x;
                H2y[counter] = C1y[counter] + rB_H2y;
                H2z[counter] = C1z[counter] + rB_H2z;

                H3x[counter] = C1x[counter] + rB_H3x;
                H3y[counter] = C1y[counter] + rB_H3y;
                H3z[counter] = C1z[counter] + rB_H3z;

                H4x[counter] = C2x[counter] + rB_H4x;
                H4y[counter] = C2y[counter] + rB_H4y;
                H4z[counter] = C2z[counter] + rB_H4z;

                H5x[counter] = C2x[counter] + rB_H5x;
                H5y[counter] = C2y[counter] + rB_H5y;
                H5z[counter] = C2z[counter] + rB_H5z;

                H6x[counter] = C3x[counter] + rB_H6x;
                H6y[counter] = C3y[counter] + rB_H6y;
                H6z[counter] = C3z[counter] + rB_H6z;

                H7x[counter] = C3x[counter] + rB_H7x;
                H7y[counter] = C3y[counter] + rB_H7y;
                H7z[counter] = C3z[counter] + rB_H7z;
                
                H8x[counter] = C4x[counter] + rB_H8x;
                H8y[counter] = C4y[counter] + rB_H8y;
                H8z[counter] = C4z[counter] + rB_H8z;

                H9x[counter] = C4x[counter] + rB_H9x;
                H9y[counter] = C4y[counter] + rB_H9y;
                H9z[counter] = C4z[counter] + rB_H9z;

                H10x[counter] = C4x[counter] + rB_H10x;
                H10y[counter] = C4y[counter] + rB_H10y;
                H10z[counter] = C4z[counter] + rB_H10z;


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
            
            dx = C1x[a] - C1x[b];
            dy = C1y[a] - C1y[b];
            dz = C1z[a] - C1z[b];

            dx = C2x[a] - C2x[b];
            dy = C2y[a] - C2y[b];
            dz = C2z[a] - C2z[b];

            dx = C3x[a] - C3x[b];
            dy = C3y[a] - C3y[b];
            dz = C3z[a] - C3z[b];

            dx = C4x[a] - C4x[b];
            dy = C4y[a] - C4y[b];
            dz = C4z[a] - C4z[b];

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

    cout << "Energi potensial dari molekul butana-badarawuhi: " \
         << Ep/(float)N << "kJ/mol";

    // hasil iterasi dimasukkan ke dalam file xyz
    ofstream file;
    file.open("Butana-hitung_ep.xyz");
    file << N << "\n" << endl;

    int Nw = N/14;
    
    // iterasi dalam output array
    for(int m = 0; m < Nw; m++){
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

      }   

    file.close();

    return 0;
}

%%shell

g++ ep-butana-badarawuhi.cpp -o ep
./ep
   
