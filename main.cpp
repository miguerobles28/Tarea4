#include "formulario.h"
#include "dialogo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Formulario w;
    w.show();

    return a.exec();
}
