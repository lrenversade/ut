/* Copyright (C) 2007-2009, 2012 Romain Quey */
/* see the COPYING file in the top-level directory.*/

/// \file ut_array.h
/// \brief
/// \author Romain Quey
/// \bug No known bugs
/// \todo Document and sort the functions by increasing complexity

#ifndef UT_ARRAY_H
#define UT_ARRAY_H

/// \brief Scale a 1D array of double-precision numbers.
/// \param array array to scale.
/// \param size size of the array.
/// \param factor scaling factor.
/// \retval array scaled array (same as input).
/// \return void.
extern void ut_array_1d_scale (double* array, int size, double factor);

/// \brief Scale by 'factor' a 1D array of integer numbers. 
/// \param array array to scale.
/// \param size size of the array.
/// \retval array scaled array (same as input).
/// \return void.
extern void ut_array_1d_int_scale (int* array, int size, int factor);

/// \brief Add two 1D arrays of double-precision numbers.
/// \param array1 1st input array.
/// \param array2 2nd input array.
/// \param size size of arrays array1 and array2.
/// \retval array result array.
/// \return void.
extern void ut_array_1d_add (double* array1, double* array2, int size, double *array);
//

/// \brief Add two 1D arrays of integer numbers.
/// \param array1 1st input array. 
/// \param array2 2nd input array.
/// \param size size of arrays array 1 and array2.
/// \retval array result array.
/// \return void. 
extern void ut_array_1d_int_add (int *array1, int *array2, int size, int
    *array);


/// \brief Add double value 'val' to each element of an 1D array of double-precision numbers.
/// \param array1 initial value of the array.
/// \param size size of the array.
/// \param val value added to each element of the array.
/// \retval array result array.
/// \return void. 
extern void ut_array_1d_addval (double *array1, int size, double val,
    double *array);
//

/// \brief Add two 2D arrays of double-precision numbers.
/// \param array1 1st input array.
/// \param array2 2nd input array.
/// \param size1 arrays size on the first dimension.
/// \param size2 arrays size on the second dimension.
/// \retval array result array. 
/// \return void.
extern void ut_array_2d_add (double **array1, double **array2, int size1, int
    size2, double **array);
//

/// \brief Add two 3D arrays of double-precision numbers. 
/// \param array1 1st input array.
/// \param array2 2nd input array.
/// \param size1 arrays size on the first dimension.
/// \param size2 arrays size on the second dimension.
/// \param size3 arrays size on the third dimension. 
/// \retval array result array.
extern void ut_array_3d_add (double ***array1, double ***array2, int size1, int
    size2, int size3, double ***array);
//

/// \brief Add two 3D arrays of double-precision numbers. 
/// \param array1 1st input array.
/// \param array2 2nd input array.
/// \param size1 arrays size on the first dimension.
/// \param size2 arrays size on the second dimension.
/// \param size3 arrays size on the third dimension. 
/// \retval array result array.
extern void ut_array_3d_add_float (float ***array1, float ***array2, int
    size1, int size2, int size3, float *** array);
//


/// \brief Add double value 'val' to each element of an 1D array of double-precision numbers.
/// \param array1 initial value of the array.
/// \param size size of the array.
/// \param val value added to each element of the array.
/// \retval array result array.
/// \return void. 
extern void ut_array_1d_int_addval (int *array1, int size, int val, int
    *array);
//

/// \brief Return the norm of an 1D array of double-precision numbers.
/// \param array 1D array (not modified).
/// \size size size of the array.
/// \return double norm of the array.
extern double ut_array_1d_norm (double *array, int size);
//


/// \brief Return the norm of an 1D array of int numbers.
/// \param array array to calcul norm (not modified).
/// \size size size of the array.
/// \return double norm of the array.
extern double ut_array_1d_norm_int (int *array, int size);
//

/// \brief Initialize to 0 1D array of double-precision numbers.
/// \param array array to initialize.
/// \param size size of the array.
/// \retval array initialized array (same as input).
/// \return void.
extern void ut_array_1d_zero (double *array, int size);
//

/// \brief Initialize to 0 1D array of int numbers.
/// \param array array to initialize.
/// \param size size of the array.
/// \retval array initialized array (same as input).
/// \return void.
extern void ut_array_1d_int_zero (int *array, int size);
//

/// \brief Initialize to 0 2D array of double-precision numbers.
/// \param array array to initialize.
/// \param size1 size of the first dimension of the array.
/// \param size2 size of the second dimension of the array.
/// \retval array initialized array (same as input).
/// \return void.
extern void ut_array_2d_zero (double **array, int size1, int size2);
//


/// \brief Initialize 3D array of double-precision numbers to 0.
/// \param array array to initialize.
/// \param size1 size of the first dimension of the array.
/// \param size2 size of the second dimension of the array.
/// \param size3 size of the third dimension of the array. 
/// \retval array initialized array (same as input).
/// \return void.
extern void ut_array_3d_zero (double ***array, int size1, int size2, int
    size3);
//


/// \brief Initialize 3D array of float numbers to 0.
/// \param array array to initialize.
/// \param size1 size of the first dimension of the array.
/// \param size2 size of the second dimension of the array.
/// \param size3 size of the third dimension of the array. 
/// \retval array initialized array (same as input).
/// \return void.
extern void ut_array_3d_zero_float (float ***array, int size1, int size2,
    int size3);
