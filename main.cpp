#include "todo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Todo w;
    w.show();
    return a.exec();
}
