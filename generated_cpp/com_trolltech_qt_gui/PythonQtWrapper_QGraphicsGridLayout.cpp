#include "PythonQtWrapper_QGraphicsGridLayout.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>

int  PythonQtShell_QGraphicsGridLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsGridLayout::staticMetaObject,
      "count(QGraphicsGridLayout*)");
      int  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsGridLayout::count();
}
void PythonQtShell_QGraphicsGridLayout::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsGridLayout::staticMetaObject,
      "getContentsMargins(QGraphicsGridLayout*,qreal* ,qreal* ,qreal* ,qreal* )");
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsGridLayout::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsGridLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsGridLayout::staticMetaObject,
      "invalidate(QGraphicsGridLayout*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsGridLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsGridLayout::itemAt(int  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsGridLayout::staticMetaObject,
      "itemAt(QGraphicsGridLayout*,int )");
      QGraphicsLayoutItem*  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QGraphicsLayoutItem* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsGridLayout::itemAt(index);
}
void PythonQtShell_QGraphicsGridLayout::removeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsGridLayout::staticMetaObject,
      "removeAt(QGraphicsGridLayout*,int )");
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsGridLayout::removeAt(index);
}
void PythonQtShell_QGraphicsGridLayout::widgetEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "widgetEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsGridLayout::staticMetaObject,
      "widgetEvent(QGraphicsGridLayout*,QEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsGridLayout::widgetEvent(e);
}
QGraphicsGridLayout* PythonQtWrapper_QGraphicsGridLayout::new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsGridLayout(parent); }

void PythonQtWrapper_QGraphicsGridLayout::setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect)
{
 theWrappedObject->setGeometry(rect);
}

QSizeF  PythonQtWrapper_QGraphicsGridLayout::sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
return  theWrappedObject->sizeHint(which, constraint);
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsGridLayout::itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const
{
return  ((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->promoted_itemAt(index);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing)
{
 theWrappedObject->setColumnSpacing(column, spacing);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return  theWrappedObject->rowMaximumHeight(row);
}

void PythonQtWrapper_QGraphicsGridLayout::setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment)
{
 theWrappedObject->setAlignment(item, alignment);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const
{
return  theWrappedObject->horizontalSpacing();
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
 theWrappedObject->setColumnPreferredWidth(column, width);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return  theWrappedObject->rowPreferredHeight(row);
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return  theWrappedObject->rowAlignment(row);
}

int  PythonQtWrapper_QGraphicsGridLayout::rowCount(QGraphicsGridLayout* theWrappedObject) const
{
return  theWrappedObject->rowCount();
}

int  PythonQtWrapper_QGraphicsGridLayout::rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return  theWrappedObject->rowStretchFactor(row);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
 theWrappedObject->setColumnMinimumWidth(column, width);
}

void PythonQtWrapper_QGraphicsGridLayout::setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
 theWrappedObject->setVerticalSpacing(spacing);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return  theWrappedObject->rowMinimumHeight(row);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
 theWrappedObject->setRowMaximumHeight(row, height);
}

void PythonQtWrapper_QGraphicsGridLayout::setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
 theWrappedObject->setSpacing(spacing);
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return  theWrappedObject->columnAlignment(column);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
 theWrappedObject->setColumnMaximumWidth(column, width);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
 theWrappedObject->setRowPreferredHeight(row, height);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
 theWrappedObject->setRowMinimumHeight(row, height);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return  theWrappedObject->columnMinimumWidth(column);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch)
{
 theWrappedObject->setRowStretchFactor(row, stretch);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
 theWrappedObject->setRowFixedHeight(row, height);
}

void PythonQtWrapper_QGraphicsGridLayout::invalidate(QGraphicsGridLayout* theWrappedObject)
{
 ((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->promoted_invalidate();
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return  theWrappedObject->columnMaximumWidth(column);
}

int  PythonQtWrapper_QGraphicsGridLayout::count(QGraphicsGridLayout* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->promoted_count();
}

int  PythonQtWrapper_QGraphicsGridLayout::columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return  theWrappedObject->columnStretchFactor(column);
}

void PythonQtWrapper_QGraphicsGridLayout::addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, Qt::Alignment  alignment)
{
 theWrappedObject->addItem(item, row, column, alignment);
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
return  theWrappedObject->alignment(item);
}

int  PythonQtWrapper_QGraphicsGridLayout::columnCount(QGraphicsGridLayout* theWrappedObject) const
{
return  theWrappedObject->columnCount();
}

void PythonQtWrapper_QGraphicsGridLayout::setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment)
{
 theWrappedObject->setRowAlignment(row, alignment);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return  theWrappedObject->rowSpacing(row);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return  theWrappedObject->columnSpacing(column);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch)
{
 theWrappedObject->setColumnStretchFactor(column, stretch);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing)
{
 theWrappedObject->setRowSpacing(row, spacing);
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsGridLayout::itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const
{
return  theWrappedObject->itemAt(row, column);
}

void PythonQtWrapper_QGraphicsGridLayout::addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment)
{
 theWrappedObject->addItem(item, row, column, rowSpan, columnSpan, alignment);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
 theWrappedObject->setColumnFixedWidth(column, width);
}

void PythonQtWrapper_QGraphicsGridLayout::setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
 theWrappedObject->setHorizontalSpacing(spacing);
}

void PythonQtWrapper_QGraphicsGridLayout::removeAt(QGraphicsGridLayout* theWrappedObject, int  index)
{
 ((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->promoted_removeAt(index);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment)
{
 theWrappedObject->setColumnAlignment(column, alignment);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return  theWrappedObject->columnPreferredWidth(column);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::verticalSpacing(QGraphicsGridLayout* theWrappedObject) const
{
return  theWrappedObject->verticalSpacing();
}
