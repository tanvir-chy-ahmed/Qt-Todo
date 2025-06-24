/********************************************************************************
** Form generated from reading UI file 'todo.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODO_H
#define UI_TODO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Todo
{
public:
    QWidget *centralwidget;
    QLineEdit *Intxt;
    QPushButton *addBtn;
    QPushButton *Random_btn;
    QPushButton *RBtn;
    QPushButton *RallBtn;
    QListWidget *listWidget;

    void setupUi(QMainWindow *Todo)
    {
        if (Todo->objectName().isEmpty())
            Todo->setObjectName("Todo");
        Todo->resize(521, 536);
        centralwidget = new QWidget(Todo);
        centralwidget->setObjectName("centralwidget");
        Intxt = new QLineEdit(centralwidget);
        Intxt->setObjectName("Intxt");
        Intxt->setGeometry(QRect(90, 30, 331, 41));
        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(80, 460, 71, 41));
        Random_btn = new QPushButton(centralwidget);
        Random_btn->setObjectName("Random_btn");
        Random_btn->setGeometry(QRect(170, 460, 91, 41));
        RBtn = new QPushButton(centralwidget);
        RBtn->setObjectName("RBtn");
        RBtn->setGeometry(QRect(280, 460, 71, 41));
        RallBtn = new QPushButton(centralwidget);
        RallBtn->setObjectName("RallBtn");
        RallBtn->setGeometry(QRect(370, 460, 71, 41));
        listWidget = new QListWidget(centralwidget);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setPointSize(18);
        font.setBold(true);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(40, 100, 431, 331));
        Todo->setCentralWidget(centralwidget);

        retranslateUi(Todo);

        QMetaObject::connectSlotsByName(Todo);
    } // setupUi

    void retranslateUi(QMainWindow *Todo)
    {
        Todo->setWindowTitle(QCoreApplication::translate("Todo", "Todo", nullptr));
        addBtn->setText(QCoreApplication::translate("Todo", "Add", nullptr));
        Random_btn->setText(QCoreApplication::translate("Todo", "Random Add", nullptr));
        RBtn->setText(QCoreApplication::translate("Todo", "Remove", nullptr));
        RallBtn->setText(QCoreApplication::translate("Todo", "Remove all", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Todo", "                              NotePad", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Todo: public Ui_Todo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODO_H
