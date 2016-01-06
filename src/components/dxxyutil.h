#ifndef DXXYUTIL_H
#define DXXYUTIL_H

class DXXYUtil;

#include <hamlib/rig.h>

class DXXYUtil
{
public:    
    // Frequency String Generator
      enum string_format { Hz, KHz, MHz, GHz };
      static QString freq_string(freq_t f, string_format t, int decimal_points);
};

#endif // DXXYUTIL_H
