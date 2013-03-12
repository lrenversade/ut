/* Copyright (C) 2007-2009, 2012 Romain Quey */
/* see the COPYING file in the top-level directory.*/

/// \file ut_color.h
/// \brief
/// \author Romain Quey
/// \bug No known bugs
/// \todo Document and sort the functions by increasing complexity;
/// prefix ut_ if relevant

extern int ut_color_name_valid (char*);
extern int ut_color_name_rgb (char *, int *);
extern int name2rgb (char *, int *);
extern void rgb_intensity (int *, double, int *);
extern int ut_color_scheme_val_color (char*, double, double, double, int*);
