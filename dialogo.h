#ifndef DIALOGO_H
#define DIALOGO_H
#include <QString>
#include <QDialog>

namespace Ui {
class Dialogo;
}

class Dialogo : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogo(QWidget *parent = nullptr);
    ~Dialogo();
public slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    int getDateEdad();

    double getDaterPuntaje();


    QString getDateNombre();

    QString getDateMateria();

    QString getDateLevel();

    QString getTipoCont();

private:
    Ui::Dialogo *ui;
};

#endif // DIALOGO_H
