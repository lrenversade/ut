/* Copyright (C) 2007-2009, 2012 Romain Quey */
/* see the COPYING file in the top-level directory.*/

/// \mainpage  UT library: A collection of general-purpose C utilities
///
/// <h2> Description </h2>
///
/// The UT library is a general-purpose C utility library, which
/// includes functions for:
/// <ul>
/// <li> Memory allocation and free'ing
///
/// <li> Operations on arrays
///
/// <li> Operations on vectors and matrices
///
/// <li> Geometrical transformations
///
/// <li> ...
/// </ul>
///   
/// Functions are prefixed 'ut_' and macros are prefixed 'UT_'.
/// Details can be obtained by following the links above.
///
/// <h2> Installation </h2>
///
/// The UT library is written in (mostly ANSI) C. It can be compiled using Cmake, a
/// standard open-source build system. The main steps are as follows,
///
/// <ul>
/// <li> Create a 'build' directory, for example as a subdirectory
///      of UT's 'src' directory,<br>
///
///      $ mkdir build
///
/// <li> Run cmake from within the 'build' directory, pointing to
///      UT's 'src' directory,
///
///      $ cd build <br>
///      $ cmake ..
///
/// <li> To build and install UT, then simply type,
///
///      $ make <br>
///      $ make install (as root)
/// </ul>
///
/// This will use the default configuration options and should work out
/// of the box on condition that the required libraries are available and
/// installed in standard system locations.  A finer configuration can
/// be achieved before building UT, as described in the following.
///
/// The UT library has a few optional dependencies, which are quite
/// standard and enabled by default: libpng, GSL and libmatheval.
/// They can be toggled off using Cmake's GUI ('cmake-gui') or 'ccmake'.
///
/// \see This documentation is generated using doxygen.
/// <ul>
/// <li> homepage: http://www.doxygen.org
/// <li> quick start: http://www.cs.cmu.edu/~410/doc/doxygen.html
/// <li> others: https://www.icts.uiowa.edu/confluence/display/ICTSit/Doxygen+Examples
/// </ul>

/// \file ut.h
/// \brief Main header file which includes all other header files.
/// \author Romain Quey
/// \bug No known bugs

/// <p/> <br/>

#include "ut_config.h"
#include "ut_alloc.h"
#include "ut_arg.h"
#include "ut_array.h"
#include "ut_color.h"
#include "ut_file.h"
#include "ut_free.h"
#include "ut_math.h"
#include "ut_mat.h"
#include "ut_linalg.h"
#include "ut_num.h"
#include "ut_option.h"
#include "ut_png.h"
#include "ut_print.h"
#include "ut_space.h"
#include "ut_string.h"
#include "ut_sys.h"
#include "ut_tensor.h"
#include "ut_time.h"
#include "ut_vector.h"
#include "ut_legacy.h"