//

/// \brief Initialize double 2D array of integer numbers to 0.  
/// \param array array to initialize.
/// \param size1 size of the first dimension of the array.
/// \param size2 size of the second dimension of the array. 
/// \retval array initialized array (same as input).
/// \return void.
extern void ut_array_2d_int_zero (int ** array, int size1, int size2);
//

/// \brief Initialize double 3D array of integer numbers to 0. 
/// \param array array to initialize.
/// \param size1 size of the first dimension of the array.
/// \param size2 size of the second dimension of the array.
/// \retval array initialized array (same as input). 
/// \return void. 
extern void ut_array_3d_int_zero (int *** array, int size1, int size2,
    int size3);
//

/// \brief Initialize 1D array of double-precision numbers to 0 for a range of index from 'beg' to 'end'.
/// \param array array to initialize.
/// \param beg index of the beginning of initialization.
/// \param end index of the end of initialization.
/// \retval array initialized array (same as input).
/// \return void.
extern void ut_array_1d_zero_be (double *array, int beg, int end);
//


/// \brief Initialize 1D array of float numbers to 0 for a range of index from 'beg' to 'end'.
/// \param array array to initialize.
/// \param beg index of the beginning of initialization.
/// \param end index of the end of initialization.
/// \retval array initialized array (same as input).
/// \return void. 
extern void ut_array_1d_float_zero_be (float *array, int beg, int end);
//


/// \brief Initialize 1D array of float numbers to 0 for a range of index from 'beg' to 'end'.
/// \param array array to initialize.
/// \param beg index of the beginning of initialization.
/// \param end index of the end of initialization.
/// \retval array initialized array (same as input).
/// \return void. 
extern void ut_array_1d_int_zero_be (int *array, int beg, int end);
//

/// \brief Initialize 2D array of double-precision numbers to 0 for Xindex from 'begX' to 'endX' and Yindex from 'begY' to 'endY'.
/// \param array array to initialize. 
/// \param beg index of the beginning of initialization. 
/// \param end index of the end of initialization.
/// \retval array initialized array (same as input). 
/// \return void. 
extern void ut_array_2d_zero_be (double **array, int begX, int endX, int
    begY, int endY);
//

/// \brief Initialize 2D array 'a' of float numbers to 0 for Xindex from 'begX' to 'endX' and Yindex from 'begY' to 'endY'
/// \param array array to initialize. 
/// \param beg index of the beginning of initialization. 
/// \param end index of the end of initialization.
/// \retval array initialized array (same as input). 
/// \return void. 
extern void ut_array_2d_float_zero_be (float **array, int begX, int endX,
    int begY, int endY);
//

/// \brief Initialize 2D array 'a' of integer numbers to 0 for Xindex from 'begX' to 'endX' and Yindex from 'begY' to 'endY'
/// \param array array to initialize. 
/// \param beg index of the beginning of initialization. 
/// \param end index of the end of initialization.
/// \retval array initialized array (same as input). 
/// \return void. 
extern void ut_array_2d_int_zero_be (int **array, int begX, int endX, int
    begY, int endY);
//

/// \brief Record 1D array of double-precision numbers from a file. 
/// \param file file to read.
/// \param size size of array and file.
/// \retval array written array (same as input).
/// \return void. 
extern int ut_array_1d_fscanf (FILE *file, double *array, int size);
//

/// \brief Record 1D array of integer numbers from a file. 
/// \param file file to read.
/// \param size size of array and file.
/// \retval array written array (same as input).
/// \return void. 
extern int ut_array_1d_int_fscanf (FILE *file, int *array, int size);
//

/// \brief Record 1D array of integer numbers from a file. 
/// \param file file to read.
/// \param size1 size of the first dimension of array and file.
/// \param size2 size of the second dimension of array and file. 
/// \retval array written array (same as input).
/// \return void. 
extern int ut_array_2d_fscanf (FILE * file, double **array, int size1, int
    size2);
//

/// \brief Open file of name 'filename' and record a 2D array of double-precision numbers.
/// \param filename name of the file to write.
/// \param array array to read.
/// \param size1 size of the first dimension of the array and file.
/// \param size2 size of the second dimension of the array and file.
/// \retval file written file (same as input)
/// \return int 1 if the file has been written, 0 otherwise. 
extern int ut_array_2d_fscanfn (char *filename, double **array, int
    size1, int size2);
//


/// \brief Standard : open file of name 'filename' and record 1D array of double-precision numbers. 
/// \details If file has not been found and filename is a number, fill the array with this number. Else if file has not been found and filename is a colour, fill the array with this colour.
/// \param filename name of the file to write
/// \param array arrray to read
/// \param size1 size of the first dimension of the array and file.
/// \param wcard informations on the file to write.
/// \retval file written file (same as input) 
/// \return int 1 if the file has been written, 0 otherwise.
/// \todo : R. can check this comment.
extern int ut_array_1d_fscanfn_wcard (char * filename, double *array,
    int size1, char *wcard);

