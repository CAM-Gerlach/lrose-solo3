#ifndef ThresholdCmd_HH
#define ThresholdCmd_HH

#ifdef USE_RADX
#include <Radx/RadxRay.hh>
#endif

#include <ForEachRayCmd.hh>

class ThresholdCmd : public ForEachRayCmd
{

public:

  ////////////////////
  // Public methods //
  ////////////////////

  /**
   * @brief Constructor.
   */

  ThresholdCmd();

  /**
   * @brief Destructor.
   */

  virtual ~ThresholdCmd();

#ifdef USE_RADX
  
  virtual bool doIt(const int frame_num, RadxRay &ray) const;

#else

  virtual bool doIt() const;

#endif  
  
  /**
   * @brief Clone this object.
   *
   * @return Returns a clone of this object.
   */

  virtual UiCommand *clone() const
  {
    return new ThresholdCmd(*this);
  }
  
protected:

  ///////////////////////
  // Protected members //
  ///////////////////////

  ///////////////////////
  // Protected methods //
  ///////////////////////

};

#endif
