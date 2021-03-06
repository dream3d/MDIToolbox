/*
 * Your License or Copyright can go here
 */

#pragma once

#include <memory>

#include "SIMPLib/Filtering/AbstractFilter.h"
#include "SIMPLib/SIMPLib.h"

#include "MDIToolbox/MDIToolboxDLLExport.h"

/**
 * @brief The MDIToolboxFilter class. See [Filter documentation](@ref mditoolboxfilter) for details.
 */
class MDIToolbox_EXPORT MDIToolboxFilter : public AbstractFilter
{
  Q_OBJECT

public:
  using Self = MDIToolboxFilter;
  using Pointer = std::shared_ptr<Self>;
  using ConstPointer = std::shared_ptr<const Self>;
  using WeakPointer = std::weak_ptr<Self>;
  using ConstWeakPointer = std::weak_ptr<const Self>;
  static Pointer NullPointer();

  static std::shared_ptr<MDIToolboxFilter> New();

  /**
   * @brief Returns the name of the class for MDIToolboxFilter
   */
  QString getNameOfClass() const override;
  /**
   * @brief Returns the name of the class for MDIToolboxFilter
   */
  static QString ClassName();

  ~MDIToolboxFilter() override;

  /**
   * @brief getCompiledLibraryName Reimplemented from @see AbstractFilter class
   */
  QString getCompiledLibraryName() const override;

  /**
   * @brief getBrandingString Returns the branding string for the filter, which is a tag
   * used to denote the filter's association with specific plugins
   * @return Branding string
  */
  QString getBrandingString() const override;

  /**
   * @brief getFilterVersion Returns a version string for this filter. Default
   * value is an empty string.
   * @return
   */
  QString getFilterVersion() const override;

  /**
   * @brief newFilterInstance Reimplemented from @see AbstractFilter class
   */
  AbstractFilter::Pointer newFilterInstance(bool copyFilterParameters) const override;

  /**
   * @brief getGroupName Reimplemented from @see AbstractFilter class
   */
  QString getGroupName() const override;

  /**
   * @brief getSubGroupName Reimplemented from @see AbstractFilter class
   */
  QString getSubGroupName() const override;

  /**
   * @brief getUuid Return the unique identifier for this filter.
   * @return A QUuid object.
   */
  QUuid getUuid() const override;

  /**
   * @brief getHumanLabel Reimplemented from @see AbstractFilter class
   */
  QString getHumanLabel() const override;

  /**
   * @brief setupFilterParameters Reimplemented from @see AbstractFilter class
   */
  void setupFilterParameters() override;

  /**
   * @brief execute Reimplemented from @see AbstractFilter class
   */
  void execute() override;

  /**
  * @brief preflight Reimplemented from @see AbstractFilter class
  */
  void preflight() override;

signals:
  /**
   * @brief updateFilterParameters Emitted when the Filter requests all the latest Filter parameters
   * be pushed from a user-facing control (such as a widget)
   * @param filter Filter instance pointer
   */
  void updateFilterParameters(AbstractFilter* filter);

  /**
   * @brief parametersChanged Emitted when any Filter parameter is changed internally
   */
  void parametersChanged();

  /**
   * @brief preflightAboutToExecute Emitted just before calling dataCheck()
   */
  void preflightAboutToExecute();

  /**
   * @brief preflightExecuted Emitted just after calling dataCheck()
   */
  void preflightExecuted();

protected:
  MDIToolboxFilter();

  /**
  * @brief dataCheck Checks for the appropriate parameter values and availability of arrays
  */
  void dataCheck();

  /**
  * @brief Initializes all the private instance variables.
  */
  void initialize();

public:
  MDIToolboxFilter(const MDIToolboxFilter&) = delete; // Copy Constructor Not Implemented
  MDIToolboxFilter(MDIToolboxFilter&&) = delete;      // Move Constructor Not Implemented
  MDIToolboxFilter& operator=(const MDIToolboxFilter&) = delete; // Copy Assignment Not Implemented
  MDIToolboxFilter& operator=(MDIToolboxFilter&&) = delete;      // Move Assignment Not Implemented

private:
};