/// \brief Standard : open file of name 'filename' and record 2D array of double-precision numbers. 
/// \details If file has not been found and filename is a number, fill the array with this number. Else if file has not been found and filename is a colour, fill the array with this colour.
/// \param filename name of the file to write
/// \param array arrray to read
/// \param size1 size of the first dimension of the array and file.
/// \param size2 size of the second dimension of the array and file.
/// \param wcard informations on the file to write.
/// \retval file written file (same as input)
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_2d_fscanfn_wcard (char * filename, double **array, int
    size1, int size2, char * wcard);
//


/// \brief Write 1D array of double-precision numbers on file 'file' of specified format.
/// \param file file to write.
/// \param array array to read. 
/// \param size size of file and array.
/// \param format format of the file.
/// \retval file written file (same as input.)
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_1d_fprintf (FILE *file, double *array, int size, char
    *format);
//


/// \brief Write 1D array of float numbers on file 'file' of specified format.
/// \param file file to write.
/// \param array array to read. 
/// \param size size of file and array.
/// \param format format of the file.
/// \retval file written file (same as input).
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_1d_float_fprintf (FILE *file, float *array, int size,
    char *format);
//

/// \brief Write 1D array of int numbers on file 'file' of specified format.
/// \param file file to write.
/// \param array array to read 
/// \param size size of file and array
/// \param format format of the file
/// \retval file written file (same as input)
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_1d_int_fprintf (FILE *file, int *array, int size,
    char *format);
//


/// \brief Write 1D array of unsigned int numbers on file 'file' of specified format.
/// \param file file to write.
/// \param array array to read 
/// \param size size of file and array
/// \param format format of the file
/// \retval file written file (same as input)
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_1d_uint_fprintf (FILE * file, unsigned int *array, int
    size, char * format);
//

/// \brief Write 2D array of int numbers with various length of the second dimension of the array on file 'file' of specified format.
/// \param file file to write.
/// \param array array to read. 
/// \param size1 size of the first dimension of file and array.
/// \param size2 size of the second dimensions of file and array. 
/// \param format format of the file
/// \retval file written file (same as input)
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_2dns_int_fprintf (FILE *file, int **array, int size1, int
    *size2, char *format);
//


/// \brief Write 2D array of double-precision numbers on file 'file' of specified format.
/// \param file file to write.
/// \param array array to read. 
/// \param size1 size of the first dimension of file and array.
/// \param size2 size of the second dimension of file and array.
/// \param format format of the file.
/// \retval file written file (same as input.)
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_2d_fprintf (FILE * file, double **array, int size1, int
    size2, char *format);
//

/// \brief Write 2D array file of specified format and specified columns indexes from 2D array of double-precision numbers array. 
/// \param file file to write.
/// \param array array to read.
/// \param size1 size of the first dimension of array.
/// \param size2 size of the second dimension of array. 
/// \param cols indexes of columns to copy.
/// \param colqty number of columns to copy.
/// \param format format of file.
/// \retval file written file (same as input).
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_2d_fprintf_col (FILE * file, double **array, int size1,
    int size2, int *cols, int colqty,char *format);
//


/// \brief Write 2D array of float numbers on file 'file' of specified format.
/// \param file file to write.
/// \param array array to read. 
/// \param size1 size of the first dimension of file and array.
/// \param size2 size of the second dimension of file and array.
/// \param format format of the file.
/// \retval file written file (same as input.)
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_2d_float_fprintf (FILE * file, float **array, int
    size1, int size2, char *format);
//



/// \brief Write 2D array of int numbers on file 'file' of specified format.
/// \param file file to write.
/// \param array array to read. 
/// \param size1 size of the first dimension of file and array.
/// \param size2 size of the second dimension of file and array.
/// \param format format of the file.
/// \retval file written file (same as input.)
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_2d_int_fprintf (FILE * file, int **array, int size1,
    int size2, char *format);
//


/// \brief Write 3D array of int numbers on a file of specified format.
/// \param file file to write.
/// \param array array to read. 
/// \param size1 size of the first dimension of file and array.
/// \param size2 size of the second dimension of file and array.
/// \param size3 size of the third dimension of file and array. 
/// \param format format of the file.
/// \retval file written file (same as input).
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_3d_int_fprintf (FILE *file, int ***array, int size1, int
    size2, int size3, char *format);
//

/// \brief Record 2D array of int numbers from a file.
/// \param file file to read.
/// \param array array to write.
/// \param size1 size of the first dimension of file and array.
/// \param size2 size of the second dimension of file and array. 
/// \retval array written array (same as input).
/// \return int 1 if the file has been written, 0 otherwise.
extern int ut_array_2d_int_fscanf (FILE *file, int **array, int size1,
    int size2);
//

/// \brief Scale 2D array of double-precision numbers.
/// \param array array to scale.
/// \param size1 size of the first dimension of the array.
/// \param size2 size of the second dimension of the array. 
/// \param factor scaling factor.
/// \retval array scaled array (same as input).
/// \return int 1 if the file has been written, 0 otherwise.
extern void ut_array_2d_scale (double **array, int size1, int size2, double
    factor);
//

/// \brief Return the minimum of 1D array of double-precision numbers. 
/// \param array array to analyse
/// \param size size of the array
/// \return double minimum value of the array
extern double ut_array_1d_min (double * array, int size);
//

