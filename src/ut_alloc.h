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
/// \details This is a shortcut for function 'ut_alloc_1d_double'.
/// \param size size of the array.
/// \return pointer to the array.
extern double* ut_alloc_1d (unsigned int size);

/// \brief Allocate a 2D array of integer numbers.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \return pointer to the array.
extern int** ut_alloc_2d_int (unsigned int size1, unsigned int size2);

/// \brief Allocate a 2D array of unsigned short integer numbers.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \return pointer to the array.
extern unsigned short** ut_alloc_2d_ushort (unsigned int size1, unsigned int size2);

/// \brief Allocate a 2D array of unsigned characters.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \return pointer to the array.
extern unsigned char** ut_alloc_2d_uchar (unsigned int size1, unsigned int size2);

/// \brief Allocate a 2D array of pointers of characters.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \return pointer to the array.
extern char*** ut_alloc_2d_pchar (unsigned int size1, unsigned int size2);

/// \brief Allocate a 2D array of unsigned integer numbers.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \return pointer to the array.
extern unsigned int** ut_alloc_2d_uint (unsigned int size1, unsigned int size2);

/// \brief Allocate a 2D array of single-precision numbers.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \return pointer to the array.
extern float** ut_alloc_2d_float (unsigned int size1, unsigned int size2);

/// \brief Allocate a 2D array of double-precision numbers.
/// \details This function can also be called as 'ut_alloc_2d'.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \return pointer to the array.
extern double** ut_alloc_2d_double (unsigned int size1, unsigned int size2);

/// \brief Allocate a 2D array of characters.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \return pointer to the array.
extern char** ut_alloc_2d_char (unsigned int size1, unsigned int size2);

/// \brief Allocate a 2D array of double-precision numbers.
/// \details This is a shortcut for function 'ut_alloc_2d_double'.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \return pointer to the array.
extern double** ut_alloc_2d (unsigned int size1, unsigned int size2);


/// \brief Allocate a 3D array of integer numbers.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \return pointer to the array.
extern int*** ut_alloc_3d_int (unsigned int size1, unsigned int size2, unsigned int size3);

/// \brief Allocate a 3D array of unsigned short integer numbers.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \return pointer to the array.
extern unsigned short*** ut_alloc_3d_ushort (unsigned int size1, unsigned int size2, unsigned int size3);

/// \brief Allocate a 3D array of unsigned characters.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \return pointer to the array.
extern unsigned char*** ut_alloc_3d_uchar (unsigned int size1, unsigned int size2, unsigned int size3);

/// \brief Allocate a 3D array of unsigned integer numbers.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \return pointer to the array.
extern unsigned int*** ut_alloc_3d_uint (unsigned int size1, unsigned int size2, unsigned int size3);

/// \brief Allocate a 3D array of double-precision numbers.
/// \details This function can also be called as 'ut_alloc_3d'.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \return pointer to the array.
extern double*** ut_alloc_3d_double (unsigned int size1, unsigned int size2,
				     unsigned int size3);

/// \brief Allocate a 3D array of single-precision numbers.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \return pointer to the array.
extern float*** ut_alloc_3d_float (unsigned int size1, unsigned int size2,
				     unsigned int size3);

/// \brief Allocate a 3D array of double-precision numbers.
/// \details This is a shortcut for function 'ut_alloc_3d_double'.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \return pointer to the array.
extern double*** ut_alloc_3d (unsigned int size1, unsigned int size2, unsigned int size3);

/// \brief Allocate a 3D array of characters.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \return pointer to the array.
extern char*** ut_alloc_3d_char (unsigned int size1, unsigned int size2, unsigned int size3);

/// \brief Allocate a 4D array of double-precision numbers.
/// \details This is a shortcut for function 'ut_alloc_4d_double'.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \param size4 size along the 4th dimension of the array.
/// \return pointer to the array.
extern double**** ut_alloc_4d (unsigned int size1, unsigned int size2,
			       unsigned int size3, unsigned int size4);

/// \brief Allocate a 4D array of double-precision numbers.
/// \details This function can also be called as 'ut_alloc_4d'.
/// \param size1 size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \param size4 size along the 4th dimension of the array.
/// \return pointer to the array.
extern double**** ut_alloc_4d_double (unsigned int size1, unsigned int size2,
				      unsigned int size3, unsigned int size4);

/// \brief Reallocate a 1D array of pointers of double-precision numbers.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern double** ut_realloc_1d_pdouble (double** array, unsigned int size);

/// \brief Reallocate a 1D array of integer numbers.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \details If size equals 0, this function behaves like 'ut_free_1d_int'.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern int* ut_realloc_1d_int (int* array, unsigned int size);

/// \brief Reallocate a 1D array of characters.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \details If size equals 0, this function behaves like 'ut_free_1d_char'.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern char* ut_realloc_1d_char (char* array, unsigned int size);

/// \brief Reallocate a 1D array of pointers of integer numbers.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern int** ut_realloc_1d_pint (int** array, unsigned int size);

/// \brief Reallocate a 1D array of pointers of unsigned short integer numbers.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern unsigned short** ut_realloc_1d_pushort (unsigned short** array, unsigned int size);

