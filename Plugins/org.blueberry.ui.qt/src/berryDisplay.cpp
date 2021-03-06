/*===================================================================

BlueBerry Platform

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#include "berryDisplay.h"

#include <Poco/Bugcheck.h>

namespace berry {

Display* Display::instance = nullptr;

Display::~Display()
{

}

Display* Display::GetDefault()
{
  poco_assert(instance);
  return instance;
}

}