/// \brief Return the minimum of one columnn of a 2D array of double-precision numbers.
/// \param array array to analyse.
/// \param col specified column of the array to analyse.
/// \param size size of the array.
/// \return double minimum value of the specied column of the array.
extern double ut_array_2d_col_min (double **array, int col, int size);
//

/// \brief Return the maximum of one columnn of a 2D array of double-precision numbers.
/// \param array array to analyse.
/// \param col specified column of the array to analyse.
/// \param size size of the array.
/// \return double minimum value of the specied column of the array.
extern double ut_array_2d_col_max (double **array, int col, int size);
//

/// \brief Return the index of the minimum of an 1D array of double-precision numbers.
/// \param array array to analyse
/// \param size size of the array
/// \return int index of the minimum ot the array
extern int ut_array_1d_min_index (double *array, int size);
//

/// \brief Return the index of the second minimal value of an 1D array of double-precision numbers. 
/// \param array array to analyse
/// \param size size of the array
/// \return int index of the minimum ot the array
extern int ut_array_1d_min2_index (double *array, int size);
//


/// \brief Return the index of the maximum of an 1D array of double-precision numbers.
/// \param array array to analyse.
/// \param size size of the array.
/// \return int index of the maximum ot the array.
extern double ut_array_1d_max (double *array, int size);
//

/// \brief Return the mean value of an 1D array of double-precision numbers. 
/// \param array array to analyse.
/// \param size size of the array.
/// \return int index of the maximum ot the array.
extern double ut_array_1d_mean (double *array, int size);
//

/// \brief Return the geometric mean value of an 1D array of double-precision numbers.
/// \param array array to analyse.
/// \param size size of the array.
/// \return int index of the mean value ot the array.
///
extern double ut_array_1d_gmean (double *array, int size);
//

/// \brief Return the geometric mean value of an 1D array of integer numbers.
/// \param array array to analyse.
/// \param size size of the array.
/// \return int geometric mean.
///
extern double ut_array_1d_int_gmean (int *array, int size);
//

/// \brief Get the mean value of a 1D array of integer numbers.
/// \param array input array.
/// \param size size of the array.
/// \return mean value of the array.
///
extern double ut_array_1d_int_mean (int *array, int size);

/// \brief Return the ponderated mean value of an 1D array of double-precision numbers.
/// \param array array to mean
/// \param coeff coefficients of ponderation
/// \param size size of the array. 
/// \return double ponderated mean value. 
extern double ut_array_1d_wmean (double *array, double *coeff, int size);
//

/// \brief Return the standard deviation of an 1D array of double precision numbers (compared to the mean value).
/// \param array array ta analyse.
/// \param mean mean of the array.
/// \param size size of the array.
/// \return double standard deviation.
extern double ut_array_1d_stddev (double * array, double mean, int size);
//

/// \brief Return the standard deviation of 2D array of double-precision numbers.
/// \param array array to analyse.
/// \param mean mean of the array. 
/// \param size1 size of the fisrt dimension of the array. 
/// \param size2 size of the second dimension of the array. 
/// \return double standard deviation. 
extern double ut_array_2d_stddev (double **a, double mean, int size1,
    int size2);
//

/// \brief Return the absolute value of the maximum of 1D array 'a' of double type for the size first elements. 
///
///
///
extern double ut_array_1d_absmax (double *a, int size);
//

/// \brief Return the index of the maximum of 1D array 'a' of double type for the size first elements. 
///
///
///
extern int ut_array_1d_max_index (double *a, int size);
//

/// \brief Return the index of the maximum of 1D array 'a' of int type for the 'size' first elements. 
///
///
///
extern int ut_array_1d_int_max_index (int *a, int size);
//

/// \brief Return the index of the maximum abs value of 1D array 'a' of double type for the 'size' first elements
///
///
///
extern int ut_array_1d_absmax_index (double *a, int size);
//

/// \brief Return the value of the minimum of 1d array 'a' of int type for the 'size' first elements.
///
///
///
extern int ut_array_1d_int_min (int *a, int size);

/// \brief Return the value of the maximum of 1d array 'a' of int type for the 'size' first elements.
///
///
///
extern int ut_array_1d_int_max (int *a, int size);
//

///  \brief Return the value of the minimum of 1d array 'a' of float type for the 'size' first elements.
///
///
///
extern float ut_array_1d_float_min (float *a, int size);
//

///  \brief Return the value of the maximum of 1d array 'a' of float type for the 'size' first elements.
///
///
///
extern float ut_array_1d_float_max (float *a, int size);
//


///  \brief Return the value of the minimum of 2d array 'a' of float type for the dimensions 'xsize', 'ysize'.
///
///
///
extern float ut_array_2d_float_min (float **a, int xsize, int ysize);
//


///  \brief Return the value of the maximum of 2d array 'a' of float type for the dimensions 'xsize', 'ysize'.
///
///
///
extern float ut_array_2d_float_max (float **a, int xsize, int ysize);
//

/// \brief Return the value of the minimum of 2d array 'a' of double type for dimensions 'xsize', 'ysize'
///
///
///
extern double ut_array_2d_min (double **a, int xsize, int ysize);
//

/// \brief Return the mean value of 2d array 'a' of double type for dimensions 'xsize', 'ysize'
///
///
///
extern double ut_array_2d_mean (double **a, int xsize, int ysize);
//

