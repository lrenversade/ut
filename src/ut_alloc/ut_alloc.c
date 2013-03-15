/* Copyright (C) 2007-2009, 2012 Romain Quey */
/* see the COPYING file in the top-level directory.*/

#include<stdio.h>
#include<stdlib.h>
#include"ut_alloc.h"
#include"ut.h"

double *
ut_alloc_1d_double (unsigned int size1)
{
  double *res = (double *) calloc (size1, sizeof (double));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

double *
ut_alloc_1d (unsigned int size1)
{
  return ut_alloc_1d_double (size1);
}

float *
ut_alloc_1d_float (unsigned int size1)
{
  float *res = (float *) calloc (size1, sizeof (float));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

int *
ut_alloc_1d_int (unsigned int size1)
{
  int *res = (int *) calloc (size1, sizeof (int));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

size_t *
ut_alloc_1d_sizet (unsigned int size1)
{
  size_t *res = (size_t *) calloc (size1, sizeof (size_t));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

unsigned int *
ut_alloc_1d_uint (unsigned int size1)
{
  unsigned int *res = (unsigned int *) calloc (size1, sizeof (int));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

unsigned short *
ut_alloc_1d_ushort (unsigned int size1)
{
  unsigned short *res = (unsigned short *) calloc (size1, sizeof (int));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

char *
ut_alloc_1d_char (unsigned int size1)
{
  char *res = (char *) calloc (size1, sizeof (char));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

unsigned char *
ut_alloc_1d_uchar (unsigned int size1)
{
  unsigned char *res = (unsigned char *) calloc (size1, sizeof (int));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

double **
ut_alloc_1d_pdouble (unsigned int size1)
{
  double **res = (double **) calloc (size1, sizeof (double *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

int **
ut_alloc_1d_pint (unsigned int size1)
{
  int **res = (int **) calloc (size1, sizeof (int *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

unsigned short **
ut_alloc_1d_pushort (unsigned int size1)
{
  unsigned short **res =
    (unsigned short **) calloc (size1, sizeof (unsigned short *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

unsigned char **
ut_alloc_1d_puchar (unsigned int size1)
{
  unsigned char **res =
    (unsigned char **) calloc (size1, sizeof (unsigned char *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

char **
ut_alloc_1d_pchar (unsigned int size1)
{
  char **res = (char **) calloc (size1, sizeof (char *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

int ***
ut_alloc_1d_ppint (unsigned int size1)
{
  int ***res = (int ***) calloc (size1, sizeof (int **));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

unsigned short ***
ut_alloc_1d_ppushort (unsigned int size1)
{
  unsigned short ***res = (unsigned short ***) calloc (size1, sizeof (int **));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

unsigned char ***
ut_alloc_1d_ppuchar (unsigned int size1)
{
  unsigned char ***res = (unsigned char ***) calloc (size1, sizeof (int **));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

double ***
ut_alloc_1d_ppdouble (unsigned int size1)
{
  double ***res = (double ***) calloc (size1, sizeof (double **));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

char ***
ut_alloc_1d_ppchar (unsigned int size1)
{
  char ***res = (char ***) calloc (size1, sizeof (char **));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

FILE **
ut_alloc_1d_pfile (unsigned int size1)
{
  FILE **res = (FILE **) calloc (size1, sizeof (FILE *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

int **
ut_alloc_2d_int (unsigned int size1, unsigned int column)
{
  unsigned int i;
  int **res = (int **) calloc (size1, sizeof (int *));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%d)\n", size1, column);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (int *) calloc (column, sizeof (int));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%d)\n", size1, column);
      abort ();
    }
  }

  return res;
}

unsigned short **
ut_alloc_2d_ushort (unsigned int size1, unsigned int column)
{
  unsigned int i;
  unsigned short **res =
    (unsigned short **) calloc (size1, sizeof (unsigned short *));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%d)\n", size1, column);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (unsigned short *) calloc (column, sizeof (unsigned short));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%d)\n", size1, column);
      abort ();
    }
  }

  return res;
}

unsigned char **
ut_alloc_2d_uchar (unsigned int size1, unsigned int column)
{
  unsigned int i;
  unsigned char **res =
    (unsigned char **) calloc (size1, sizeof (unsigned char *));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%d)\n", size1, column);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (unsigned char *) calloc (column, sizeof (unsigned char));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%d)\n", size1, column);
      abort ();
    }
  }

  return res;
}

unsigned int **
ut_alloc_2d_uint (unsigned int size1, unsigned int column)
{
  unsigned int i;
  unsigned int **res = (unsigned int **) calloc (size1, sizeof (int *));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%d)\n", size1, column);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (unsigned int *) calloc (column, sizeof (int));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%d)\n", size1, column);
      abort ();
    }
  }

  return res;
}

float **
ut_alloc_2d_float (unsigned int size1, unsigned int column)
{
  unsigned int i;
  float **res = (float **) calloc (size1, sizeof (float *));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%d)\n", size1, column);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (float *) calloc (column, sizeof (float));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%d)\n", size1, column);
      abort ();
    }
  }

  return res;
}

double **
ut_alloc_2d_double (unsigned int size1, unsigned int column)
{
  unsigned int i;
  double **res = (double **) calloc (size1, sizeof (double *));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%d)\n", size1, column);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (double *) calloc (column, sizeof (double));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%d)\n", size1, column);
      abort ();
    }
  }

  return res;
}

double **
ut_alloc_2d (unsigned int size1, unsigned int column)
{
  return ut_alloc_2d_double (size1, column);
}

char **
ut_alloc_2d_char (unsigned int size1, unsigned int column)
{
  unsigned int i;
  char **res = (char **) calloc (size1, sizeof (char *));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%d)\n", size1, column);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (char *) calloc (column, sizeof (char));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%d)\n", size1, column);
      abort ();
    }
  }

  return res;
}

char ***
ut_alloc_2d_pchar (unsigned int size1, unsigned int column)
{
  unsigned int i;
  char ***res = (char ***) calloc (size1, sizeof (char **));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%d)\n", size1, column);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (char **) calloc (column, sizeof (char *));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%d)\n", size1, column);
      abort ();
    }
  }

  return res;
}

