#ifndef blockchain_h
#define blockchain_h

#include <openssl/evp.h>

static const char *PROFILE_PATH = "~/Desktop";


typedef unsigned char byte;
typedef struct BLOCKCHAIN_OBJ_BlockHeaders
{
    /* data */
} __attribute__((packed)) BLOCKCHAIN_OBJ_BlockHeaders;

typedef struct BLOCKCHAIN_OBJ_Block
{
    BLOCKCHAIN_OBJ_BlockHeaders headers;
    byte data;

}__attribute__((packed)) BLOCKCHAIN_OBJ_Block;

typedef struct BLOCKCHAIN_OBJ_Account 
{
    EVP_PKEY *public_key;
    EVP_PKEY *private_key;

}BLOCKCHAIN_OBJ_Account;

void BLOCKCHAIN_create_account(void);





#endif /*blockchain_h*/