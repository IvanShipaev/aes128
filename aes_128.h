#ifndef _AES_128_H_
#define	_AES_128_H_

#include "aes_128_conf.h"

typedef struct aes_ctr_t {
	uint8_t key[16];
	uint8_t coun[16];
	uint8_t data[16];
	uint8_t offset;
} aes_ctr_t;

void aes_encode_ecb(uint8_t block[16], const uint8_t key[16]);
void aes_decoder_ecb(uint8_t block[16], const uint8_t key[16]);
void aes_ctr_init(aes_ctr_t *ctr, const uint8_t key[16], const uint8_t iv[16], uint32_t offset);
void aes_ctr_update(aes_ctr_t *ctr, void* buf, uint32_t len);

#endif /* _AES_128_H_ */
