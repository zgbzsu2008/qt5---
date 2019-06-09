#include "processdlg.h"

#include <qprogressdialog.h>

ProcessDlg::ProcessDlg(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);

    QFont font("ZYSong18030", 12);
    setFont(font);
    setWindowTitle("Progress");

    fileNum = new QLabel;
    fileNum->setText("文件数目: ");
    filenameLineEdit = new QLineEdit;
    filenameLineEdit->setText(QString("%1").arg(2000));

    progressType = new QLabel;
    progressType->setText("显示类型： ");
    comboBox = new QComboBox;
    comboBox->addItem("progressBar");
    comboBox->addItem("progressDialog");

    progressBar = new QProgressBar;

    startBtn = new QPushButton;
    startBtn->setText("开始");

    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(fileNum, 0, 0);
    mainLayout->addWidget(filenameLineEdit, 0, 1);
    mainLayout->addWidget(progressType, 1, 0);
    mainLayout->addWidget(comboBox, 1, 1);
    mainLayout->addWidget(progressBar, 2, 0, 1, 2);
    mainLayout->addWidget(startBtn, 3, 1);
    mainLayout->setMargin(10);
    mainLayout->setSpacing(10);

    connect(startBtn, &QPushButton::clicked, this, &ProcessDlg::startProgress);
}

void ProcessDlg::startProgress()
{
    bool ok;
    int num = filenameLineEdit->text().toInt(&ok);
    if (ok) {
        if (comboBox->currentIndex() == 0) {
            progressBar->setRange(0, num);
            for (int i = 1; i < num + 1; ++i) {
                progressBar->setValue(i);
            }
        } else {
            QProgressDialog *progressDlg = new QProgressDialog(this);
            QFont font("ZYSong18030", 12);
            progressDlg->setFont(font);
            progressDlg->setWindowModality(Qt::WindowModal);
            progressDlg->setMinimumDuration(5);
            progressDlg->setWindowTitle("Please Wait");
            progressDlg->setLabelText("Copying...");
            progressDlg->setCancelButtonText("Cancel");
            progressDlg->setRange(0, num);

            for (int i = 1; i < num + 1; ++i) {
                progressDlg->setValue(i);
                if (progressDlg->wasCanceled()) {
                    return;
                }
            }
        }
    }
}