/// \brief Return the geometric mean value of 2d array 'a' of doubletype for dimensions 'xsize', 'ysize'
///
///
///

extern double ut_array_2d_gmean (double **, int, int);
//

/// \brief Return the mean value of 3d array 'a' of doubletype for dimensions 'xsize', 'ysize', 'zsize'
///
///
///
extern double ut_array_3d_mean (double ***, int, int, int);
//


/// \brief Return the geometric mean value of 3d array 'a' of doubletype for dimensions 'xsize', 'ysize', 'zsize'
///
///
///
extern double ut_array_3d_gmean (double ***a, int xsize, int ysize, int
    zsize);
//


/// \brief Return the minimal value of 3d array 'a' of doubletype for dimensions 'xsize', 'ysize', 'zsize'
///
///
///
extern double ut_array_3d_min (double ***, int, int, int);
//

/// \brief Return the maximal value of 3d array 'a' of double type for dimensions 'xsize', 'ysize', 'zsize'
///
///
///
extern double ut_array_3d_max (double ***, int, int, int);
//

/// \brief Return the standard deviation of 3d array 'a' of double type compared to 'mean' for dimensions 'xsize', 'ysize', 'zsize'
///
///
///
extern double ut_array_3d_stddev (double ***a, double mean, int xsize,
    int ysize, int zsize);
//

/// \brief Return the mean value of 3d array 'a' of float type for dimensions 'xsize', 'ysize', 'zsize'
///
///
///
extern float ut_array_3d_float_mean (float ***a, int xsize, int ysize,
    int zsize);
//

/// \brief Return the geometric mean of 3d array 'a' of float type for dimensions 'xsize', 'ysize', 'zsize'
///
///
///
extern float ut_array_3d_float_gmean (float ***a, int xsize, int ysize,
    int zsize);
//

/// \brief Return the minimal value of 3d array 'a' of float type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern float ut_array_3d_float_min (float *** a, int xsize, int ysize,
    int zsize);
//


/// \brief Return the maximal value of 3d array 'a' of float type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern float ut_array_3d_float_max (float *** a, int xsize, int ysize,
    int zsize);
//


/// \brief Return the standard deviation of 3d array 'a' of float type compared to 'mean' for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern float ut_array_3d_float_stddev (float *** a, float mean, int
    xsize, int ysize, int zsize);
//


/// \brief Return mean value of 3d array 'a' of int type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern double ut_array_3d_int_mean (int ***a, int xsize, int ysize, int
    zsize);
//


/// \brief Return geometric mean value(double) of 3d array 'a' of int type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern double ut_array_3d_int_gmean (int ***a, int xsize, int ysize, int
    zsize);
//

/// \brief Return minimal value of 3d array 'a' of int type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern int ut_array_3d_int_min (int ***a, int xsize, int ysize, int
    zsize);
//


/// \brief Return maximal value of 3d array 'a' of int type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern int ut_array_3d_int_max (int ***a, int xsize, int ysize, int
    zsize);
//

/// \brief Return standard deviation (double) compared to 'mean'(double) of 3d array 'a' of int type for dimensions 'xsize', 'ysize', 'zsize'
///
///
///
extern double ut_array_3d_int_stddev (int ***, double, int, int, int);
//

/// \brief Return mean value of 3d array 'a' of unsigned char type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern double ut_array_3d_uchar_mean (unsigned char ***a, int xsize, int
    ysize, int zsize);
//

/// \brief Return geometric mean value of 3d array 'a' of unsigned char type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern double ut_array_3d_uchar_gmean (unsigned char *** a, int xsize,
    int ysize, int zsize);
//

/// \brief Return minimal value of 3d array 'a' of unsigned char type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern unsigned char ut_array_3d_uchar_min (unsigned char ***a, int
    xsize, int ysize, int zsize);
//

/// \brief Return maximal value of 3d array 'a' of unsigned char type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern unsigned char ut_array_3d_uchar_max (unsigned char ***a, int
    xsize, int ysize, int zsize);
// 

/// \brief Return mean value of 3d array 'a' of unsigned char type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern double ut_array_3d_uchar_mean (unsigned char ***a, int xsize, int
    ysize, int zsize);
// 


/// \brief Return geometric mean value of 3d array 'a' of unsigned char type for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern double ut_array_3d_uchar_gmean (unsigned char ***a, int xsize,
    int ysize, int zsize);
//

/// \brief Return minimal value of 3d array 'a' of unsigned short type for dimensions 'xsize', 'ysize', 'zsize'. 
///
///
///
extern unsigned short ut_array_3d_ushort_min (unsigned short ***a, int
    xsize, int ysize, int zsize);


/// \brief Return maximal value of 3d array 'a' of unsigned short type for dimensions 'xsize', 'ysize', 'zsize'. 
///
///
///
extern unsigned short ut_array_3d_ushort_max (unsigned short *** a, int
    xsize, int ysize, int zsize);
//

/// \brief Return standard deviation of 3d array 'a' of unsigned short type compared to 'mean' for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern double ut_array_3d_ushort_stddev (unsigned short ***a, double
    mean, int xsize, int ysize, int zsize);
//

