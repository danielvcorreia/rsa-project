/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_SequenceOfPsid_H_
#define	_SequenceOfPsid_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Psid.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SequenceOfPsid */
typedef struct SequenceOfPsid {
	A_SEQUENCE_OF(Psid_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfPsid_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfPsid;

#ifdef __cplusplus
}
#endif

#endif	/* _SequenceOfPsid_H_ */
#include "asn_internal.h"
