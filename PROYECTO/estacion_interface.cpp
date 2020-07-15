#include "estacion_interface.h"
#include "ui_estacion_interface.h"

void Estacion_interface::escribir_GUI(float t, unsigned char h, float v, int d, double la, double lo, double a)
{
    QApplication a(argc, argv);
    Estacion_interface w;


    ui->txt_temperatura->setText( QString::number(t) );
    ui->txt_humedad->setText( QString::number(h) );
    ui->txt_vel_viento->setText( QString::number(v) );
    ui->txt_dir_viento->setText( QString::number(d) );
    ui->txt_latitud->setText( QString::number(la) );
    ui->txt_longitud->setText( QString::number(lo) );
    ui->txt_Altura->setText( QString::number(a) );

    w.show();
}

Estacion_interface::Estacion_interface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Estacion_interface)
{
    ui->setupUi(this);
}

Estacion_interface::~Estacion_interface()
{
    delete ui;
}
