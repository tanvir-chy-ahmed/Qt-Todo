#include "todo.h"
#include "ui_todo.h"
#include "qmessagebox.h"
#include "qiodevice.h"
#include "qfile.h"

Todo::Todo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Todo)
{
    ui->setupUi(this);


    QFile file(path);

    if (!file.open(QIODevice::ReadWrite)) {
        QMessageBox::information(0,"error",file.errorString());
    }

    QTextStream in(&file);
    while(!in.atEnd()){
        QListWidgetItem *item = new QListWidgetItem(in.readLine(),ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
    }

    file.close();
}

Todo::~Todo()
{
    delete ui;
    QFile file(path);

    if (!file.open(QIODevice::ReadWrite)) {
        QMessageBox::information(0,"error",file.errorString());
    }

    QTextStream out(&file);
    for(int i=0;i<ui->listWidget->count();++i)
    {
        out<<ui->listWidget->item(i)->text()<<"\n";
    }

    file.close();
}

void Todo::on_addBtn_clicked()
{
    if(!ui->Intxt->text().isEmpty())
    {
        QListWidgetItem* item = new QListWidgetItem(ui->Intxt->text(),ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
        ui->Intxt->clear();
        ui->Intxt->setFocus();
    }else QMessageBox::information(this,"Alert","Input is Empty!");
}


void Todo::on_Random_btn_clicked()
{
    QStringList Rlist = {"Tanvir", "Anaya", "Afnan", "Arisha", "Ayman", "Inaya",
                         "Rayyan", "Mahi", "Zidan", "Tania", "Farhan", "Akil"};

    for(const QString &name : Rlist)
    {
        QListWidgetItem* item = new QListWidgetItem(name,ui->listWidget);
        ui->listWidget->addItem(item);
    }
}


void Todo::on_RBtn_clicked()
{
    if(ui->listWidget->item(ui->listWidget->currentRow())){
        int adr = ui->listWidget->currentRow();
        QListWidgetItem* item = ui->listWidget->takeItem(adr);
        delete item;
    }else QMessageBox::information(this,"Alert","Select a Item");
}


void Todo::on_RallBtn_clicked()
{
    if(ui->listWidget->count()==0)
    {
        QMessageBox::information(this,"Alert","No Item Found For deleting");
    }else{

        ui->listWidget->clear();
        QMessageBox::information(this,"Alert","Done,All Items are deleted");

    }
}

