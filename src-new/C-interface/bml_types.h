/** \file */

#ifndef __BML_TYPES_H
#define __BML_TYPES_H

/** The supported matrix types. */
typedef enum
{
    /** The matrix is not initialized. */
    uninitialized,
    /** Dense matrix. */
    dense,
    /** ELLPACK matrix. */
    ellpack,
    /** CSR matrix. */
    csr
} bml_matrix_type_t;

/** The supported real precisions. */
typedef enum
{
    /** Matrix data is stored in single precision (float). */
    single_real,
    /** Matrix data is stored in double precision (double). */
    double_real,
    /** Matrix data is stored in single-complex precision (float). */
    single_complex,
    /** Matrix data is stored in double-complex precision (double). */
    double_complex
} bml_matrix_precision_t;

/** The vector type. */
typedef void bml_vector_t;

/** The matrix type. */
typedef void bml_matrix_t;

#endif
