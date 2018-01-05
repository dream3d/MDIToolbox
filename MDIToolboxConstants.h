/*
 * Your License should go here
 */
#ifndef _mditoolboxconstants_h_
#define _mditoolboxconstants_h_

#include <QtCore/QString>

/**
* @brief This namespace is used to define some Constants for the plugin itself.
*/
namespace MDIToolboxConstants
{
const QString MDIToolboxPluginFile("MDIToolboxPlugin");
const QString MDIToolboxPluginDisplayName("MDI Toolbox");
const QString MDIToolboxBaseName("MDIToolbox");

namespace FilterGroups
{
const QString MDIToolboxFilters("MDIToolbox");
}
}

/**
* @brief Use this namespace to define any custom GUI widgets that collect FilterParameters
* for a filter. Do NOT define general reusable widgets here.
*/
namespace FilterParameterWidgetType
{
/* const QString SomeCustomWidget("SomeCustomWidget"); */
}
#endif
