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

#include <McCadCSGGeom_SurfaceOfRevolution.jxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

//McCadCSGGeom_SurfaceOfRevolution::~McCadCSGGeom_SurfaceOfRevolution() {}
 


Standard_EXPORT Handle_Standard_Type& McCadCSGGeom_SurfaceOfRevolution_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(McCadCSGGeom_Surface);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadCSGGeom_SurfaceOfRevolution",
			                                 sizeof(McCadCSGGeom_SurfaceOfRevolution),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadCSGGeom_SurfaceOfRevolution) Handle(McCadCSGGeom_SurfaceOfRevolution)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadCSGGeom_SurfaceOfRevolution) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadCSGGeom_SurfaceOfRevolution))) {
       _anOtherObject = Handle(McCadCSGGeom_SurfaceOfRevolution)((Handle(McCadCSGGeom_SurfaceOfRevolution)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadCSGGeom_SurfaceOfRevolution::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadCSGGeom_SurfaceOfRevolution) ; 
}
//Standard_Boolean McCadCSGGeom_SurfaceOfRevolution::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadCSGGeom_SurfaceOfRevolution) == AType || McCadCSGGeom_Surface::IsKind(AType)); 
//}
//Handle_McCadCSGGeom_SurfaceOfRevolution::~Handle_McCadCSGGeom_SurfaceOfRevolution() {}

