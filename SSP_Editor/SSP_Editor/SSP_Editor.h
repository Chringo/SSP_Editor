#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SSP_Editor.h"
#include <qfilesystemmodel.h>

class SSP_Editor : public QMainWindow
{
    Q_OBJECT

public:
    SSP_Editor(QWidget *parent = Q_NULLPTR);
	~SSP_Editor();

private:
    Ui::SSP_EditorClass ui;
	QFileSystemModel *model;
	
};
