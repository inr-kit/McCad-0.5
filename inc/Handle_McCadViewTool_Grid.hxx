// File generated by CPPExt (Transient)
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _Handle_McCadViewTool_Grid_HeaderFile
#define _Handle_McCadViewTool_Grid_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_McCadTool_Task_HeaderFile
#include <Handle_McCadTool_Task.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(McCadTool_Task);
class McCadViewTool_Grid;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(McCadViewTool_Grid);

class Handle(McCadViewTool_Grid) : public Handle(McCadTool_Task) {
  public:
    Handle(McCadViewTool_Grid)():Handle(McCadTool_Task)() {} 
    Handle(McCadViewTool_Grid)(const Handle(McCadViewTool_Grid)& aHandle) : Handle(McCadTool_Task)(aHandle) 
     {
     }

    Handle(McCadViewTool_Grid)(const McCadViewTool_Grid* anItem) : Handle(McCadTool_Task)((McCadTool_Task *)anItem) 
     {
     }

    Handle(McCadViewTool_Grid)& operator=(const Handle(McCadViewTool_Grid)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(McCadViewTool_Grid)& operator=(const McCadViewTool_Grid* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    McCadViewTool_Grid* operator->() const
     {
      return (McCadViewTool_Grid *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(McCadViewTool_Grid)();
 
   Standard_EXPORT static const Handle(McCadViewTool_Grid) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif
