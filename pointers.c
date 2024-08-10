#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>

void hexdump(void *start, int num_bytes)
{
    int r, c;
    uint8_t *byte = start;

    for(r = 0; r <= num_bytes/16; r++) {
        printf("0x%p: ", &byte[r*16]);
        for (c = r*16; c < (r+1)*16 && c < num_bytes; c++)
            printf("%02x ", byte[c]);
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    char *str = "Hi Pushpam! How are you????";
    int i, len = strlen(str);
    
    uint8_t num8 = 0xFE;
    uint8_t *ptr8 = &num8;
    uint16_t num16 = 0xFE;
    uint16_t *ptr16 = &num16;
    uint32_t num32 = 0xFFEE;
    uint32_t *ptr32 = &num32;
    uint64_t num64 = 0xFFEE;
    uint64_t *ptr64 = &num64;
    char *ptrc;

    printf("8-bit number pointer: %p\n", ptr8);
    hexdump(&num8, sizeof(num8));
    printf("8-bit number value: %u/%u\n\n", num8, *ptr8);

    printf("16-bit number pointer: %p\n", ptr16);
    hexdump(&num16, sizeof(num16));
    printf("16-bit number value: %u/%u\n\n", num16, *ptr16);

    printf("32-bit number pointer: %p\n", ptr32);
    hexdump(&num32, sizeof(num32));
    printf("32-bit number value: %u/%u\n\n", num32, *ptr32);

    printf("64-bit number pointer: %p\n", ptr64);
    hexdump(&num64, sizeof(num64));
    printf("32-bit number value: %lu/%lu\n\n", num64, *ptr64);

    printf("String buffer pointer: %p\n", str);
    hexdump(str, strlen(str)+1);

    ptrc = str;
    ptr16 = (uint16_t *)str;
    // for(i = 0; i < len+1; i++, ptrc++) {
    //     printf("%d - 0x%p/0x%p: %02x/%02x (%c) \n", i, &str[i], ptrc, (uint8_t)str[i], (uint8_t)*ptrc, str[i]);
    // }
    for(i = 0; i < len/2+1; i++, ptr16++) {
        printf("0x%p: %04x\n", ptr16, *ptr16);
    }
}