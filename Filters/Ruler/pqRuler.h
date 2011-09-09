#ifndef _pqRuler_h
#define _pqRuler_h

#include "pqAutoGeneratedObjectPanel.h"
#include "pqComponentsExport.h"
#include <QActionEvent>
#include <QWidget>
#include <QTextStream>
#include <QString>

#include <QSet>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <vtkSMDoubleVectorProperty.h>
#include "vtkSmartPointer.h"

class vtkEventQtSlotConnect;
class vtkSMStringVectorProperty;
class QLabel;

class pqRuler : public pqAutoGeneratedObjectPanel  {
  Q_OBJECT
public:
  /// constructor
  pqRuler(pqProxy* proxy, QWidget* p = NULL);
  /// destructor
  ~pqRuler();
  virtual void accept();
  virtual void reset();
protected slots:
	void distanceModified();
	void xDistanceModified();
	void yDistanceModified();
	void zDistanceModified();

protected:
	vtkSMDoubleVectorProperty* distancevp;
	vtkSMDoubleVectorProperty* xdistancevp;
	vtkSMDoubleVectorProperty* ydistancevp;
	vtkSMDoubleVectorProperty* zdistancevp;
	vtkSmartPointer<vtkEventQtSlotConnect> VTKConnect;
  /// populate widgets with properties from the server manager
	virtual void linkServerManagerProperties();
private:
	QLabel* distanceLabel;
	QLabel* xDistanceLabel;
	QLabel* yDistanceLabel;
	QLabel* zDistanceLabel;
};

#endif
