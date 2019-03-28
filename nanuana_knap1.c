#include<iostream>
using namespace std;

int n;
float V[100][3];

int masa = 0;

int read_data()
{
cout << "Greutatea Rucsac" << endl;
cin >> masa;
cout << "Obiecte: " << endl;
cin >> n;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cin >> V[i][j];
    }
    if (V[i][0] != 0 && V[i][1] != 0)
    {
        V[i][2] = V[i][1] / V[i][0];
    }
}
}

int sorteaza()
{
    int i,j;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (V[i][2] < V[j][2])
            {
                swap(G[i], V[j]);
            }
        }
    }
}
int verify()
{
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<< V[i][j] << endl;
    }
}
}

int greedy()
{

    float profit = 0;
    int i = 0;
    int aux;
    while(i<=n && masa>=0)
    {
        cout << "V[i][0]: " << V[i][0] << endl;
        if(masa>=V[i][0]) {
        profit=profit+V[i][1];
        masa=masa-V[i][0];
        }
        else {
                        //cout << "Am ajuns dincolo";
                aux= (masa*100)/V[i][0];
                profit = profit + (aux * V[i][1])/100;
                break;
                        }
    i++;
   }
cout << profit;
    }
int main()
{
    read_data();
    sorteaza();
    verify();
   greedy();

}
