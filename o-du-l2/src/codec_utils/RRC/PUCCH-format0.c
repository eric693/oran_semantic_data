/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "PUCCH-format0.h"

static int
memb_initialCyclicShift_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 11)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nrofSymbols_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_startingSymbolIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 13)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_initialCyclicShift_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..11) */,
	-1};
static asn_per_constraints_t asn_PER_memb_initialCyclicShift_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  11 }	/* (0..11) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nrofSymbols_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..2) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nrofSymbols_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_startingSymbolIndex_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..13) */,
	-1};
static asn_per_constraints_t asn_PER_memb_startingSymbolIndex_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  13 }	/* (0..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PUCCH_format0_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_format0, initialCyclicShift),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_initialCyclicShift_constr_2, &asn_PER_memb_initialCyclicShift_constr_2,  memb_initialCyclicShift_constraint_1 },
		0, 0, /* No default value */
		"initialCyclicShift"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_format0, nrofSymbols),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nrofSymbols_constr_3, &asn_PER_memb_nrofSymbols_constr_3,  memb_nrofSymbols_constraint_1 },
		0, 0, /* No default value */
		"nrofSymbols"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_format0, startingSymbolIndex),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_startingSymbolIndex_constr_4, &asn_PER_memb_startingSymbolIndex_constr_4,  memb_startingSymbolIndex_constraint_1 },
		0, 0, /* No default value */
		"startingSymbolIndex"
		},
};
static const ber_tlv_tag_t asn_DEF_PUCCH_format0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUCCH_format0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initialCyclicShift */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nrofSymbols */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* startingSymbolIndex */
};
asn_SEQUENCE_specifics_t asn_SPC_PUCCH_format0_specs_1 = {
	sizeof(struct PUCCH_format0),
	offsetof(struct PUCCH_format0, _asn_ctx),
	asn_MAP_PUCCH_format0_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUCCH_format0 = {
	"PUCCH-format0",
	"PUCCH-format0",
	&asn_OP_SEQUENCE,
	asn_DEF_PUCCH_format0_tags_1,
	sizeof(asn_DEF_PUCCH_format0_tags_1)
		/sizeof(asn_DEF_PUCCH_format0_tags_1[0]), /* 1 */
	asn_DEF_PUCCH_format0_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUCCH_format0_tags_1)
		/sizeof(asn_DEF_PUCCH_format0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUCCH_format0_1,
	3,	/* Elements count */
	&asn_SPC_PUCCH_format0_specs_1	/* Additional specs */
};

