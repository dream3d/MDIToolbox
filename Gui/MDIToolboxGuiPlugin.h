#pragma once

#include "MDIToolbox/MDIToolboxPlugin.h"

class MDIToolboxGuiPlugin : public MDIToolboxPlugin
{
  Q_OBJECT
  Q_INTERFACES(ISIMPLibPlugin)
  Q_PLUGIN_METADATA(IID "net.bluequartz.dream3d.MDIToolboxGuiPlugin")

public:
  MDIToolboxGuiPlugin();
   ~MDIToolboxGuiPlugin() override;
  
  /**
   * @brief Register all the filters with the FilterWidgetFactory
   */
  void registerFilterWidgets(FilterWidgetManager* fwm) override;
  

public:
  MDIToolboxGuiPlugin(const MDIToolboxGuiPlugin&) = delete;            // Copy Constructor Not Implemented
  MDIToolboxGuiPlugin(MDIToolboxGuiPlugin&&) = delete;                 // Move Constructor Not Implemented
  MDIToolboxGuiPlugin& operator=(const MDIToolboxGuiPlugin&) = delete; // Copy Assignment Not Implemented
  MDIToolboxGuiPlugin& operator=(MDIToolboxGuiPlugin&&) = delete;      // Move Assignment Not Implemented
};
