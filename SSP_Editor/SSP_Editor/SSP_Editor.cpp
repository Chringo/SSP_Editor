#include "SSP_Editor.h"

SSP_Editor::SSP_Editor(QWidget *parent)
	: QMainWindow(parent)
{
	ui->setupUi(this);
	QFileSystemModel *model = new QFileSystemModel(this);
	model->setRootPath("C:/");
	ui->treeWidget->setModel(model)
}

SSP_Editor::~SSP_Editor()
{
}
