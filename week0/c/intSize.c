#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    printf("int8_t: %d a %d\n", INT8_MIN, INT8_MAX);
    printf("int16_t: %d a %d\n", INT16_MIN, INT16_MAX);
    printf("int32_t: %d a %d\n", INT32_MIN, INT32_MAX);
    printf("int64_t: %" PRId64 " a %" PRId64 "\n", INT64_MIN, INT64_MAX);

    //DESCONSIDERA NUMEROS NEGATIVOS
    printf("uint8_t: 0 a %d\n", UINT8_MAX);
    printf("uint16_t: 0 a %u\n", UINT16_MAX); 
    printf("uint32_t: 0 a %u\n", UINT32_MAX);
    printf("uint64_t: 0 a %" PRIu64 "\n", UINT64_MAX);

    return 0;
}