/*=auto=========================================================================

Portions (c) Copyright 2018 Robarts Research Institute. All Rights Reserved.

See COPYRIGHT.txt
or http://www.slicer.org/copyright/copyright.txt for details.

Program:   3D Slicer
Module:    $RCSfile: qMRMLWebcamIntrinsicsWidgetPlugin.h,v $
Date:      $Date: 2018/6/16 10:54:09 $
Version:   $Revision: 1.0 $

=========================================================================auto=*/

#ifndef __qMRMLWebcamIntrinsicsWidgetPlugin_h
#define __qMRMLWebcamIntrinsicsWidgetPlugin_h

#include "qSlicerWebcamsModuleWidgetsAbstractPlugin.h"

class Q_SLICER_MODULE_WEBCAMS_WIDGETS_PLUGINS_EXPORT
  qMRMLWebcamIntrinsicsWidgetPlugin
  : public QObject, public qSlicerWebcamsModuleWidgetsAbstractPlugin
{
  Q_OBJECT

public:
  qMRMLWebcamIntrinsicsWidgetPlugin(QObject* _parent = 0);

  QWidget* createWidget(QWidget* _parent);
  QString domXml() const;
  QString includeFile() const;
  bool isContainer() const;
  QString name() const;

};

#endif