/// \brief Return standard deviation of 3d array 'a' of unsigned char type compared to mean for dimensions 'xsize', 'ysize', 'zsize'.
///
///
///
extern double ut_array_3d_uchar_stddev (unsigned char ***a, double mean,
    int xsize, int ysize, int zsize);
//

/// \brief Return maximal value of 2d array 'a' of double type for dimensions 'xsize', 'ysize'.
///
///
///
extern double ut_array_2d_max (double **a, int xsize, int ysize);
//

/// \brief Return maximal absolute value of 2d array 'a' of double type for dimensions 'xsize', 'ysize'
///
///
///
extern double ut_array_2d_absmax (double **a, int xsize, int ysize);

/// \brief Return the index of the maximal value of 1d array 'a' of int type for dimensions 'xsize'.
/// 
///
///
extern int ut_array_1d_int_max_index (int * a, int xsize);
///

/// \brief Return the sum (double) of 1d array 'a' of double type for dimension xsize.
///
///
///
extern double ut_array_1d_sum (double * a, int xsize);
///

/// \brief Return the sum (int) of 1d array 'a' of int type for dimension xsize.
///
///
///
extern int ut_array_1d_int_sum (int *a, int xsize);
//

/// \brief Return the sum of the abs values of 1d array 'a' of double type for dimension 'xsize'.
///
///
///
extern double ut_array_1d_abssum (double *a, int xsize);
//


/// \brief Return the sum of the abs values of 1d array 'a' of int type for dimension 'xsize'.
///
///
///
extern int ut_array_1d_int_abssum (int *a, int xsize);
//

/// \brief Give the abs value of data of index 'pos' from 1d array 'a'of double type to data of index 'pos' (a[pos]=|a[pos]|). 
///
///
///
extern void ut_array_1d_abs (double *a, int pos);
//

/// \brief Give the abs value of data of index 'pos' from 1d array 'a'of int type to data of index 'pos' (a[pos]=|a[pos]|). 
///
///
///
extern void ut_array_1d_int_abs (int *a, int pos);
//

/// \brief Indicate the signs of array a of int type and size 'xsize' in the array sgn of the same size and type. If a[i]<0 : sgn[i]=-1, otherwise sgn[i]=1.
///
///
///
extern void ut_array_1d_int_sgn (int *a, int xsize, int *sgn);
//

/// \brief Copy 1D array of double type 'b' of size 'xsize' in array 'a'of the same size and type.
///
///
///
extern void ut_array_1d_memcpy (double *a, int xsize, double *b);


/// \brief Copy 1D array 'b' of int type and size 'xsize' in array 'a'of the same size and type.
///
///
///
extern void ut_array_1d_int_memcpy (int *a, int xsize, int *b);
//

/// \brief Copy 2 array 'b' of double type and size 'xsize', 'ysize' in array 'a' of same size and type.
///
///
///
extern void ut_array_2d_memcpy (double **a, int xsize, int ysize, double
    **b);
//

/// \brief Copy 2d array 'b' of int type and size 'xsize', 'ysize' in array 'a' of same size and type.
///
///
///
extern void ut_array_2d_int_memcpy (int **a, int xsize, int ysize, int
    **b);

/// \brief Copy pointer of char * src in dest for a size 'size1'.
///
///
///
extern void ut_array_1d_pchar_memcpy (char ** dest, int size1, char
    **src);
//

/// \brief Copy 3D array of double type 'b' and size 'xsize','ysize','zsize' in 3D array 'a' of same size and type.
///
///
///
extern void ut_array_3d_memcpy (double ***, int, int, int, double ***);
//


/// \brief Copy 3D array of int type 'b' and size 'xsize','ysize','zsize' in 3D array 'a' of same size and type.
///
///
///
extern void ut_array_3d_int_memcpy (int *** a, int xsize, int ysize, int
    zsize, int *** b);
// 

/// \brief Copy 3D array of unsigned char type 'b' and size 'xsize','ysize', 'zsize' in 3D array 'a' of same size and type. 
///
///
///
extern void ut_array_3d_uchar_memcpy (unsigned char ***a, int xsize, int
    ysize, int zsize, unsigned char *** b);
//


/// \brief Copy 3D array of unsigned float type 'b' and size 'xsize','ysize', 'zsize' in 3D array 'a' of same size and type. 
///
///
///
extern void ut_array_3d_float_memcpy (float ***a, int xsize, int ysize,
    int zsize, float *** b);
//

/// \brief Switch the two value of index n1 and n1 of 1d array of double type a.
///
///
///
extern void ut_array_1d_switch (double *a, int n1, int n2);
//


/// \brief Switch the two value of index n1 and n1 of 1d array of int type a.
///
///
///
extern void ut_array_1d_int_switch (int *a, int n1, int n2);
//

/// \brief Sort 1d array a of double type for a size 'sizex' by ascending order.
///
///
///
extern void ut_array_1d_sort (double *a, int sizex);


/// \brief Sort 1d array a of double type for a size 'sizex' by descending order.
///
///
///
extern void ut_array_1d_sort_des (double *a, int sizex);


/// \brief Sort 1d array a of int type for a size 'sizex' by descending order.
///
///
///
extern void ut_array_1d_int_sort_des (int *, int);

/// \brief Return sorted list of the index of the ascending values of 1d array a of int type and size 'sizex' 
///
///
///
extern void ut_array_1d_sort_index (double *, int, int *);
//

