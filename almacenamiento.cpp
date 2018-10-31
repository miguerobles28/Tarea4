#include "almacenamiento.h"
#include "formulario.h"
#include "dialogo.h"

void Almacenamiento::SaveDate()
{

    int resultado;
    Dialogo objeto;//
    objeto.setWindowTitle("Datos personales");
    resultado = objeto.exec();

    if(resultado == QDialog::Rejected)
        return;
    else
    {
        nombre = objeto.getDateNombre();
        edad = QString::number(objeto.getDateEdad());
        puntaje = QString::number(objeto.getDaterPuntaje());
        materia = objeto.getDateMateria();
        level = objeto.getDateLevel();
        tipocont = objeto.getTipoCont();

        vector.push_back(nombre);
        vector.push_back(edad);
        vector.push_back(puntaje);
        vector.push_back(materia);
        vector.push_back(level);
        vector.push_back(tipocont);
    }
}
