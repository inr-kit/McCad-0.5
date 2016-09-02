// File generated by CPPExt (Value)
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

#ifndef _McCadGUI_BaseDialog_HeaderFile
#define _McCadGUI_BaseDialog_HeaderFile

#ifndef _McCadGUI_TypeOfDialog_HeaderFile
#include <McCadGUI_TypeOfDialog.hxx>
#endif
#ifndef _McCadGUI_LevelOfDialog_HeaderFile
#include <McCadGUI_LevelOfDialog.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TCollection_AsciiString;
class Quantity_Color;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class McCadGUI_BaseDialog {

public:

    void* operator new(size_t,void* anAddress)
      {
        return anAddress;
      }
    void* operator new(size_t size)
      {
        return Standard::Allocate(size);
      }
    void  operator delete(void *anAddress)
      {
        if (anAddress) Standard::Free((Standard_Address&)anAddress);
      }
 // Methods PUBLIC
 //

//! This is abstract gui base class: <br>
Standard_EXPORT McCadGUI_BaseDialog();


Standard_EXPORT virtual  void SetType(const McCadGUI_TypeOfDialog theType) ;

//! Deletes t<me>. <br>
Standard_EXPORT virtual  void Destroy() ;
~McCadGUI_BaseDialog()
{
  Destroy();
}



Standard_EXPORT virtual  McCadGUI_TypeOfDialog GetType() const;


Standard_EXPORT virtual  void SetLevel(const McCadGUI_LevelOfDialog theLevel) ;


Standard_EXPORT virtual  McCadGUI_LevelOfDialog GetLevel() const;


Standard_EXPORT virtual  void SetText(const TCollection_AsciiString& theText) ;


Standard_EXPORT virtual  TCollection_AsciiString GetText() const;


Standard_EXPORT virtual  void Print() ;


Standard_EXPORT virtual  void Print(const TCollection_AsciiString& theText) ;


Standard_EXPORT virtual  void Print(const McCadGUI_LevelOfDialog theLevel,const TCollection_AsciiString& theText) ;


Standard_EXPORT virtual  void SetStream(Standard_OStream& theStream) ;


Standard_EXPORT virtual  Quantity_Color GetColor() const;


Standard_EXPORT virtual  void SetColor(const Quantity_Color& theColor) ;


Standard_EXPORT virtual  TCollection_AsciiString SelectedFile() const;


Standard_EXPORT virtual  TCollection_AsciiString SelectedFilter() const;


Standard_EXPORT virtual  void SetSelectedFilter(const TCollection_AsciiString& theMask) ;


Standard_EXPORT virtual  void SetSelection(const TCollection_AsciiString& theFileName) ;


Standard_EXPORT virtual  Standard_Integer GetInteger() const;


Standard_EXPORT virtual  Standard_Real GetReal() const;


Standard_EXPORT virtual  void SetTotalSteps(const Standard_Integer theTotalSteps) ;


Standard_EXPORT virtual  void SetProgress(const Standard_Integer theProgressPositin) ;


Standard_EXPORT virtual  void SetLabelText(const TCollection_AsciiString& theLabelText) ;


Standard_EXPORT virtual  void SetCancelButtonText(const TCollection_AsciiString& theCancelButtonText) ;


Standard_EXPORT virtual  void Cancel() ;



//signals:
//	void updateProgress(int); //updates Progress relative to total amount of steps
//	void setRange(int,int);//define range of steps (0,NumberOfSteps) to update progress


protected:

 // Methods PROTECTED
 //


 // Fields PROTECTED
 //
McCadGUI_TypeOfDialog myType;
McCadGUI_LevelOfDialog myLevel;
TCollection_AsciiString myText;


private:

 // Methods PRIVATE
 //


 // Fields PRIVATE
 //


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif