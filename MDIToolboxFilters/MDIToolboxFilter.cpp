/*
 * Your License or Copyright can go here
 */

#include "MDIToolboxFilter.h"

#include "SIMPLib/Common/Constants.h"

#include "MDIToolbox/MDIToolboxConstants.h"
#include "MDIToolbox/MDIToolboxVersion.h"

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
MDIToolboxFilter::MDIToolboxFilter()
{
  initialize();
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
MDIToolboxFilter::~MDIToolboxFilter() = default;

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void MDIToolboxFilter::initialize()
{
  clearErrorCondition();
  clearWarningCondition();
  setCancel(false);
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void MDIToolboxFilter::setupFilterParameters()
{
  FilterParameterVectorType parameters;

  setFilterParameters(parameters);
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void MDIToolboxFilter::dataCheck()
{
  clearErrorCondition();
  clearWarningCondition();
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void MDIToolboxFilter::preflight()
{
  // These are the REQUIRED lines of CODE to make sure the filter behaves correctly
  setInPreflight(true);              // Set the fact that we are preflighting.
  emit preflightAboutToExecute();    // Emit this signal so that other widgets can do one file update
  emit updateFilterParameters(this); // Emit this signal to have the widgets push their values down to the filter
  dataCheck();                       // Run our DataCheck to make sure everthing is setup correctly
  emit preflightExecuted();          // We are done preflighting this filter
  setInPreflight(false);             // Inform the system this filter is NOT in preflight mode anymore.
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void MDIToolboxFilter::execute()
{
  initialize();
  dataCheck();
  if(getErrorCode() < 0)
  {
    return;
  }

  if(getCancel())
  {
    return;
  }

}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
AbstractFilter::Pointer MDIToolboxFilter::newFilterInstance(bool copyFilterParameters) const
{
  MDIToolboxFilter::Pointer filter = MDIToolboxFilter::New();
  if(copyFilterParameters)
  {
    copyFilterParameterInstanceVariables(filter.get());
  }
  return filter;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
const QString MDIToolboxFilter::getCompiledLibraryName() const
{
  return MDIToolboxConstants::MDIToolboxBaseName;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
const QString MDIToolboxFilter::getBrandingString() const
{
  return "MDIToolbox";
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
const QString MDIToolboxFilter::getFilterVersion() const
{
  QString version;
  QTextStream vStream(&version);
  vStream << MDIToolbox::Version::Major() << "." << MDIToolbox::Version::Minor() << "." << MDIToolbox::Version::Patch();
  return version;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
const QString MDIToolboxFilter::getGroupName() const
{
  return SIMPL::FilterGroups::Unsupported;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
const QUuid MDIToolboxFilter::getUuid()
{
  return QUuid("{b1542279-caec-552e-a82b-bafefc58550f}");
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
const QString MDIToolboxFilter::getSubGroupName() const
{
  return "MDIToolbox";
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
const QString MDIToolboxFilter::getHumanLabel() const
{
  return "MDI::ToolboxFilter";
}
