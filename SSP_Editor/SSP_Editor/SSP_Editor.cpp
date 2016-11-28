#include "SSP_Editor.h"

SSP_Editor::SSP_Editor(QWidget *parent)
	: QMainWindow(parent)
{
	m_ui.setupUi(this);

	/*making a fileSystemModel to enable a file viewer in the treeView widget*/
	this->m_model = new QFileSystemModel(this);
	this->m_model->setRootPath("C:/Users/Cool_David_92/Desktop/hehee");
	this->m_model->setFilter(QDir::NoDotAndDotDot | QDir::Files);
	
	/*a list of filters for the treeView*/
	QStringList filters;
	filters << "*.bbf";

	/*setting the filters and disabling the user from seeing any other files*/
	this->m_model->setNameFilters(filters);
	this->m_model->setNameFilterDisables(false);

	/*setting the fileSystemModel to the treeView and connecting the signal slot*/
	m_ui.treeView->setModel(this->m_model);
	connect(m_ui.treeView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(treeView_doubleClicked()));
}


SSP_Editor::~SSP_Editor()
{
	delete this->m_model;
}

void SSP_Editor::treeView_doubleClicked()
{
	QModelIndex index = m_ui.treeView->currentIndex();
	
	/*checking to see if the selected object is valid*/
	if (!index.isValid()) return;
	
	QFileInfo fileInfo = this->m_model->fileInfo(index);
	QString filePath = fileInfo.filePath();

	/*send the filepath to the importer*/

}
