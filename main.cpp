#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int mtx[100][100];
    int m;
    cout<<"Masukkan panjang matriks : ";
    cin>>m;
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<"Masukkan ["<<i<<"]["<<j<<"] : ";
            cin>>mtx[i][j];
           if (i+j==m-1)
            {
                mtx[i][j]=0;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<setw(5)<<mtx[i][j];
        }
        cout<<endl;
    }
    return 0;
}