/// \brief TO COMMENT!
///
///
///
extern void ut_array_1d_sort_perm (double *, int, int *);
//

/// \brief TO COMMENT!
///
///
///
extern void ut_array_1d_sort_index_perm (int *, int, int *);
//

/// \brief Sort 1d array of int type for a size 'size x'.
///
///
///
extern void ut_array_1d_int_sort (int *a, int sizex);
//

/// \brief Sort index of 1d array a of int type by ascending values of a.
///
///
///
extern void ut_array_1d_int_sort_index (int *a, int size, int *index);
//

/// \brief Sort index of 1d array a of int type by descending values of a.
///
///
///
extern void ut_array_1d_int_dsort_index (int *, int, int *);
//

/// \brief Sort 1d array of char* a of size 'size' by ascending values
///
///
///
extern void ut_array_1d_pchar_sort (char **a, int size);
//

/// \brief Sort 1d array 'a' of int type and size 'sizex' by ascencing absolute values of a.
///
///
///
extern void ut_array_1d_abssort (double *, int);

/// \brief Sort index of 1d array 'a' of int type by ascending values of 'a' for a size 'size'
///
///
///
extern void ut_array_1d_int_abssort_index (int *a, int size, int *index);

/// \brief Return the value of the index of the value 'val' in 1d array of int type a. Return -1 if this value has not been found.
///
///
///
extern int ut_array_1d_int_find (int *a, int size, int val);
//


/// \brief Find all values val1 and replace by val2 in 1d array a of size 'size'.
///
///
///
extern void ut_array_1d_int_findnreplace (int *a, int size, int val1, int
    val2);
//

/// \brief Sort 2d array 'a' of int type by ascending value of column 'col'
///
///
///
extern void ut_array_2d_int_sortbycol (int **a, int nbl, int nbc,
    int col);
//

/// \brief Sort 2d array 'a' of int type by descending value of column 'col'
///
///
///
extern void ut_array_2d_int_sortbycol_des (int **, int, int, int);
//

/// \brief Print 1d array 'a' of double type for a size 'size'.
///
///
///
extern void ut_array_1d_view (double *a, int size);

/// \brief Print 2d array 'a' of double type and size 'sizex', 'sizey'. 
///
///
///
extern void ut_array_2d_view (double **a, int sizex, int sizey);

/// \brief Print 1d array 'a' of int type and size 'size'. 
///
///
///
extern void ut_array_1d_int_view (int *a, int size);

/// \brief Print 2d array 'a' of int type and size 'sizex', 'sizey'
///
///
///
extern void ut_array_2d_int_view (int **a, int sizex, int sizey);

/// \brief Switch line l1 and l2 of 2d array a of double type with colnb columns. 
///
///
///
extern void ut_array_2d_switchlines (double **a, int colnb, int line1,
    int line2);
//

/// \brief Switch line l1 and l2 of 2d array of double type col1 and col2 columns respectively.
///
///
///
extern void ut_array_2d_int_switchlines_length (int **a, int line1, int
    col1, int line2, int col2);

/// \brief Switch line l1 and l2 of 2d array a of int type with colnb columns. 
///
///
///
extern void ut_array_2d_int_switchlines (int **, int, int, int);
//

/// \brief Replace element of index pos at the first place of 1d array of int type a.
///
///
///
extern void ut_array_1d_int_bubbleelt (int *, int, int);
// 

/// \brief ? index=(index+num)%(size-1).
///
///
///
extern void ut_array_1d_int_rotate (int *a, int size, int num);


/// \brief ? index=(index+num)%(size-1).
///
///
///
extern void ut_array_1d_rotate (double *, int, int);
//

/// \brief Reverse elements of array a of size 'size'.
///
///
///
extern void ut_array_1d_int_reverseelts (int *a, int size);

/// \brief Sort index of 1d array of double type and size 'size' by ascending values datas of a.
///
///
///
extern void ut_array_1d_sort_des_index (double *a, int size, int *index);
//


/// \brief Sort index of 1d array of int type and size 'size' by ascending values datas of a.
///
///
///
extern void ut_array_1d_int_sort_des_index (int *, int, int *);
//

/// \brief Reverse element of 1d array a of double type and size 'size'
///
///
///
extern void ut_array_1d_reverseelts (double *a, int size);
//

/// \brief Return index of the maximum value of 1d array of int type 'a' and size 'size'
///
///
///
extern int ut_array_1d_max_int_index (int *a, int size);

/// \brief Transform 1d array 'a' of double type and size 'size' applying permutations recorded in 'perm' : a[i]->a[perm[i]]
///
///
///
extern void ut_array_1d_permutation (double *a, int size, int *perm);
//


/// \brief Transform 1d array 'a' of int type and size 'size' applying permutations recorded in 'perm' : a[i]->a[perm[i]]
///
///
///
extern void ut_array_1d_permutation_int (int *a, int size, int *perm);
//


/// \brief Transform 2d array 'a' of int type applying permutations recorded in 'perm' : a[i]->a[perm[i]][j]
///
///
///
extern void ut_array_2d_permutation_int (int **a, int sizex, int sizey,
    int *perm);
//

