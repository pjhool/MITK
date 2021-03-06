/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/
#ifndef mitkPersistenceActivator_h
#define mitkPersistenceActivator_h

// Microservices
#include "mitkPersistenceService.h"
#include <usModuleActivator.h>
#include <usServiceRegistration.h>

namespace mitk
{
  ///
  /// installs the PersistenceService
  /// runs all initial commands (setting env paths etc)
  ///
  class PersistenceActivator : public us::ModuleActivator
  {
  public:
    PersistenceActivator();
    void Load(us::ModuleContext *context) override;
    void Unload(us::ModuleContext *context) override;
    ~PersistenceActivator() override;

  private:
    itk::SmartPointer<mitk::PersistenceService> m_PersistenceService;
    us::ServiceRegistration<mitk::IPersistenceService> m_PersistenceServiceRegistration;
  };
}

US_EXPORT_MODULE_ACTIVATOR(mitk::PersistenceActivator)
#endif
