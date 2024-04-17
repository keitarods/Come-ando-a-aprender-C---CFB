#include <iostream>
using namespace std;

int main(){

    int matriz[3][4];
    int i, j;


    for(i=0; i<3; i++){
        for(j=0; j<4; j++)
            cin >> matriz[i][j];
    }


    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

	return 0;

}
