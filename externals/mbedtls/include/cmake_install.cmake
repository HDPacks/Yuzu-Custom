# Install script for directory: C:/Users/curti/yuzu/externals/mbedtls/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/yuzu")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mbedtls" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/aes.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/aesni.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/arc4.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/aria.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/asn1.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/asn1write.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/base64.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/bignum.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/blowfish.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/bn_mul.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/camellia.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ccm.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/certs.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/chacha20.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/chachapoly.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/check_config.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/cipher.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/cipher_internal.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/cmac.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/compat-1.3.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/config.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ctr_drbg.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/debug.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/des.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/dhm.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ecdh.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ecdsa.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ecjpake.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ecp.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ecp_internal.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/entropy.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/entropy_poll.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/error.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/gcm.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/havege.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/hkdf.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/hmac_drbg.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/md.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/md2.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/md4.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/md5.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/md_internal.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/memory_buffer_alloc.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/net.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/net_sockets.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/nist_kw.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/oid.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/padlock.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/pem.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/pk.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/pk_internal.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/pkcs11.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/pkcs12.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/pkcs5.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/platform.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/platform_time.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/platform_util.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/poly1305.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ripemd160.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/rsa.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/rsa_internal.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/sha1.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/sha256.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/sha512.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ssl.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ssl_cache.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ssl_ciphersuites.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ssl_cookie.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ssl_internal.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/ssl_ticket.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/threading.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/timing.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/version.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/x509.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/x509_crl.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/x509_crt.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/x509_csr.h"
    "C:/Users/curti/yuzu/externals/mbedtls/include/mbedtls/xtea.h"
    )
endif()