int ***
ut_alloc_3d_int (unsigned int size1, unsigned int column, unsigned int size3)
{
  unsigned int i, j;
  int ***res = (int ***) calloc (size1, sizeof (int **));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (int **) calloc (column, sizeof (int *));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
      abort ();
    }

    for (j = 0; j < column; j++)
    {
      res[i][j] = (int *) calloc (size3, sizeof (int));
      if (!res[i][j])
      {
	printf ("memory allocation failed! (%dx%dx%d)\n", size1, column,
		size3);
	abort ();
      }
    }
  }

  return res;
}

unsigned short ***
ut_alloc_3d_ushort (unsigned int size1, unsigned int column,
		    unsigned int size3)
{
  unsigned int i, j;
  unsigned short ***res =
    (unsigned short ***) calloc (size1, sizeof (unsigned short **));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (unsigned short **) calloc (column, sizeof (unsigned short *));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
      abort ();
    }

    for (j = 0; j < column; j++)
    {
      res[i][j] = (unsigned short *) calloc (size3, sizeof (unsigned short));
      if (!res[i][j])
      {
	printf ("memory allocation failed! (%dx%dx%d)\n", size1, column,
		size3);
	abort ();
      }
    }
  }

  return res;
}

unsigned char ***
ut_alloc_3d_uchar (unsigned int size1, unsigned int column, unsigned int size3)
{
  unsigned int i, j;
  unsigned char ***res =
    (unsigned char ***) calloc (size1, sizeof (unsigned char **));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (unsigned char **) calloc (column, sizeof (unsigned char *));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
      abort ();
    }

    for (j = 0; j < column; j++)
    {
      res[i][j] = (unsigned char *) calloc (size3, sizeof (unsigned char));
      if (!res[i][j])
      {
	printf ("memory allocation failed! (%dx%dx%d)\n", size1, column,
		size3);
	abort ();
      }
    }
  }

  return res;
}

unsigned int ***
ut_alloc_3d_uint (unsigned int size1, unsigned int column, unsigned int size3)
{
  unsigned int i, j;
  unsigned int ***res = (unsigned int ***) calloc (size1, sizeof
						   (unsigned int **));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (unsigned int **) calloc (column, sizeof (unsigned int *));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
      abort ();
    }

    for (j = 0; j < column; j++)
    {
      res[i][j] = (unsigned int *) calloc (size3, sizeof (unsigned int));
      if (!res[i][j])
      {
	printf ("memory allocation failed! (%dx%dx%d)\n", size1, column,
		size3);
	abort ();
      }
    }
  }

  return res;
}

