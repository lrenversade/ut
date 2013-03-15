/* Copyright (C) 2007-2009, 2012 Romain Quey */
/* see the COPYING file in the top-level directory.*/

/// \file ut_free.h
/// \brief Free memory
/// \author Romain Quey
/// \bug No known bugs
/// \todo Document and sort by increasing complexity (similar to ut_alloc)

#ifndef UT_FREE_H
#define UT_FREE_H



/// \brief Deallocate a 1D array of integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_int (int *array);

/// \brief Deallocate a 1D array of unsigned short integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_ushort (unsigned short *array);


/// \brief Deallocate a 1D array of unsigned integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_uint (unsigned int *array);

/// \brief Deallocate a 1D array of unsigned characters.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_uchar (unsigned char *array);

/// \brief Deallocate a 1D array of characters.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_char (char *array);

/// \brief Deallocate a 1D array of single-precision numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_float (float *array);

/// \brief Deallocate a 1D array of double-precision numbers.
/// \details This function can also be called as 'ut_free_1d'.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_double (double *array);


/// \brief Deallocate a 1D array of double-precision numbers.
/// \details This is a shortcut for function 'ut_free_1d_double'.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d (double *array);


/// \brief Deallocate a 1D array of pointers of integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_pint (int **array);

/// \brief Deallocate a 1D array of pointers of pointers of integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_ppint (int ***array);


/// \brief Deallocate a 1D array of pointers of double-precision numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_pdouble (double **array);

/// \brief Deallocate a 1D array of pointers of pointers of double-precision numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_ppdouble (double ***array);


/// \brief Deallocate a 1D array of size_t integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_sizet (size_t *array);

/// \brief Deallocate a 1D array of file pointers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
extern void ut_free_1d_pfile (FILE **array);




/// \brief Deallocate a 2D array of unsigned short integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
extern void ut_free_2d_ushort (unsigned short **array, unsigned int line);


/// \brief Deallocate a 2D array of integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
extern void ut_free_2d_int (int **array, unsigned int line);


/// \brief Deallocate a 2D array of unsigned integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
extern void ut_free_2d_uint (unsigned int **array, unsigned int line);


/// \brief Deallocate a 2D array of unsigned characters.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
extern void ut_free_2d_uchar (unsigned char **array, unsigned int line);

/// \brief Deallocate a 2D array of characters.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
extern void ut_free_2d_char (char **array, unsigned int line);


/// \brief Deallocate a 2D array of single-precision numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
extern void ut_free_2d_float (float **array, unsigned int line);

/// \brief Deallocate a 2D array of double-precision numbers.
/// \details This function can also be called as 'ut_free_2d'.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
extern void ut_free_2d_double (double **array, unsigned int line);



/// \brief Deallocate a 2D array of unsigned integer numbers.
/// \details This is a shortcut for function 'ut_free_2d_double'.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
extern void ut_free_2d (double **array, unsigned int line);


/// \brief Deallocate a 3D array of integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
/// \param col number of columns of the array.
extern void ut_free_3d_int (int ***array, unsigned int line, unsigned int col);

/// \brief Deallocate a 3D array of unsigned short integer numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
/// \param col number of columns of the array.
extern void ut_free_3d_ushort (unsigned short ***array, unsigned int line, unsigned int col);

/// \brief Deallocate a 3D array of unsigned characters.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
/// \param col number of columns of the array.
extern void ut_free_3d_uchar (unsigned char ***array, unsigned int line, unsigned int col);

/// \brief Deallocate a 3D array of characters.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
/// \param col number of columns of the array.
extern void ut_free_3d_char (char ***array, unsigned int line, unsigned int col);


/// \brief Deallocate a 3D array of single-precision numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
/// \param col number of columns of the array.
extern void ut_free_3d_float (float ***array, unsigned int line, unsigned int col);


/// \brief Deallocate a 3D array of double-precision numbers.
/// \details This function can also be called as 'ut_free_3d'.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
/// \param col number of columns of the array.
extern void ut_free_3d_double (double ***array, unsigned int line, unsigned int col);


/// \brief Deallocate a 3D array of double-precision numbers.
/// \details This is a shortcut for function 'ut_free_3d_double'.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param line number of lines of the array.
/// \param col number of columns of the array.
extern void ut_free_3d (double ***array, unsigned int line, unsigned int col);


/// \brief Deallocate a 4D array of double-precision numbers.
/// \details If array is NULL, the function does nothing.
/// \param array pointer to the array.
/// \param size1 size of the 1st dimension of the array.
/// \param size2 size of the 2nd dimension of the array.
/// \param size3 size of the 3rd dimension of the array.
extern void ut_free_4d (double ****array, unsigned int size1, unsigned int size2, unsigned int size3);

#endif /* UT_FREE_H */
