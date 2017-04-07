/****************************************************************

  Generated by Vortex Lite IDL to C Translator
  File name: dython.h
  Source: dython.idl
  Generated: Thu Apr 06 19:41:21 CEST 2017
  Vortex Lite: V2.0.7

*****************************************************************/

#include <stdint.h>
#include <stdbool.h>

#include "dds.h"

#ifndef _DDSL_DYTHON_H_
#define _DDSL_DYTHON_H_


#ifdef __cplusplus
extern "C" {
#endif


typedef struct dython_bit_KDython
{
  char * key;
  char * value;
} dython_bit_KDython;

extern const dds_topic_descriptor_t dython_bit_KDython_desc;

#define dython_bit_KDython__alloc() \
((dython_bit_KDython*) dds_alloc (sizeof (dython_bit_KDython)));

#define dython_bit_KDython_free(d,o) \
dds_sample_free ((d), &dython_bit_KDython_desc, (o))


typedef struct dython_bit_Dython
{
  char * value;
} dython_bit_Dython;

extern const dds_topic_descriptor_t dython_bit_Dython_desc;

#define dython_bit_Dython__alloc() \
((dython_bit_Dython*) dds_alloc (sizeof (dython_bit_Dython)));

#define dython_bit_Dython_free(d,o) \
dds_sample_free ((d), &dython_bit_Dython_desc, (o))

#ifdef __cplusplus
}
#endif
#endif /* _DDSL_DYTHON_H_ */