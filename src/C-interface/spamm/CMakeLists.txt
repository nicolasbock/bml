set(HEADERS-SPAMM
  bml_allocate_spamm.c)

set(SOURCES-SPAMM
  bml_allocate_spamm.c)

add_library(bml-spamm OBJECT ${SOURCES-SPAMM})
set_target_properties(bml-spamm
  PROPERTIES
  POSITION_INDEPENDENT_CODE yes)
if(OPENMP_FOUND)
  set_target_properties(bml-spamm
    PROPERTIES
    COMPILE_FLAGS ${OpenMP_C_FLAGS})
endif()

set(SOURCES-SPAMM-TYPED
  bml_allocate_spamm_typed.c)

include(${CMAKE_SOURCE_DIR}/cmake/bmlAddTypedLibrary.cmake)
bml_add_typed_library(bml-spamm single_real "${SOURCES-SPAMM-TYPED}")
bml_add_typed_library(bml-spamm double_real "${SOURCES-SPAMM-TYPED}")
bml_add_typed_library(bml-spamm single_complex "${SOURCES-SPAMM-TYPED}")
bml_add_typed_library(bml-spamm double_complex "${SOURCES-SPAMM-TYPED}")
if(OPENMP_FOUND)
  set_target_properties(bml-spamm-single_real
    PROPERTIES
    COMPILE_FLAGS ${OpenMP_C_FLAGS})
  set_target_properties(bml-spamm-double_real
    PROPERTIES
    COMPILE_FLAGS ${OpenMP_C_FLAGS})
  set_target_properties(bml-spamm-single_complex
    PROPERTIES
    COMPILE_FLAGS ${OpenMP_C_FLAGS})
  set_target_properties(bml-spamm-double_complex
    PROPERTIES
    COMPILE_FLAGS ${OpenMP_C_FLAGS})
endif()
