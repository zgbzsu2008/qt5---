#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QDialog>
#include "ui_processdlg.h"

#include <qlabel.h>
#include <qlineedit.h>
#include <qprogressbar.h>
#include <qcombobox.h>
#include <qpushbutton.h>
#include <qgridlayout.h>

class ProcessDlg : public QDialog
{
    Q_OBJECT

public:
    ProcessDlg(QWidget *parent = Q_NULLPTR);

private slots:
    void startProgress();

private:
    Ui::ProcessDlgClass ui;

    QLabel *fileNum;
    QLineEdit *filenameLineEdit;
    QLabel *progressType;
    QComboBox *comboBox;
    QProgressBar *progressBar;
    QPushButton *startBtn;
    QGridLayout *mainLayout;
};
