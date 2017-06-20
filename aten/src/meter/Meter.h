#ifndef XT_METER_H
#define XT_METER_H

#include "TensorLib/TensorLib.h"

using namespace tlib;

class Meter
{
public:
   virtual void add(Tensor& output, Tensor& target) = 0;
   virtual void value(Tensor& val) = 0;
   virtual void reset() = 0;
  virtual ~Meter() {};
};

#endif
