/*
 * Class BOOLEAN
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_256 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_256 [] = {0xFF01,913,255,0xFFFF};
static const EIF_TYPE_INDEX egt_2_256 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_3_256 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_256 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_256 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_6_256 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_7_256 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_8_256 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_9_256 [] = {0xFF01,254,0xFFFF};


static const struct desc_info desc_256[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_256), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_256), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_256), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_256), 15, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 16, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_256), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_256), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_256), 10832, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_256), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_256), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 31, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 10835, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9006, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10834, 0},
	{EIF_GENERIC(NULL), 10836, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_256), 10837, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 10838, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 10839, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10842, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10843, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10844, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10845, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10846, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10847, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10848, 0xFFFFFFFF},
};
void Init256(void)
{
	IDSC(desc_256, 0, 255);
	IDSC(desc_256 + 1, 1, 255);
	IDSC(desc_256 + 32, 304, 255);
	IDSC(desc_256 + 34, 299, 255);
}


#ifdef __cplusplus
}
#endif