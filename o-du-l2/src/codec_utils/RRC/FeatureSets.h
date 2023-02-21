/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_FeatureSets_H_
#define	_FeatureSets_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FeatureSetDownlink;
struct FeatureSetDownlinkPerCC;
struct FeatureSetUplink;
struct FeatureSetUplinkPerCC;

/* FeatureSets */
typedef struct FeatureSets {
	struct FeatureSets__featureSetsDownlink {
		A_SEQUENCE_OF(struct FeatureSetDownlink) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsDownlink;
	struct FeatureSets__featureSetsDownlinkPerCC {
		A_SEQUENCE_OF(struct FeatureSetDownlinkPerCC) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsDownlinkPerCC;
	struct FeatureSets__featureSetsUplink {
		A_SEQUENCE_OF(struct FeatureSetUplink) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsUplink;
	struct FeatureSets__featureSetsUplinkPerCC {
		A_SEQUENCE_OF(struct FeatureSetUplinkPerCC) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsUplinkPerCC;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSets_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSets;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSets_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSets_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _FeatureSets_H_ */
#include <asn_internal.h>
