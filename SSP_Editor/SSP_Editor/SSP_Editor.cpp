#include "SSP_Editor.h"

SSP_Editor::SSP_Editor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->model = new QFileSystemModel(this);
	this->model->setRootPath("C:/");
	this->model->setFilter(QDir::NoDotAndDotDot | QDir::Files);
	
	QStringList filters;
	filters << "*.bbf";

	this->model->setNameFilters(filters);
	ui.treeView->setModel(this->model);
	connect(ui.treeView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(treeView_doubleClicked()));
}


SSP_Editor::~SSP_Editor()
{
	delete this->model;
}

void SSP_Editor::treeView_doubleClicked()
{
	QModelIndex index = ui.treeView->currentIndex();
	
	/*checking to see if the selected object is valid*/
	if (!index.isValid()) return;
	
	QFileInfo fileInfo = this->model->fileInfo(index);
	QString test = fileInfo.filePath();

	printf("hejsan");

}
