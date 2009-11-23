#include "aboutbox.h"

AboutBox::AboutBox(IPluginManager *APluginManager, QWidget *AParent) : QDialog(AParent)
{
  ui.setupUi(this);
  setAttribute(Qt::WA_DeleteOnClose,true);

  ui.lblName->setText(CLIENT_NAME" Jabber IM");
  ui.lblVersion->setText(tr("Version: %1.%2").arg(APluginManager->version()).arg(APluginManager->revision()));
  if (APluginManager->revision() > 0)
    ui.lblDate->setText(tr("Revision date: %1").arg(APluginManager->revisionDate().toString()));
  else
    ui.lblDate->setVisible(false);
}

AboutBox::~AboutBox()
{

}