/// \brief Reallocate a 1D array of pointers of unsigned characters.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern unsigned char** ut_realloc_1d_puchar (unsigned char** array, unsigned int size);

/// \brief Reallocate a 1D array of pointers of pointers of double-precision numbers.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern double*** ut_realloc_1d_ppdouble (double*** array, unsigned int size);

/// \brief Reallocate a 1D array of pointers of characters.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern char** ut_realloc_1d_pchar (char** array, unsigned int size);

/// \brief Reallocate a 1D array of unsigned short integer numbers.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \details If size equals 0, this function behaves like 'ut_free_1d_ushort'.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern unsigned short* ut_realloc_1d_ushort (unsigned short* array, unsigned int size);

/// \brief Reallocate a 1D array of unsigned characters.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \details If size equals 0, this function behaves like 'ut_free_1d_uchar'.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern unsigned char* ut_realloc_1d_uchar (unsigned char* array, unsigned int size);

/// \brief Reallocate a 1D array of double-precision numbers.
/// \details The content of the array is preserved up to the lesser of the new and old sizes.
/// \details If size equals 0, this function behaves like 'ut_free_1d_double'.
/// \param array pointer to the previously allocated array.
/// \param size new size of the array.
/// \return new pointer to the array.
extern double* ut_realloc_1d (double* array, unsigned int size);




/// \brief Reallocate a 2D array of integer numbers to add a size1.
/// \details The function can only add one size1 at a time at the end of the array.
/// \details The content of the array is preserved up to the old size along the 1st dimension.
/// \param array pointer to the previously allocated array.
/// \param size1 new size along the 1st dimension of the array.
/// \param size2  size along the 2nd dimension of the array.
/// \return new pointer to the array.
extern int** ut_realloc_2d_int_addline (int** array, int size1, int size2);

/// \brief Reallocate a 2D array of double-precision numbers to add a size1.
/// \details The function can only add one size1 at a time at the end of the array.
/// \details The content of the array is preserved up to the old size along the 1st dimension.
/// \param array pointer to the previously allocated array.
/// \param size1 new size along the 1st dimension of the array.
/// \param size2  size along the 2nd dimension of the array.
/// \return new pointer to the array.
extern double** ut_realloc_2d_addline (double** array, int size1, int size2);


/// \brief Reallocate a 2D array of characters to add a size1.
/// \details The function can only add one size1 at a time at the end of the array.
/// \details The content of the array is preserved up to the old size along the 1st dimension.
/// \param array pointer to the previously allocated array.
/// \param size1 new size along the 1st dimension of the array.
/// \param size2  size along the 2nd dimension of the array.
/// \return new pointer to the array.
extern char** ut_realloc_2d_char_addline (char** array, int size1, int size2);



/// \brief Reallocate a 2D array of integer numbers to delete lines.
/// \details The content of the array is preserved up to the new size along the 1st dimension.
/// \param array pointer to the previously allocated array.
/// \param size1old old size along the 1st dimension of the array.
/// \param size1 new size along the 1st dimension of the array.
/// \return new pointer to the array.
extern int** ut_realloc_2d_int_delline (int** array, int size1old, int size1);


/// \brief Reallocate a 2D array of double-precision numbers to delete lines.
/// \details The content of the array is preserved up to the new size along the 1st dimension.
/// \param array pointer to the previously allocated array.
/// \param size1old old size along the 1st dimension of the array.
/// \param size1 new size along the 1st dimension of the array.
/// \return new pointer to the array.
extern double** ut_realloc_2d_delline (double** array, int size1old, int size1);


/// \brief Reallocate a 2D array of unsigned short integer numbers to delete lines.
/// \details The content of the array is preserved up to the new size along the 1st dimension.
/// \param array pointer to the previously allocated array.
/// \param size1old old size along the 1st dimension of the array.
/// \param size1 new size along the 1st dimension of the array.
/// \return new pointer to the array.
extern unsigned short** ut_realloc_2d_ushort_delline (unsigned short **array, int size1old, int size1);

/// \brief Reallocate a 2D array of unsigned characters to delete lines.
/// \details The content of the array is preserved up to the new size along the 1st dimension.
/// \param array pointer to the previously allocated array.
/// \param size1old old size along the 1st dimension of the array.
/// \param size1 new size along the 1st dimension of the array.
/// \return new pointer to the array.
extern unsigned char** ut_realloc_2d_uchar_delline (unsigned char **array, int size1old, int size1);

/// \brief Reallocate a 3D array of double-precision numbers to add a 2D array in 1st dimension.
/// \details The function can only add one 2D array at a time at the end of the array.
/// \details The content of the array is preserved.
/// \param array pointer to the previously allocated array.
/// \param size1 new size along the 1st dimension of the array.
/// \param size2 size along the 2nd dimension of the array.
/// \param size3 size along the 3rd dimension of the array.
/// \return new pointer to the array.
extern double*** ut_realloc_3d_addarray (double***array, int size1, int size2, int size3);


#endif /* UT_ALLOC_H */
