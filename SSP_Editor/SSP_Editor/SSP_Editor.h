#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SSP_Editor.h"
#include <qfilesystemmodel.h>
#include <qinputdialog.h>

class SSP_Editor : public QMainWindow
{
    Q_OBJECT

public:
    SSP_Editor(QWidget *parent = Q_NULLPTR);
	~SSP_Editor();

public slots:
void treeView_doubleClicked();

private:
    Ui::SSP_EditorClass ui;
	QFileSystemModel *model;
	QModelIndex *item;
};
