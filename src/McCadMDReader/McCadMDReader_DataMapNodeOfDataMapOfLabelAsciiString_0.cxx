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

#include <McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _TDF_Label_HeaderFile
#include <TDF_Label.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _TDF_LabelMapHasher_HeaderFile
#include <TDF_LabelMapHasher.hxx>
#endif
#ifndef _McCadMDReader_DataMapOfLabelAsciiString_HeaderFile
#include <McCadMDReader_DataMapOfLabelAsciiString.hxx>
#endif
#ifndef _McCadMDReader_DataMapIteratorOfDataMapOfLabelAsciiString_HeaderFile
#include <McCadMDReader_DataMapIteratorOfDataMapOfLabelAsciiString.hxx>
#endif
//McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString::~McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString() {}
 


Standard_EXPORT Handle_Standard_Type& McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(TCollection_MapNode);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString",
			                                 sizeof(McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString) Handle(McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString))) {
       _anOtherObject = Handle(McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString)((Handle(McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString) ; 
}
//Standard_Boolean McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString) == AType || TCollection_MapNode::IsKind(AType)); 
//}
//Handle_McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString::~Handle_McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString() {}
#define TheKey TDF_Label
#define TheKey_hxx <TDF_Label.hxx>
#define TheItem TCollection_AsciiString
#define TheItem_hxx <TCollection_AsciiString.hxx>
#define Hasher TDF_LabelMapHasher
#define Hasher_hxx <TDF_LabelMapHasher.hxx>
#define TCollection_DataMapNode McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString
#define TCollection_DataMapNode_hxx <McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString.hxx>
#define TCollection_DataMapIterator McCadMDReader_DataMapIteratorOfDataMapOfLabelAsciiString
#define TCollection_DataMapIterator_hxx <McCadMDReader_DataMapIteratorOfDataMapOfLabelAsciiString.hxx>
#define Handle_TCollection_DataMapNode Handle_McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString
#define TCollection_DataMapNode_Type_() McCadMDReader_DataMapNodeOfDataMapOfLabelAsciiString_Type_()
#define TCollection_DataMap McCadMDReader_DataMapOfLabelAsciiString
#define TCollection_DataMap_hxx <McCadMDReader_DataMapOfLabelAsciiString.hxx>
#include <TCollection_DataMapNode.gxx>
