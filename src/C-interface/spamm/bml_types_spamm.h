#ifndef __BML_TYPES_SPAMM_H
#define __BML_TYPES_SPAMM_H

#include "../bml_types.h"

/** SPAMM matrix type. */
struct bml_matrix_spamm_t
{
    /** The matrix type identifier. */
    bml_matrix_type_t matrix_type;

    /** The real precision. */
    bml_matrix_precision_t matrix_precision;

    /** The distribution mode. **/
    bml_distribution_mode_t distribution_mode;

    /** The number of rows/columns. */
    int N;
};
typedef struct bml_matrix_spamm_t bml_matrix_spamm_t;

#endif
