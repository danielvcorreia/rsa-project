/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_SequenceOfUint8_H_
#define	_SequenceOfUint8_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Uint8.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SequenceOfUint8 */
typedef struct SequenceOfUint8 {
	A_SEQUENCE_OF(Uint8_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfUint8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfUint8;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfUint8_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfUint8_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SequenceOfUint8_H_ */
#include "asn_internal.h"
