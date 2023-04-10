#include "blockchain.h"

void BLOCKCHAIN_create_account (void)
{
    EVP_PKEY *key = EVP_PKEY_new();
    EVP_PKEY_CTX *ctx = EVP_PKEY_CTX_new_id(EVP_PKEY_RSA, NULL);
    EVP_PKEY_keygen_init(ctx);
    /* set the size of the key */
    EVP_PKEY_CTX_set_rsa_keygen_bits(ctx, 4096);
    /* store the output on key*/
    EVP_PKEY_keygen(ctx, key);
}