

#include "MDIToolboxGuiPlugin.h"

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
MDIToolboxGuiPlugin::MDIToolboxGuiPlugin()
: MDIToolboxPlugin()
{
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
MDIToolboxGuiPlugin::~MDIToolboxGuiPlugin() = default;

#include "MDIToolbox/Gui/FilterParameterWidgets/RegisterKnownFilterParameterWidgets.cpp"
