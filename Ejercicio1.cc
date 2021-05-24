#include <iostream>

using namespace std;
class persona
{
public:
void dormir();
void hablar();
void contar(int);
void adquirirNombre();
void decirNombre();
private:
char nombre [40];
};
/**
* @brief probemos si esto funciona
**/
void persona::dormir(){
cout << "zzzzzzzzz" << endl;
}
void persona::hablar() {
cout << "bla bla bla bla" << endl;
}
void persona::contar(int limite){
for(int i=0;i <limite; i++)
{
cout << i << endl;
}
}
void persona::adquirirNombre(){
cout << "Soy una persona. Ingrese mi nombre: ";
cin >> nombre;
}
void persona::decirNombre() {
cout << "Mi nombre es: " << nombre << endl;
}
int main() {
int respuesta = 0;
cout << "Desea crear una persona? 1=Si, 0=No: ";
cin >> respuesta;
if(respuesta == 1)
{
persona * p = new persona();
cout << "Desea que vaya a dormir? 1=Si, 0=No: "; cin >> respuesta;
if (respuesta == 1)
{
p->dormir();
}
cout << "Desea oirme contar? 1=Si, 0=No: "; cin >> respuesta;
if (respuesta == 1)
{
p->contar(20);
}
}
system("pause");
return 0;
}
