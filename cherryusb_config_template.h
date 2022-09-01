/*
 * Copyright (c) 2022, sakumisu
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef CHERRYUSB_CONFIG_H
#define CHERRYUSB_CONFIG_H

/* ================ USB common Configuration ================ */

#ifndef CONFIG_USB_DBG_LEVEL
#define CONFIG_USB_DBG_LEVEL USB_DBG_INFO
#endif

#ifndef CONFIG_USB_PRINTF
#define CONFIG_USB_PRINTF printf
#endif

/* attribute data into no cache ram */
// #define USB_NOCACHE_RAM_SECTION __attribute__((section(".noncacheable")))
/* Enable print with color */
#define CONFIG_USB_PRINTF_COLOR_ENABLE

/* ================ USB DEVICE Configuration ================*/

/* core */

/* Ep0 max transfer buffer, specially for receiving data from ep0 out */
#define CONFIG_USBDEV_REQUEST_BUFFER_LEN 256
/* Setup packet log for debug */
// #define CONFIG_USBDEV_SETUP_LOG_PRINT
/* Check if the input descriptor is correct */
// #define CONFIG_USBDEV_DESC_CHECK
/* Enable test mode */
// #define CONFIG_USBDEV_TEST_MODE

/* cdc class */

// #define CONFIG_USBDEV_CDC_ACM_UART

/* msc class */

#ifndef CONFIG_USBDEV_MSC_BLOCK_SIZE
#define CONFIG_USBDEV_MSC_BLOCK_SIZE 512
#endif

#ifndef CONFIG_USBDEV_MSC_MANUFACTURER_STRING
#define CONFIG_USBDEV_MSC_MANUFACTURER_STRING ""
#endif

#ifndef CONFIG_USBDEV_MSC_PRODUCT_STRING
#define CONFIG_USBDEV_MSC_PRODUCT_STRING ""
#endif

#ifndef CONFIG_USBDEV_MSC_VERSION_STRING
#define CONFIG_USBDEV_MSC_VERSION_STRING "0.01"
#endif

// #define CONFIG_USBDEV_MSC_THREAD

#ifdef CONFIG_USBDEV_MSC_THREAD
#ifndef CONFIG_USBDEV_MSC_STACKSIZE
#define CONFIG_USBDEV_MSC_STACKSIZE 2048
#endif

#ifndef CONFIG_USBDEV_MSC_PRIO
#define CONFIG_USBDEV_MSC_PRIO 4
#endif
#endif

/* audio class */

#ifndef CONFIG_USBDEV_AUDIO_VERSION
#define CONFIG_USBDEV_AUDIO_VERSION 0x0100
#endif

#ifndef CONFIG_USBDEV_AUDIO_MAX_CHANNEL
#define CONFIG_USBDEV_AUDIO_MAX_CHANNEL 8
#endif

/* ================ USB HOST Configuration ================ */

#ifndef CONFIG_USBHOST_RHPORTS
#define CONFIG_USBHOST_RHPORTS 1
#endif

#ifndef CONFIG_USBHOST_EHPORTS
#define CONFIG_USBHOST_EHPORTS 4
#endif

#ifndef CONFIG_USBHOST_PIPE_NUM
#define CONFIG_USBHOST_PIPE_NUM 10
#endif

#ifndef CONFIG_USBHOST_INTF_NUM
#define CONFIG_USBHOST_INTF_NUM 6
#endif

#ifndef CONFIG_USBHOST_EP_NUM
#define CONFIG_USBHOST_EP_NUM 4
#endif

#ifndef CONFIG_USBHOST_CONTROL_TRANSFER_TIMEOUT
#define CONFIG_USBHOST_CONTROL_TRANSFER_TIMEOUT 5000
#endif

#ifndef CONFIG_USBHOST_MSC_TIMEOUT
#define CONFIG_USBHOST_MSC_TIMEOUT 5000
#endif

#ifndef CONFIG_USBHOST_PSC_PRIO
#define CONFIG_USBHOST_PSC_PRIO 4
#endif
#ifndef CONFIG_USBHOST_PSC_STACKSIZE
#define CONFIG_USBHOST_PSC_STACKSIZE 4096
#endif

#ifndef CONFIG_USBHOST_DEV_NAMELEN
#define CONFIG_USBHOST_DEV_NAMELEN 16
#endif

#define CONFIG_USBHOST_ASYNCH
//#define CONFIG_USBHOST_GET_STRING_DESC

/* ================ EHCI Configuration ================ */

#define CONFIG_USB_EHCI_HCCR_BASE (0x20072000)
#define CONFIG_USB_EHCI_HCOR_BASE (0x20072000 + 0x10)
#define CONFIG_USB_EHCI_QH_NUM    (10)
#define CONFIG_USB_EHCI_QTD_NUM   (10)
// #define CONFIG_USB_EHCI_INFO_ENABLE
// #define CONFIG_USB_ECHI_HCOR_RESERVED_DISABLE
// #define CONFIG_USB_EHCI_CONFIGFLAG
// #define CONFIG_USB_EHCI_PORT_POWER

#endif
