#ifndef DEF_LIBCRC_CHECKSUM_H
#define DEF_LIBCRC_CHECKSUM_H

#include <stdint.h>

/*
 * #define CRC_POLY_xxxx
 *
 * The constants of the form CRC_POLY_xxxx define the polynomials for some well
 * known CRC calculations.
 */

#define CRC_POLY_16 0xA001

/*
 * #define CRC_START_xxxx
 *
 * The constants of the form CRC_START_xxxx define the values that are used for
 * initialization of a CRC value for common used calculation methods.
 */

#define CRC_START_16 0x0000

/*
 * Prototype list of global functions
 */

uint16_t crc_16(const unsigned char *input_str, size_t num_bytes);
uint16_t update_crc_16(uint16_t crc, unsigned char c);

#endif  // DEF_LIBCRC_CHECKSUM_H
