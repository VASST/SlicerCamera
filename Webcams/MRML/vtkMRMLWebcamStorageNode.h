/*=auto=========================================================================

Portions (c) Copyright 2018 Robarts Research Institute. All Rights Reserved.

See COPYRIGHT.txt
or http://www.slicer.org/copyright/copyright.txt for details.

Program:   3D Slicer
Module:    $RCSfile: vtkMRMLWebcamStorageNode.h,v $
Date:      $Date: 2018/6/16 10:54:09 $
Version:   $Revision: 1.0 $

=========================================================================auto=*/

#ifndef __vtkMRMLWebcamStorageNode_h
#define __vtkMRMLWebcamStorageNode_h

// MRML includes
#include "vtkSlicerWebcamsModuleMRMLExport.h"

// Slicer includes
#include "vtkMRMLStorageNode.h"

class vtkMRMLWebcamNode;

/// \brief MRML node for camera storage on disk.
///
/// Webcams storage nodes have methods to read/write camera calibration details to/from disk.
class VTK_SLICER_WEBCAMS_MODULE_MRML_EXPORT vtkMRMLWebcamStorageNode : public vtkMRMLStorageNode
{
public:
  static vtkMRMLWebcamStorageNode* New();
  vtkTypeMacro(vtkMRMLWebcamStorageNode, vtkMRMLStorageNode);
  void PrintSelf(ostream& os, vtkIndent indent) VTK_OVERRIDE;

  virtual vtkMRMLNode* CreateNodeInstance() VTK_OVERRIDE;

  ///
  /// Get node XML tag name (like Storage, Model)
  virtual const char* GetNodeTagName() VTK_OVERRIDE  {return "WebcamStorage";}

  /// Return true if the reference node can be read in
  virtual bool CanReadInReferenceNode(vtkMRMLNode* refNode) VTK_OVERRIDE;

protected:
  vtkMRMLWebcamStorageNode();
  ~vtkMRMLWebcamStorageNode();
  vtkMRMLWebcamStorageNode(const vtkMRMLWebcamStorageNode&);
  void operator=(const vtkMRMLWebcamStorageNode&);

  /// Initialize all the supported read file types
  virtual void InitializeSupportedReadFileTypes() VTK_OVERRIDE;

  /// Initialize all the supported write file types
  virtual void InitializeSupportedWriteFileTypes() VTK_OVERRIDE;

  /// Get data node that is associated with this storage node
  vtkMRMLWebcamNode* GetAssociatedDataNode();

  /// Read data and set it in the referenced node
  virtual int ReadDataInternal(vtkMRMLNode* refNode) VTK_OVERRIDE;

  /// Write data from a  referenced node
  virtual int WriteDataInternal(vtkMRMLNode* refNode) VTK_OVERRIDE;

};

#endif
