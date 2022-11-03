#include <iostream>
#include <string>

using namespace std;

int main()
{
    int talla;
    int cantidad_zapatos;

    float valor_costo;
    float valor_costo_total;
    float valor_venta;
    float valor_venta_total;
    float utilidad_unidad;
    float utilidad_total;
    float porcentaje_utilidad;

    char disponible;
    string referencia;
    string descripcion;

    cout << endl << "*** ADMINISTRAR VENTA DE ZAPATOS ***" << endl;

    cout << "Favor digitar la referencia del calzado: ";
    getline(cin, referencia);

    cout << "Favor digite una descripcion del producto: ";
    getline(cin, descripcion);

    cout << "Favor digite la talla del calzado: ";
    cin >> talla;

    cout << "Favor confirmar disponibilidad del calzado (S/n): ";
    cin >> disponible;

    cout << "Favor ingresar numero de zapatos en venta: ";
    cin >> cantidad_zapatos;

    cout << "Favor digite la costo del calzado: ";
    cin >> valor_costo;

    cout << "Favor digite la precio del calzado: ";
    cin >> valor_venta;

    valor_costo_total = valor_costo * cantidad_zapatos;
    valor_venta_total = valor_venta * cantidad_zapatos;
    utilidad_unidad = valor_venta - valor_costo;
    utilidad_total = utilidad_unidad * cantidad_zapatos;
    porcentaje_utilidad = (utilidad_total / valor_costo_total) * 100;

    cout << endl << "*** LOS DATOS REGISTRADOS SON LOS SIGUIENTES ***" << endl;
    cout << "REFERENCIA: "<< referencia << endl;
    cout << "DESCRIPCION: "<< descripcion << endl;
    cout << "TALLA: "<< talla <<endl;
    cout << "DISPONIBILIDAD: "<< disponible << endl;
    cout << "CANTIDAD DE ZAPATOS: " << cantidad_zapatos << endl;
    cout << "COSTO UNIDAD: "<< valor_costo << endl;
    cout << "COSTO TOTAL: " << valor_costo_total << endl;
    cout << "PRECIO UNIDAD: "<< valor_venta << endl;
    cout << "PRECIO PRECIO TOTAL DE " << cantidad_zapatos << " UNIDADES: " << valor_venta_total << endl;
    cout << "UTILIDAD POR UNIDAD: " << utilidad_unidad << endl;
    cout << "UTILIDAD TOTAL: " << utilidad_total << endl;
    cout << "PORCENTAJE DE UTILIDAD: " << porcentaje_utilidad << endl;

    return 0;
}