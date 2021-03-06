/* Copyright Statement:
 *
 * (C) 2005-2016  MediaTek Inc. All rights reserved.
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. ("MediaTek") and/or its licensors.
 * Without the prior written permission of MediaTek and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 * You may only use, reproduce, modify, or distribute (as applicable) MediaTek Software
 * if you have agreed to and been bound by the applicable license agreement with
 * MediaTek ("License Agreement") and been granted explicit permission to do so within
 * the License Agreement ("Permitted User").  If you are not a Permitted User,
 * please cease any access or use of MediaTek Software immediately.
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT MEDIATEK SOFTWARE RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES
 * ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 */

 


#ifndef __WIFI_EVENT_ID_H__
#define __WIFI_EVENT_ID_H__


#define IW_CONNECTION_RETRY_FAIL_EVENT_FLAG 0x0199
#define IW_SYS_EVENT_FLAG_START             0x0200
#define IW_ASSOC_EVENT_FLAG                 0x0200
#define IW_DISASSOC_EVENT_FLAG              0x0201
#define IW_DEAUTH_EVENT_FLAG                0x0202
#define IW_MIC_ERROR_EVENT_FLAG             0x0209
#define IW_STA_LINKUP_EVENT_FLAG            0x020F
#define IW_STA_LINKDOWN_EVENT_FLAG          0x0210
#define IW_SCAN_COMPLETED_EVENT_FLAG        0x0211
#define IW_CANCEL_REMAIN_ON_CHANNEL_FLAG    0x0212
#define IW_TX_ACTION_STATUS_EVENT_FLAG      0x0213
#define IW_RX_ACTION_FRAME_EVENT_FLAG       0x0214

/*if auth is wpa2psk/aes, it means 4way complete,  if auth is wpapsk/tkip, it means 6ways complete*/
#define RT_RSNA_COMPLETE_EVENT_FLAG         0x0333   

#define RT_AUTH_START_AFTER_JOIN_EVENT_FLAG 0x0334

#define IW_CUSTOM_EVENT_FLAG                0x8C02
#define IW_ASSOCREQ_IE_EVENT_FLAG           0x8C07
#define IW_REASSOCREQ_IE_EVENT_FLAG         0x8C0A


#undef    EVENT_ID_IOT_SCAN_LIST  
#undef    EVENT_ID_IOT_PROBE_REQ  
#undef    EVENT_ID_IOT_MGMT_WITH_REASON_CODE 
#undef    EVENT_ID_IOT_FRAME_TYPE_FILTER  
#undef    EVENT_ID_IOT_CF_CREDENTIAL  
#undef    EVENT_ID_IOT_CF_IP_REQ     
#undef    EVENT_ID_IOT_WLAN_EVT             
#undef    EVENT_ID_IOT_CONNECTED  
//#define EVENT_ID_IOT_ASSOCIATE_IE  
#undef   EVENT_ID_IOT_ASSOCIATED  
#undef    EVENT_ID_IOT_DEAUTH  
#undef    EVENT_ID_IOT_DISASSOC  
#undef    EVENT_ID_IOT_RELOAD_CONFIGURATION 
#undef    EVENT_ID_IOT_AP_LINK_UP  
#undef    EVENT_ID_IOT_REASSOCIATED  
#undef    EVENT_ID_IOT_MIC_ERROR  
#undef    EVENT_ID_IOT_CANCEL_REMAIN_ON_CHANNEL 
#undef    EVENT_ID_IOT_APCLI_WPAS_RELOAD  
#undef    EVENT_ID_IOT_RX_ACTION  
#undef    EVENT_ID_IOT_TX_STATUS  
#undef    EVENT_ID_IOT_LINK_DOWN        
#undef    EVENT_ID_IOT_N9_CONSOLE_LOG 
#undef    EVENT_ID_LAYER_0_EXT_MAGIC_NUM  
#undef    EVENT_ID_LAYER_1_MAGIC_NUM   
#undef    EVENT_ID_IOT_CONNECTION_RETRY_FAIL 
#undef    EVENT_ID_IOT_SMT_STOP   
#undef    EVENT_ID_IOT_SMT_START      
#undef    EVENT_ID_IOT_RSNA_COMPLETE 


/* Define EVENT ID from firmware to Host (v0.09) */
#define   EVENT_ID_IOT_SCAN_LIST  0x50            /* 0x50 (Unsoiicited) */
#define   EVENT_ID_IOT_PROBE_REQ  0x51
#define   EVENT_ID_IOT_MGMT_WITH_REASON_CODE  0x52
#define   EVENT_ID_IOT_FRAME_TYPE_FILTER  0x53     /* rx filter for specified frame type */
#define   EVENT_ID_IOT_CF_CREDENTIAL  0x55          /* Save ConfigFree Credentials and Reboot */
#define   EVENT_ID_IOT_CF_IP_REQ      0x56         /* Request IP via DHCP, issued by CM4, instead of N9  */
#define   EVENT_ID_IOT_WLAN_EVT  0x60               /* 0x60 (Unsoiicited) */
#define   EVENT_ID_IOT_CONNECTED  0x61              /* 0x61 (Unsoiicited) */
//#define EVENT_ID_IOT_ASSOCIATE_IE  0x62         /* 0x62 (Unsoiicited) */
#define   EVENT_ID_IOT_ASSOCIATED  0x63            /* 0x63 (Unsoiicited) */
#define   EVENT_ID_IOT_DEAUTH  0x64              /* 0x64 (Unsoiicited) */
#define   EVENT_ID_IOT_DISASSOC  0x65             /* 0x65 (Unsoiicited) */
#define   EVENT_ID_IOT_RELOAD_CONFIGURATION  0x66   /* 0x66 (Unsoiicited) */
#define   EVENT_ID_IOT_AP_LINK_UP  0x67   /* 0x67 (Unsoiicited) */
#define   EVENT_ID_IOT_REASSOCIATED  0x68   /* 0x68 (Unsoiicited) */
#define   EVENT_ID_IOT_MIC_ERROR  0x69
#define   EVENT_ID_IOT_CANCEL_REMAIN_ON_CHANNEL  0x70
#define   EVENT_ID_IOT_APCLI_WPAS_RELOAD  0x71
#define   EVENT_ID_IOT_RX_ACTION  0x72
#define   EVENT_ID_IOT_TX_STATUS  0x73
#define   EVENT_ID_IOT_LINK_DOWN  0x74               /* 0x74 (Unsoiicited) */
#define   EVENT_ID_IOT_N9_CONSOLE_LOG  0x80
#define   EVENT_ID_LAYER_0_EXT_MAGIC_NUM   0xED    /* magic number for Extending MT6630 original EVENT header  */
#define   EVENT_ID_LAYER_1_MAGIC_NUM       0xEE    /* magic number for backward compatible with MT76xx EVENT  */

#define   EVENT_ID_IOT_IP_READY               0xEF
#define   EVENT_ID_IOT_AUTH_START_AFTER_JOIN  0xFA
#define   EVENT_ID_IOT_CONNECTION_RETRY_FAIL  0xFB
#define   EVENT_ID_IOT_SMT_STOP   0xFC
#define   EVENT_ID_IOT_SMT_START      0xFD
#define   EVENT_ID_IOT_RSNA_COMPLETE  0xFE 

#endif
