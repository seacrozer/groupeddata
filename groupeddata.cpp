#include <iostream>
#include <math.h>
using namespace std;
int main(){ 
            int rows;
            cout << "How many rows of table : ";
            cin >> rows;
            float n1[rows], n2[rows], f[rows], fx[rows], x_xbar[rows], x_xbar2[rows], fx_xbars[rows];
            float fxres, fres, Efxres, Efx_bar, ssums;
            fres = 0;
            fxres = 0;
            ssums =0;
        for (int i = 0; i < rows; i++){
            cout << "======================================\n";
            cout << "["<< i+1 <<"] Enter a First number : ";
            cin >> n1[i];
            cout << "["<< i+1 <<"] Enter a Second number : ";
            cin >> n2[i];
        }
            cout << "======================================\n\n\n";
            cout << "+ Enter a f of each data + \n\n";
        for (int i = 0; i< rows; i++){
            cout << "( "<< n1[i] << " - " << n2[i] << " )" << " : ";
            cin >> f[i];
        }
        for (int i =0 ; i< rows; i++){
            fres += f[i];
        }
            cout << "\n\tN = " << fres << endl;
            cout << "\n+ Enter a f success !!\n\n";

        for (int i = 0; i< rows; i++){
            fx[i] = (n2[i] + n1[i])/2;
            cout << "["<< i+1 << "]" << " X  = : " << fx[i] << endl; 
            fxres += f[i] * fx[i];

        }

            cout << "\n\n";
        for (int i =0; i < rows; i++){

            cout << "["<< i+1 << "]" << " Fx  = : " << f[i] * fx[i] << endl; 
        }
            cout << "\n\nEfx = :  " << fxres; 

            Efxres = fxres / fres;
            cout << "\n\nEfx/n = : " << Efxres << endl << endl ;
        // result of (x-x{bar})
        for (int i = 0; i< rows; i++){
            x_xbar[i] = fx[i] - Efxres;
            cout << "["<< i+1 << "]" << " x -xbar  = : " << x_xbar[i] << endl; 
         }

         cout << "\n\n";
        
        // result of (x - x{bar}^2 )
        for (int i =0; i < rows; i++){
            x_xbar2[i] = x_xbar[i]*x_xbar[i];
            cout << "["<< i+1 << "]" << " x -xbar^2  = : " << x_xbar2[i] << endl; 
        }

        cout << "\n\n";
        // result of (f(x-x{bar}^2))

        for (int i =0; i< rows; i++){
            fx_xbars[i] = x_xbar2[i] * f[i];
            cout << "["<< i+1 << "]" << " f(x -xbar^2)  = : " << fx_xbars[i] << endl; 
            // sum of fx_xbras[i]
            Efx_bar += fx_xbars[i];
        }
        
        ssums = Efx_bar / fres;
        cout << "\n\nEf(x-xbar)^2 = : " << Efx_bar;
        cout << endl << "\nS   = : "<< sqrt(ssums);


    return 0;
}