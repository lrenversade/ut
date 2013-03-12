/* Copyright (C) 2007-2009, 2012 Romain Quey */
/* see the COPYING file in the top-level directory.*/

/// \file ut_tensor.h
/// \brief
/// \author Romain Quey
/// \bug No known bugs
/// \todo Document and sort by increasing complexity

#ifndef UT_TENSOR_H
#define UT_TENSOR_H

extern void ut_tensor_vec2leq (double *, double *);
extern void ut_tensor_leq2vec (double *, double *);
extern void ut_tensor_std2leq (double *, double *);
extern void ut_tensor_leq2std (double *, double *);
extern void ut_tensor_leq2mat (double *, double **);
extern void ut_tensor_mat2leq (double **, double *);

#endif /* UT_TENSOR_H */
