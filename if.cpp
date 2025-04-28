#include <iostream>

using namespace std;

int main(){

float kid;

cout<<"bienvenido al parque de atracciones"<<endl;
cout<<"el costo de entra de los kids depende de su edad"<<endl;
cout<<"ingrese la edad del kid"<<endl;
cin>>kid;

if (kid <5)
{
    cout<<"su entrada es gratis que lo disfrute";
}

else if (kid <12 )
{
    cout<<"su entrada cuesta 5 dolares";
}

if (kid >12 )
{
    cout<<"su entrada cuesta 10";
}




 return 0 ;   
}