/// \brief Give the needed informations to make the histogram of the datas of array 'a' of size 'size' if we want a step 'step' between two values : first elements and length of the table are passed by the function by pfirst and plength.
///
///
///
extern void ut_array_distribparam (double *a, int size, double step,
    double *pfirst, int *plength);

/// \brief Give a normalise distribution of the 1d array 'a' of double type for  a size 'size', a step of the distibution 'step',a first element of  the distribution 'first', a length of the distribution 'distrib'.
///
///
///
extern void ut_array_distrib (double *a, int size, double step,
    double first, int length, double *distrib);

/// \brief Set the value of index 'n' of 1d array a of double type to val.
///
///
///
extern void ut_array_1d_set (double *a, int n, double val);
//

/// \brief Set the value of index 'n' of 1d array 'a' of double type to val.
///
///
///
extern void ut_array_1d_int_set (int *a, int n, int val);
//

/// \brief Set the value of index i,j of 2d array 'a' of double type to val. 
///
///
///
extern void ut_array_2d_set (double **a, int i, int j, double val);
//

/// \brief Set the value of index i,j of 2d array 'a' of int type to val. 
///
///
///
extern void ut_array_2d_int_set (int **a, int i, int j, int val);
//


/// \brief Set the value of index i,j,k of 3d array 'a' of double type to val. 
///
///
///
extern void ut_array_3d_set (double ***a, int i, int j, int k, double
    val);
//


/// \brief Set the value of index i,j,k of 3d array 'a' of int type to val. 
///
///
///
extern void ut_array_3d_int_set (int ***a, int i, int j, int k, int val);
//

/// \brief ?
///
///
///
extern int ut_array_1d_rotpos (int, int, int, int);
//

/// \brief Return position of element 'elt' of 1d array a of size 'size'and int type if it exist, -1 otherwise.
///
///
///
extern int ut_array_1d_int_eltpos (int *a, int size, int elt);
//

/// \brief Return position of line line of 2D array a of int type.Return -1 if the line does not exist.
///
///
///
extern int ut_array_2d_int_linepos (int **, int, int, int *);

extern int ut_array_2dns_int_linepos (int **, int, int *, int *, int);

extern int ut_array_1d_int_eltpos_all (int *, int, int, int *);

extern int ut_array_2d_int_eltpos (int **, int, int, int, int *, int *);

extern int ut_array_1d_string_eltpos (char **, int, char *);

extern double ut_array_1d_valuepos (double *, int, double);
extern void ut_array_1d_int_uniq (int *, int *);
extern void ut_array_1d_int_sort_uniq (int *, int, int *);
extern void ut_array_1d_sub (double *, double *, int, double *);

extern void ut_array_2d_sub (double **, double **, int, int, double **);

extern void ut_array_1d_sample (double *, int, double, double **, int *);
extern void ut_array_2d_sample (double **, int, int, double, double ***,
				int *);

extern int ut_array_1d_fscanf_sample (FILE *, int, double, double **, int *);
extern int ut_array_2d_fscanf_sample (FILE *, int, int, double, double ***,
				      int *);

extern int ut_array_1d_int_nbofthisval (int *, int, int);
extern void ut_array_1d_commonelts (int *, int, int *, int, int **, int *);
extern int *ut_array_1d_int_cat (int *, int, int *, int);
extern int ut_array_1d_int_deletencompress (int *, int, int, int);
extern void ut_array_1d_int_memcpy_be (int *, int *, int, int);

extern void ut_array_1d_int_union (int *, int, int *, int, int *, int *);
extern void ut_array_1d_int_minus (int *, int, int *, int, int *, int);

extern void ut_array_1d_int_inter (int *, int, int *, int, int *, int *);
extern int ut_array_1d_int_min_index (int *, int);

extern int ut_array_1d_int_inv (int *, int, int **, int *);

extern void ut_array_1d_int_sort_index2 (int *, int, int *);
extern void ut_array_1d_sort_index2 (double *, int, int *);

extern int ut_array_2dns_int_fprintf (FILE *, int **, int, int *, char *);
extern int ut_array_1d_int_equal (int *, int *, int);
extern int ut_array_1d_equal (double *, double *, int, double);
extern int ut_array_1d_requal (double *, double *, int, double);

extern double ut_array_2d_cov (double **, double, double, int, int, int);
extern double ut_array_2d_linearcorr (double **, int, int, int);

extern void ut_array_2d_transpose (double **, int, int, double ***);
extern void ut_array_2d_int_transpose (int **, int, int, int ***);

extern int ut_array_1d_char_find (char *, int, char);

extern int ut_array_1d_int_list_addelt (int **parray, int *psize, int val);
extern void ut_array_1d_int_valqty (int *array, int size, int ***parray2,
				    int *parray2qty);

extern int ut_array_1d_int_diff (int *, int, int *, int);

extern int ut_array_1d_int_percent (int *array, int size, int *percent);

extern int ut_array_3d_int_1d (int*** array, int size1, int size2, int size3,
                    int** parray1d);

extern int ut_array_1d_set_3 (double* array, double v1, double v2, double v3);
extern int ut_array_1d_int_set_3 (int* array, int v1, int v2, int v3);

extern void ut_array_1d_int_set_id (int* array, int size);

#endif /* UT_ARRAY_H */
