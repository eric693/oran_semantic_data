/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_HandoverCommand_IEs_H_
#define	_HandoverCommand_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HandoverCommand-IEs */
typedef struct HandoverCommand_IEs {
	OCTET_STRING_t	 handoverCommandMessage;
	struct HandoverCommand_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverCommand_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverCommand_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverCommand_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverCommand_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverCommand_IEs_H_ */
#include <asn_internal.h>
