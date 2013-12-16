///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2007 - 2013.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef _UTIL_NONCOPYABLE_2008_12_16_H_
  #define _UTIL_NONCOPYABLE_2008_12_16_H_

  // A non-copyable base class, based on boost::noncopyable.

  namespace util
  {
    class noncopyable
    {
    protected:
      noncopyable() {}
      ~noncopyable() {}

    // Emphasize: The following members are private.
    private:
      noncopyable(const noncopyable&);
      const noncopyable& operator=(const noncopyable&);
    };
  }

#endif // _UTIL_NONCOPYABLE_2008_12_16_H_
