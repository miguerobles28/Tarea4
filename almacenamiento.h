#ifndef ALMACENAMIENTO_H
#define ALMACENAMIENTO_H
#include <QString>
#include <vector>

using namespace std;


class Almacenamiento
{
public:
    QString nombre;
    QString edad;
    QString puntaje;
    QString materia;
    QString level;
    QString tipocont;
  vector<QString> vector;

  void SaveDate();
};

#endif // ALMACENAMIENTO_H
