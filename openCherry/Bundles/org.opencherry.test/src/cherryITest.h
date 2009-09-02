/*=========================================================================
 
 Program:   openCherry Platform
 Language:  C++
 Date:      $Date$
 Version:   $Revision$
 
 Copyright (c) German Cancer Research Center, Division of Medical and
 Biological Informatics. All rights reserved.
 See MITKCopyright.txt or http://www.mitk.org/copyright.html for details.
 
 This software is distributed WITHOUT ANY WARRANTY; without even
 the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 PURPOSE.  See the above copyright notices for more information.
 
 =========================================================================*/


#ifndef CHERRYITEST_H_
#define CHERRYITEST_H_

#include <cherryObject.h>
#include <cherryMacros.h>

#include <CppUnit/Test.h>

namespace cherry {

struct ITest : public Object
{
  cherryInterfaceMacro(ITest, cherry)

  virtual CppUnit::Test* GetTest() const = 0;
};

}

#endif /* CHERRYITEST_H_ */
