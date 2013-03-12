/* Copyright (C) 2007-2009, 2012 Romain Quey */
/* see the COPYING file in the top-level directory.*/

/// \file ut_alloc.h
/// \brief Allocate memory.
/// \author Romain Quey
/// \bug No known bugs
/// \todo Document and sort the functions by increasing complexity

#ifndef UT_ALLOC_H
#define UT_ALLOC_H

// You can use tags: \details \reval \todo \bug \exception \see

/// \brief Allocate a 1D array of integer numbers.
/// \param size size of the array.
/// \return pointer to the array.
extern int* ut_alloc_1d_int (unsigned int size);

/// \brief Allocate a 1D array of double-precision numbers
/// \details This function can also be called as 'ut_alloc_1d'.
/// \param size size of the array.
/// \return pointer to the array.
extern double* ut_alloc_1d_double (unsigned int size);

/// \brief Allocate a 1D array of single-precision numbers
/// \param size size of the array.
/// \return pointer to the array.
extern float* ut_alloc_1d_float (unsigned int size);

/// \brief Allocate a 1D array of unsigned short integer numbers
/// \param size size of the array.
/// \return pointer to the array.
extern unsigned short* ut_alloc_1d_ushort (unsigned int size);

/// \brief Allocate a 1D array of unsigned integer numbers
/// \param size size of the array.
/// \return pointer to the array.
extern unsigned int* ut_alloc_1d_uint (unsigned int size);

/// \brief Allocate a 1D array of unsigned characters
/// \param size size of the array.
/// \return pointer to the array.
extern unsigned char* ut_alloc_1d_uchar (unsigned int size);

/// \brief Allocate a 1D array of characters
/// \param size size of the array.
/// \return pointer to the array.
extern char* ut_alloc_1d_char (unsigned int size);

/// \brief Allocate a 1D array of size_t
/// \param size size of the array.
/// \return pointer to the array.
extern size_t* ut_alloc_1d_sizet (unsigned int size);

/// \brief Allocate a 1D array of file pointers
/// \param size size of the array.
/// \return pointer to the array.
extern FILE** ut_alloc_1d_pfile (unsigned int size);

/// \brief Allocate a 1D array of pointers of integer numbers
/// \param size size of the array.
/// \return pointer to the array.
extern int** ut_alloc_1d_pint (unsigned int size);

/// \brief Allocate a 1D array of pointers of double-precision numbers
/// \param size size of the array.
/// \return pointer to the array.
extern double** ut_alloc_1d_pdouble (unsigned int size);

/// \brief Allocate a 1D array of pointers of characters
/// \param size size of the array.
/// \return pointer to the array.
extern char** ut_alloc_1d_pchar (unsigned int size);

/// \brief Allocate a 1D array of pointers of unsigned short integer numbers
/// \param size size of the array.
/// \return pointer to the array.
extern unsigned short** ut_alloc_1d_pushort (unsigned int size);

/// \brief Allocate a 1D array of pointers of unsigned characters
/// \param size size of the array.
/// \return pointer to the array.
extern unsigned char** ut_alloc_1d_puchar (unsigned int size);

/// \brief Allocate a 1D array of pointers of pointers of integer numbers
/// \param size size of the array.
/// \return pointer to the array.
extern int*** ut_alloc_1d_ppint (unsigned int size);

/// \brief Allocate a 1D array of pointers of pointers of double-precision numbers
/// \param size size of the array.
/// \return pointer to the array.
extern double*** ut_alloc_1d_ppdouble (unsigned int size);

/// \brief Allocate a 1D array of pointers of pointers of characters
/// \param size size of the array.
/// \return pointer to the array.
extern char*** ut_alloc_1d_ppchar (unsigned int size);

/// \brief Allocate a 1D array of pointers of pointers of unsigned short integer numbers.
/// \param size size of the array.
/// \return pointer to the array.
extern unsigned short*** ut_alloc_1d_ppushort (unsigned int size);

/// \brief Allocate a 1D array of pointers of pointers of unsigned characters
/// \param size size of the array.
/// \return pointer to the array.
extern unsigned char*** ut_alloc_1d_ppuchar (unsigned int size);

/// \brief Allocate a 1D array of double-precision numbers.
/// \details This is a shortcut for function ut_alloc_1d_double.
/// \param size size of the array.
/// \return pointer to the array.
extern double* ut_alloc_1d (unsigned int size);

extern int** ut_alloc_2d_int (unsigned int, unsigned int);
extern unsigned short** ut_alloc_2d_ushort (unsigned int, unsigned int);
extern unsigned char** ut_alloc_2d_uchar (unsigned int, unsigned int);
extern char*** ut_alloc_2d_pchar (unsigned int, unsigned int);
extern unsigned int** ut_alloc_2d_uint (unsigned int, unsigned int);
extern float** ut_alloc_2d_float (unsigned int, unsigned int);
extern double** ut_alloc_2d_double (unsigned int, unsigned int);
extern char** ut_alloc_2d_char (unsigned int, unsigned int);
extern double** ut_alloc_2d (unsigned int, unsigned int);
extern int*** ut_alloc_3d_int (unsigned int, unsigned int, unsigned int);
extern unsigned short*** ut_alloc_3d_ushort (unsigned int, unsigned int, unsigned int);
extern unsigned char*** ut_alloc_3d_uchar (unsigned int, unsigned int, unsigned int);
extern unsigned int*** ut_alloc_3d_uint (unsigned int, unsigned int, unsigned int);
extern double*** ut_alloc_3d_double (unsigned int, unsigned int,
				     unsigned int);
extern float*** ut_alloc_3d_float (unsigned int, unsigned int,
				     unsigned int);
extern double*** ut_alloc_3d (unsigned int, unsigned int, unsigned int);
extern char*** ut_alloc_3d_char (unsigned int, unsigned int, unsigned int);

extern double**** ut_alloc_4d (unsigned int, unsigned int,
			       unsigned int, unsigned int);
extern double**** ut_alloc_4d_double (unsigned int, unsigned int,
				      unsigned int, unsigned int);

extern double** ut_realloc_1d_pdouble (double**, unsigned int);
extern int* ut_realloc_1d_int (int*, unsigned int);

extern char* ut_realloc_1d_char (char*, unsigned int);
extern int** ut_realloc_1d_pint (int**, unsigned int);
extern unsigned short** ut_realloc_1d_pushort (unsigned short**, unsigned int);
extern unsigned char** ut_realloc_1d_puchar (unsigned char**, unsigned int);
extern double*** ut_realloc_1d_ppdouble (double***, unsigned int);
extern char** ut_realloc_1d_pchar (char**, unsigned int);

extern unsigned short* ut_realloc_1d_ushort (unsigned short*, unsigned int);
extern unsigned char* ut_realloc_1d_uchar (unsigned char*, unsigned int);
extern double* ut_realloc_1d (double*, unsigned int);
extern int** ut_realloc_2d_int_addline (int**, int, int);
extern double** ut_realloc_2d_addline (double**, int, int);
extern double*** ut_realloc_3d_addarray (double***, int, int, int);
extern char** ut_realloc_2d_char_addline (char**, int, int);
extern int** ut_realloc_2d_int_delline (int**, int, int);
extern double** ut_realloc_2d_delline (double**, int, int);

#endif /* UT_ALLOC_H */
