/* md5.h
 *
 * Copyright (C) 2013 Walter de Jong <walter@heiho.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program - see the file COPYING.
 *
 */

#ifndef LIBTAC_MD5_H
#define LIBTAC_MD5_H

#ifdef __APPLE__
  /* use CommonCrypto framework */

  #include <CommonCrypto/CommonDigest.h>

  #define MD5_CTX           CC_MD5_CTX
  #define MD5_Init          CC_MD5_Init
  #define MD5_Update        CC_MD5_Update
  #define MD5_Final         CC_MD5_Final

  #ifdef MD5_DIGEST_LENGTH
    #undef MD5_DIGEST_LENGTH
  #endif

  #define MD5_DIGEST_LENGTH   CC_MD5_DIGEST_LENGTH

#else
  /* use libssl */

  #include <openssl/md5.h>

#endif  /* __APPLE__ */

/* size of a (raw, binary) digest in bytes */
#define MD5_LEN  16

#endif  /* LIBTAC_MD5_H */

/* EOB */

