#include "formulario.h"
#include "dialogo.h"
#include "almacenamiento.h"
#include "ui_formulario.h"
#include <QString>


using namespace std;

Formulario::Formulario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Formulario)
{
    ui->setupUi(this);
    setWindowTitle("Ecuesta");//Titulo
    QStringList columnas;
    columnas <<"Nombre"<<"Edad"<<"Puntaje"<<"Materia"<<"Nivel Academico"<<"Tipo Contrato";
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderLabels(columnas);

}

Formulario::~Formulario()
{
    delete ui;
}

void Formulario::on_pushButton_clicked()
{
    int fila;
    Almacenamiento objeto;
    objeto.SaveDate();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    fila = ui->tableWidget->rowCount()-1;
    for (int i=0; i<6; i++)
    {
        ui->tableWidget->setItem(fila, i, new QTableWidgetItem(objeto.vector[i]));
    }
}



