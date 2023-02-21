/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "NR-NS-PmaxValue.h"

asn_TYPE_member_t asn_MBR_NR_NS_PmaxValue_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_NS_PmaxValue, additionalPmax),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalPmax"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_NS_PmaxValue, additionalSpectrumEmission),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission"
		},
};
static const int asn_MAP_NR_NS_PmaxValue_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_NS_PmaxValue_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_NS_PmaxValue_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* additionalPmax */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* additionalSpectrumEmission */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_NS_PmaxValue_specs_1 = {
	sizeof(struct NR_NS_PmaxValue),
	offsetof(struct NR_NS_PmaxValue, _asn_ctx),
	asn_MAP_NR_NS_PmaxValue_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_NS_PmaxValue_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_NS_PmaxValue = {
	"NR-NS-PmaxValue",
	"NR-NS-PmaxValue",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_NS_PmaxValue_tags_1,
	sizeof(asn_DEF_NR_NS_PmaxValue_tags_1)
		/sizeof(asn_DEF_NR_NS_PmaxValue_tags_1[0]), /* 1 */
	asn_DEF_NR_NS_PmaxValue_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_NS_PmaxValue_tags_1)
		/sizeof(asn_DEF_NR_NS_PmaxValue_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_NS_PmaxValue_1,
	2,	/* Elements count */
	&asn_SPC_NR_NS_PmaxValue_specs_1	/* Additional specs */
};

