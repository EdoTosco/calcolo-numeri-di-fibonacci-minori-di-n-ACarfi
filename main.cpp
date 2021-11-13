#include <iostream>
using namespace std;

int main() {

    int fibonacci=0, Primo_Valore=1, Secondo_Valore=1, RFibo=1, massimo=0;

    cin >> massimo;

    if (massimo >= 2){

        cout << Primo_Valore << endl;
        cout << Secondo_Valore << endl;

        for(int i=2; i <= massimo; i++){

            RFibo = Primo_Valore + Secondo_Valore;

            Primo_Valore=Secondo_Valore;
            Secondo_Valore=RFibo;

            if(RFibo<=massimo){
                cout<<RFibo<<endl;
            }else{
                break;
            }
        }
    }else{
        cout<<"errore"<<" ";
    }

    return 0;
    }
