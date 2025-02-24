/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/srslte-ric/srsenb/src/ric/messages/asn1/e2sm-kpm-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /srslte-ric/build/srsenb/src/ric/messages/E2SM-KPM/`
 */

#ifndef	_E2SM_KPM_PerUEReportListItem_H_
#define	_E2SM_KPM_PerUEReportListItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "INTEGER.h"
#include "NativeReal.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM_KPM_PerUEReportListItem */
typedef struct E2SM_KPM_PerUEReportListItem {
	long	 rnti;
	INTEGER_t	 dl_PRBUsage;
	INTEGER_t	 ul_PRBUsage;
	long	 tx_pkts;
	long	 tx_errors;
	long	 tx_brate;
	long	 rx_pkts;
	long	 rx_errors;
	long	 rx_brate;
	double	 dl_cqi;
	double	 dl_ri;
	double	 dl_pmi;
	double	 ul_phr;
	double	 ul_sinr;
	double	 ul_rssi;
	double	 ul_mcs;
	long	 ul_samples;
	double	 dl_mcs;
	long	 dl_samples;
	long    imsi;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_PerUEReportListItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_PerUEReportListItem;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_PerUEReportListItem_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_KPM_PerUEReportListItem_1[20];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_PerUEReportListItem_H_ */
#include "asn_internal.h"
