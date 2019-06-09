#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QDialog>

class CustomDlg : public QDialog
{
    Q_OBJECT
public:
    CustomDlg(QWidget *parent = nullptr);
};