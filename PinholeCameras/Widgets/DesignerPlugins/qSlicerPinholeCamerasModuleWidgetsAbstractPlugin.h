/*=auto=========================================================================

Portions (c) Copyright 2018 Robarts Research Institute. All Rights Reserved.

See COPYRIGHT.txt
or http://www.slicer.org/copyright/copyright.txt for details.

Program:   3D Slicer
Module:    $RCSfile: qSlicerPinholeCamerasModuleWidgetsAbstractPlugin.h,v $
Date:      $Date: 2018/6/16 10:54:09 $
Version:   $Revision: 1.0 $

=========================================================================auto=*/

#ifndef __qSlicerPinholeCamerasModuleWidgetsAbstractPlugin_h
#define __qSlicerPinholeCamerasModuleWidgetsAbstractPlugin_h

#include <QtGlobal>
#if (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
  #include <QDesignerCustomWidgetInterface>
#else
  #include <QtUiPlugin/QDesignerCustomWidgetInterface>
#endif

#include "qSlicerPinholeCamerasModuleWidgetsPluginsExport.h"

class Q_SLICER_MODULE_PINHOLECAMERAS_WIDGETS_PLUGINS_EXPORT qSlicerPinholeCamerasModuleWidgetsAbstractPlugin
  : public QDesignerCustomWidgetInterface
{
  Q_INTERFACES(QDesignerCustomWidgetInterface);

public:
  qSlicerPinholeCamerasModuleWidgetsAbstractPlugin();
  // Don't reimplement this method.
  QString group() const;
  // You can reimplement these methods
  virtual QIcon icon() const;
  virtual QString toolTip() const;
  virtual QString whatsThis() const;

};

#endif
