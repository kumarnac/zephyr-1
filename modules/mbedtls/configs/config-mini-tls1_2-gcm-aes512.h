/*
 * Copyright (c) 2021 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
/* System support */
#define MBEDTLS_PLATFORM_C
#define MBEDTLS_PLATFORM_MEMORY
#define MBEDTLS_MEMORY_BUFFER_ALLOC_C
#define MBEDTLS_PLATFORM_NO_STD_FUNCTIONS
#define MBEDTLS_PLATFORM_SNPRINTF_ALT
#define MBEDTLS_PLATFORM_EXIT_ALT
#define MBEDTLS_PLATFORM_PRINTF_ALT

/* DRNG integration */
/* disable, This will add platform based entrophy source */
#undef MBEDTLS_NO_DEFAULT_ENTROPY_SOURCES
#define MBEDTLS_NO_PLATFORM_ENTROPY
#define MBEDTLS_ENTROPY_HARDWARE_ALT

#if !defined(CONFIG_ARM)
#define MBEDTLS_HAVE_ASM
#endif

#if defined(CONFIG_MBEDTLS_TEST)
#define MBEDTLS_SELF_TEST
#define MBEDTLS_DEBUG_C
#else
#define MBEDTLS_ENTROPY_C
#endif

/* mbed TLS feature support */
#define MBEDTLS_CIPHER_MODE_CBC
#define MBEDTLS_PKCS1_V15
#define MBEDTLS_KEY_EXCHANGE_RSA_ENABLED
#define MBEDTLS_SSL_PROTO_TLS1_2

/* mbed TLS modules */
#define MBEDTLS_AES_C
#define MBEDTLS_ASN1_PARSE_C
#define MBEDTLS_ASN1_WRITE_C
#define MBEDTLS_BIGNUM_C
#define MBEDTLS_CIPHER_C
#define MBEDTLS_CTR_DRBG_C
#define MBEDTLS_DES_C
#define MBEDTLS_ENTROPY_C
#define MBEDTLS_GCM_C
#define MBEDTLS_MD_C
#define MBEDTLS_MD5_C
#define MBEDTLS_OID_C
#define MBEDTLS_PK_C
#define MBEDTLS_PK_PARSE_C
#define MBEDTLS_RSA_C
#define MBEDTLS_SHA1_C
#define MBEDTLS_SHA256_C
#define MBEDTLS_SHA512_C
#define MBEDTLS_SSL_CLI_C
#define MBEDTLS_SSL_SRV_C
#define MBEDTLS_SSL_TLS_C
#define MBEDTLS_X509_CRT_PARSE_C
#define MBEDTLS_X509_USE_C
#define MBEDTLS_HKDF_C

/* For test certificates */
#define MBEDTLS_BASE64_C
#define MBEDTLS_CERTS_C

#if defined(CONFIG_MBEDTLS_DEBUG)
#define MBEDTLS_ERROR_C
#define MBEDTLS_DEBUG_C
#define MBEDTLS_SSL_DEBUG_ALL
#define MBEDTLS_SSL_ALL_ALERT_MESSAGES
#endif

#define MBEDTLS_SSL_MAX_CONTENT_LEN  CONFIG_MBEDTLS_SSL_MAX_CONTENT_LEN