double ***
ut_alloc_3d_double (unsigned int size1, unsigned int column,
		    unsigned int size3)
{
  unsigned int i, j;
  double ***res = (double ***) calloc (size1, sizeof (double **));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (double **) calloc (column, sizeof (double *));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
      abort ();
    }

    for (j = 0; j < column; j++)
    {
      res[i][j] = (double *) calloc (size3, sizeof (double));
      if (!res[i][j])
      {
	printf ("memory allocation failed! (%dx%dx%d)\n", size1, column,
		size3);
	abort ();
      }
    }
  }

  return res;
}

float ***
ut_alloc_3d_float (unsigned int size1, unsigned int column, unsigned int size3)
{
  unsigned int i, j;
  float ***res = (float ***) calloc (size1, sizeof (float **));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (float **) calloc (column, sizeof (float *));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
      abort ();
    }

    for (j = 0; j < column; j++)
    {
      res[i][j] = (float *) calloc (size3, sizeof (float));
      if (!res[i][j])
      {
	printf ("memory allocation failed! (%dx%dx%d)\n", size1, column,
		size3);
	abort ();
      }
    }
  }

  return res;
}

double ***
ut_alloc_3d (unsigned int size1, unsigned int column, unsigned int size3)
{
  return ut_alloc_3d_double (size1, column, size3);
}

char ***
ut_alloc_3d_char (unsigned int size1, unsigned int column, unsigned int size3)
{
  unsigned int i, j;
  char ***res = (char ***) calloc (size1, sizeof (char **));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
    abort ();
  }

  for (i = 0; i < size1; i++)
  {
    res[i] = (char **) calloc (column, sizeof (char *));
    if (!res[i])
    {
      printf ("memory allocation failed! (%dx%dx%d)\n", size1, column, size3);
      abort ();
    }
    for (j = 0; j < column; j++)
    {
      res[i][j] = (char *) calloc (size3, sizeof (char));
      if (!res[i])
      {
	printf ("memory allocation failed! (%dx%dx%d)\n", size1, column,
		size3);
	abort ();
      }
    }
  }

  return res;
}

double ****
ut_alloc_4d_double (unsigned int dim1, unsigned int dim2,
		    unsigned int dim3, unsigned int dim4)
{
  unsigned int i, j, k;
  double ****res = (double ****) calloc (dim1, sizeof (double ***));
  if (!res)
  {
    printf ("memory allocation failed! (%dx%dx%dx%d)\n", dim1, dim2, dim3,
	    dim4);
    abort ();
  }

  for (i = 0; i < dim1; i++)
  {
    res[i] = (double ***) calloc (dim2, sizeof (double **));
    if (!res[i])
    {
      printf ("memory allocation failed!\n");
      abort ();
    }

    for (j = 0; j < dim2; j++)
    {
      res[i][j] = (double **) calloc (dim3, sizeof (double *));
      if (!res[i][j])
      {
	printf ("memory allocation failed!\n");
	abort ();
      }

      for (k = 0; k < dim3; k++)
      {
	res[i][j][k] = (double *) calloc (dim4, sizeof (double));
	if (!res[i][j][k])
	{
	  printf ("memory allocation failed!\n");
	  abort ();
	}
      }
    }
  }

  return res;
}

double ****
ut_alloc_4d (unsigned int dim1, unsigned int dim2,
	     unsigned int dim3, unsigned int dim4)
{
  return ut_alloc_4d_double (dim1, dim2, dim3, dim4);
}

int *
ut_realloc_1d_int (int *res, unsigned int size1)
{
  if (size1 == 0)
  {
    ut_free_1d_int (res);
    return NULL;
  }
  else
  {
    res = (int *) realloc (res, size1 * sizeof (int));
    if (!res)
    {
      printf ("memory allocation failed! (%d)\n", size1);
      abort ();
    }
  }

  return res;
}

unsigned short *
ut_realloc_1d_ushort (unsigned short *res, unsigned int size1)
{
  if (size1 == 0)
  {
    ut_free_1d_ushort (res);
    return NULL;
  }
  else
  {
    res = (unsigned short *) realloc (res, size1 * sizeof (unsigned short));
    if (!res)
    {
      printf ("memory allocation failed! (%d)\n", size1);
      abort ();
    }
  }

  return res;
}

unsigned char *
ut_realloc_1d_uchar (unsigned char *res, unsigned int size1)
{
  if (size1 == 0)
  {
    ut_free_1d_uchar (res);
    return NULL;
  }
  else
  {
    res = (unsigned char *) realloc (res, size1 * sizeof (unsigned char));
    if (!res)
    {
      printf ("memory allocation failed! (%d)\n", size1);
      abort ();
    }
  }

  return res;
}

