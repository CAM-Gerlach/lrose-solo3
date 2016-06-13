#ifndef CopyCmd_HH
#define CopyCmd_HH

#ifdef USE_RADX
#include <Radx/RadxRay.hh>
#endif

#include <ForEachRayCmd.hh>

class CopyCmd : public ForEachRayCmd
{

public:

  ////////////////////
  // Public methods //
  ////////////////////

  /**
   * @brief Constructor.
   */

  CopyCmd();

  /**
   * @brief Destructor.
   */

  virtual ~CopyCmd();

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
    return new CopyCmd(*this);
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
