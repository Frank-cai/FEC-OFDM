#include "OFDM.h"


//////////////////////////////////////
//  FORWARD ERROR CORRECTION (FEC)  //
//////////////////////////////////////

/* Encode 4-bit info block into an 8-bit codeword, by
 * applying a SYSTEMATIC Hamming (8,4) code.
 *
 * Parameters
 *  infoBits - input 4-bit sequence of information bits
 *  encBits  - output 8-bit sequence of encoded bits
 * 
 */
void hamming84_encoder(unsigned char infoBits[], unsigned char encBits[]) {
    /*
    * Insert your code here
    */
}


/* Encode input bit sequence by applying Hamming (8,4) code over successive 4-bit blocks.
 *  
 *  dataBits     - input (info) bit sequence
 *  encBits      - output (encoded) bit sequence
 *  infoBitsLen  - input sequence length (num. info bits)
 * 
 */
void fec_encoder(unsigned char infoBits[], unsigned char encBits[], int infoBitsLen) {
    /*
    * Insert your code here
    */
}


////////////////////
//  INTERLEAVING  //
////////////////////

/* Interleave the input sequence by writing cwLen bits into rows,
 * and reading out the obtain matrix column by column.
 *  
 *  bitSeq     - input/output (interleaved) sequence
 *  mat     - interleaving matrix
 *  bitSeqLen     - bit sequence length
 *  numCols - codeword length of the applied FEC code
 * 
 * >>
 * NOTE: Implementation with interleaving done in-place, i.e.
 *       result is placed back to the input array.
 * >>
 */
void bit_interleaver(unsigned char bitSeq[], unsigned char mat[], int bitSeqLen, int numCols) {
    /*
    * Insert your code here
    */
}

//////////////////////////////////////
//  FORWARD ERROR CORRECTION (FEC)  //
//////////////////////////////////////


/* Decode the SYSTEMATIC Hamming (8,4) code.
 *
 * Parameters
 *  infoBits - input 4-bit sequence of information bits
 *  encBits  - output 8-bit sequence of encoded bits
 * 
 * Output
 *  int - indicator of number of errors, i.e.
 *          0 - no errors
 *          1 - single error (corrected)
 *          2 - double error (uncorrectable)
 * 
 */
int hamming84_decoder(unsigned char encBits[], unsigned char infoBits[]) {
    /*
    * Insert your code here
    */
}


/* Decode bit sequence encoded with Hamming (8,4) code,
 * and report if uncorrectable errors are detected.
 *
 * Parameters
 *  encBits  - input sequence of FEC encoded bits
 *  infoBits - output sequence of (decoded) info bits
 *  infoBitsLen  - output sequence length (num. info bits)
 * 
 * Output
 *  ack_flg - successful transmission acknowledgment
 *              0 - no uncorrectable errors in the input sequence infoBits
 *              1 - at least one codeword is uncorrectable
 */
int fec_decoder(unsigned char encBits[], unsigned char infoBits[], int infoBitsLen) {
    /*
    * Insert your code here
    */
}



////////////////////
//  INTERLEAVING  //
////////////////////

/* Deinterleave the input sequence by reverting the interleaving operation.
 *  
 *  bitSeq     - input/output (interleaved) sequence
 *  mat     - deinterleaving matrix
 *  bitSeqLen     - bit sequence length
 *  numCols - number of matrix columns or codeword length of the applied FEC code
 *  
 * >>
 * NOTE: Deinterleaving is done in-place (result is saved to the same array).
 * >>
 */
void bit_deinterleaver(unsigned char bitSeq[], unsigned char mat[], int bitSeqLen, int numCols) {
    /*
    * Insert your code here
    */
}