double *
ut_realloc_1d (double *res, unsigned int size1)
{
  if (size1 == 0)
  {
    ut_free_1d (res);
    return NULL;
  }
  else
  {
    res = (double *) realloc (res, size1 * sizeof (double));
    if (!res)
    {
      printf ("memory allocation failed! (%d)\n", size1);
      abort ();
    }
  }

  return res;
}

char *
ut_realloc_1d_char (char *res, unsigned int size1)
{
  if (size1 == 0)
  {
    ut_free_1d_char (res);
    return NULL;
  }
  else
  {
    res = (char *) realloc (res, size1 * sizeof (char));
    if (!res)
    {
      printf ("memory allocation failed! (%d)\n", size1);
      abort ();
    }
  }

  return res;
}
int **
ut_realloc_1d_pint (int **res, unsigned int size1)
{
  res = realloc (res, size1 * sizeof (int *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

unsigned short **
ut_realloc_1d_pushort (unsigned short **res, unsigned int size1)
{
  res = realloc (res, size1 * sizeof (unsigned short *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

unsigned char **
ut_realloc_1d_puchar (unsigned char **res, unsigned int size1)
{
  res = realloc (res, size1 * sizeof (unsigned char *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

char **
ut_realloc_1d_pchar (char **res, unsigned int size1)
{
  res = realloc (res, size1 * sizeof (char *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

double **
ut_realloc_1d_pdouble (double **res, unsigned int size1)
{
  res = realloc (res, size1 * sizeof (double *));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

double ***
ut_realloc_1d_ppdouble (double ***res, unsigned int size1)
{
  res = realloc (res, size1 * sizeof (double **));
  if (!res)
  {
    printf ("memory allocation failed! (%d)\n", size1);
    abort ();
  }

  return res;
}

int **
ut_realloc_2d_int_addline (int **array, int size1, int size2)
{
  array = ut_realloc_1d_pint (array, size1);
  array[size1 - 1] = ut_alloc_1d_int (size2);

  return array;
}

unsigned short **
ut_realloc_2d_ushort_addline (unsigned short **array, int size1, int size2)
{
  array = ut_realloc_1d_pushort (array, size1);
  array[size1 - 1] = ut_alloc_1d_ushort (size2);

  return array;
}

unsigned char **
ut_realloc_2d_uchar_addline (unsigned char **array, int size1, int size2)
{
  array = ut_realloc_1d_puchar (array, size1);
  array[size1 - 1] = ut_alloc_1d_uchar (size2);

  return array;
}

double **
ut_realloc_2d_addline (double **array, int size1, int size2)
{
  array = ut_realloc_1d_pdouble (array, size1);
  array[size1 - 1] = ut_alloc_1d (size2);

  return array;
}

char **
ut_realloc_2d_char_addline (char **array, int size1, int size2)
{
  array = ut_realloc_1d_pchar (array, size1);
  array[size1 - 1] = ut_alloc_1d_char (size2);

  return array;
}

int **
ut_realloc_2d_int_delline (int **array, int size1old, int size1)
{
  int i;
  for (i = size1old - 1; i >= size1; i--)
    ut_free_1d_int (array[i]);
  array = ut_realloc_1d_pint (array, size1);

  return array;
}

unsigned short **
ut_realloc_2d_ushort_delline (unsigned short **array, int size1old, int size1)
{
  int i;
  for (i = size1old - 1; i >= size1; i--)
    ut_free_1d_ushort (array[i]);
  array = ut_realloc_1d_pushort (array, size1);

  return array;
}

unsigned char **
ut_realloc_2d_uchar_delline (unsigned char **array, int size1old, int size1)
{
  int i;
  for (i = size1old - 1; i >= size1; i--)
    ut_free_1d_uchar (array[i]);
  array = ut_realloc_1d_puchar (array, size1);

  return array;
}

double **
ut_realloc_2d_delline (double **array, int size1old, int size1)
{
  int i;
  for (i = size1old - 1; i >= size1; i--)
    ut_free_1d (array[i]);
  array = ut_realloc_1d_pdouble (array, size1);

  return array;
}

double ***
ut_realloc_3d_addarray (double ***array, int size1, int size2, int size3)
{
  array = ut_realloc_1d_ppdouble (array, size1);
  array[size1 - 1] = ut_alloc_2d (size2, size3);

  return array;
}
