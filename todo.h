#ifndef TODO_H
#define TODO_H

#include <QMainWindow>
#include <qstandardpaths.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Todo;
}
QT_END_NAMESPACE

class Todo : public QMainWindow
{
    Q_OBJECT

public:
    Todo(QWidget *parent = nullptr);
    ~Todo();

private slots:
    void on_addBtn_clicked();

    void on_Random_btn_clicked();

    void on_RBtn_clicked();

    void on_RallBtn_clicked();

private:
    Ui::Todo *ui;
    QString path = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\todo.txt";
};
#endif // TODO_H
