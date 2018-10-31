#include "dialogo.h"
#include "ui_dialogo.h"
#include <QString>

Dialogo::Dialogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogo)
{
    ui->setupUi(this);
}

Dialogo::~Dialogo()
{
    delete ui;
}


void Dialogo::on_buttonBox_accepted()
{
    accept();
}

void Dialogo::on_buttonBox_rejected()
{
    reject();
}

QString Dialogo::getDateNombre()
{
    return ui->nombre->text();
}

int Dialogo::getDateEdad()
{
    return  ui->Edad->value();
}

double Dialogo::getDaterPuntaje()
{
    return ui->Puntaje->value();
}

QString Dialogo::getDateMateria()
{
    return ui->Materia->currentText();
}

QString Dialogo::getDateLevel()
{
    return ui->Level->currentText();
}

QString Dialogo ::getTipoCont()
{
    QString firstCon;

    if(ui->catedra->isChecked())
    {
        firstCon = ui->catedra->text();
    }
    else if (ui->ocacional->isChecked())
    {
        firstCon = ui->ocacional->text();
    }
    else if (ui->planta->isChecked())
    {
        firstCon = ui->planta->text();
    }
    else
    {

    }

    return firstCon;
}
