/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define V24_REGNUM 56
#define SVE_STRICT_GP 1
#define SP_REGNUM 31
#define R5_REGNUM 5
#define V6_REGNUM 38
#define R8_REGNUM 8
#define V2_REGNUM 34
#define R12_REGNUM 12
#define P4_REGNUM 72
#define P3_REGNUM 71
#define P7_REGNUM 75
#define R10_REGNUM 10
#define V15_REGNUM 47
#define R24_REGNUM 24
#define SVE_RELAXED_GP 0
#define R16_REGNUM 16
#define R0_REGNUM 0
#define SPECULATION_SCRATCH_REGNUM 14
#define IP0_REGNUM 16
#define V5_REGNUM 37
#define V4_REGNUM 36
#define V8_REGNUM 40
#define R15_REGNUM 15
#define R26_REGNUM 26
#define V18_REGNUM 50
#define R27_REGNUM 27
#define P11_REGNUM 79
#define SFP_REGNUM 64
#define EP0_REGNUM 12
#define V12_REGNUM 44
#define V31_REGNUM 63
#define FP_REGNUM 29
#define V0_REGNUM 32
#define R3_REGNUM 3
#define R30_REGNUM 30
#define P2_REGNUM 70
#define V10_REGNUM 42
#define R22_REGNUM 22
#define V22_REGNUM 54
#define R19_REGNUM 19
#define SVE_MAYBE_NOT_PTRUE 0
#define V25_REGNUM 57
#define R6_REGNUM 6
#define R9_REGNUM 9
#define STACK_CLASH_SVE_CFA_REGNUM 11
#define V3_REGNUM 35
#define R13_REGNUM 13
#define P8_REGNUM 76
#define V16_REGNUM 48
#define R25_REGNUM 25
#define LAST_SAVED_REGNUM 83
#define V26_REGNUM 58
#define V20_REGNUM 52
#define V28_REGNUM 60
#define R1_REGNUM 1
#define EP1_REGNUM 13
#define SVE_KNOWN_PTRUE 1
#define IP1_REGNUM 17
#define AP_REGNUM 65
#define P14_REGNUM 82
#define P0_REGNUM 68
#define FFRT_REGNUM 85
#define R28_REGNUM 28
#define P12_REGNUM 80
#define R4_REGNUM 4
#define SPECULATION_TRACKER_REGNUM 15
#define R7_REGNUM 7
#define V1_REGNUM 33
#define V19_REGNUM 51
#define V11_REGNUM 43
#define R20_REGNUM 20
#define VG_REGNUM 67
#define V27_REGNUM 59
#define V14_REGNUM 46
#define R23_REGNUM 23
#define V9_REGNUM 41
#define P15_REGNUM 83
#define V23_REGNUM 55
#define LR_REGNUM 30
#define CC_REGNUM 66
#define PROBE_STACK_FIRST_REGNUM 10
#define R14_REGNUM 14
#define P6_REGNUM 74
#define P9_REGNUM 77
#define V17_REGNUM 49
#define P10_REGNUM 78
#define V7_REGNUM 39
#define V29_REGNUM 61
#define R2_REGNUM 2
#define V30_REGNUM 62
#define PROBE_STACK_SECOND_REGNUM 11
#define R11_REGNUM 11
#define V13_REGNUM 45
#define R17_REGNUM 17
#define FFR_REGNUM 84
#define R18_REGNUM 18
#define P1_REGNUM 69
#define P5_REGNUM 73
#define R21_REGNUM 21
#define R29_REGNUM 29
#define P13_REGNUM 81
#define V21_REGNUM 53

enum arches {
  ARCHES_ANY = 0,
  ARCHES_RCPC8_4 = 1,
  ARCHES_FP = 2,
  ARCHES_FP_Q = 3,
  ARCHES_SIMD = 4,
  ARCHES_SVE = 5,
  ARCHES_FP16 = 6
};
#define NUM_ARCHES_VALUES 7
extern const char *const arches_strings[];

enum unspec {
  UNSPEC_AUTIA1716 = 0,
  UNSPEC_AUTIB1716 = 1,
  UNSPEC_AUTIASP = 2,
  UNSPEC_AUTIBSP = 3,
  UNSPEC_CALLEE_ABI = 4,
  UNSPEC_CASESI = 5,
  UNSPEC_CPYMEM = 6,
  UNSPEC_CRC32B = 7,
  UNSPEC_CRC32CB = 8,
  UNSPEC_CRC32CH = 9,
  UNSPEC_CRC32CW = 10,
  UNSPEC_CRC32CX = 11,
  UNSPEC_CRC32H = 12,
  UNSPEC_CRC32W = 13,
  UNSPEC_CRC32X = 14,
  UNSPEC_FCVTZS = 15,
  UNSPEC_FCVTZU = 16,
  UNSPEC_FJCVTZS = 17,
  UNSPEC_FRINT32Z = 18,
  UNSPEC_FRINT32X = 19,
  UNSPEC_FRINT64Z = 20,
  UNSPEC_FRINT64X = 21,
  UNSPEC_URECPE = 22,
  UNSPEC_FRECPE = 23,
  UNSPEC_FRECPS = 24,
  UNSPEC_FRECPX = 25,
  UNSPEC_FRINTA = 26,
  UNSPEC_FRINTI = 27,
  UNSPEC_FRINTM = 28,
  UNSPEC_FRINTN = 29,
  UNSPEC_FRINTP = 30,
  UNSPEC_FRINTX = 31,
  UNSPEC_FRINTZ = 32,
  UNSPEC_GOTSMALLPIC = 33,
  UNSPEC_GOTSMALLPIC28K = 34,
  UNSPEC_GOTSMALLTLS = 35,
  UNSPEC_GOTTINYPIC = 36,
  UNSPEC_GOTTINYTLS = 37,
  UNSPEC_LD1 = 38,
  UNSPEC_LD2 = 39,
  UNSPEC_LD2_DREG = 40,
  UNSPEC_LD2_DUP = 41,
  UNSPEC_LD3 = 42,
  UNSPEC_LD3_DREG = 43,
  UNSPEC_LD3_DUP = 44,
  UNSPEC_LD4 = 45,
  UNSPEC_LD4_DREG = 46,
  UNSPEC_LD4_DUP = 47,
  UNSPEC_LD2_LANE = 48,
  UNSPEC_LD3_LANE = 49,
  UNSPEC_LD4_LANE = 50,
  UNSPEC_LD64B = 51,
  UNSPEC_ST64B = 52,
  UNSPEC_ST64BV = 53,
  UNSPEC_ST64BV_RET = 54,
  UNSPEC_ST64BV0 = 55,
  UNSPEC_ST64BV0_RET = 56,
  UNSPEC_MB = 57,
  UNSPEC_MOVMEM = 58,
  UNSPEC_NOP = 59,
  UNSPEC_PACIA1716 = 60,
  UNSPEC_PACIB1716 = 61,
  UNSPEC_PACIASP = 62,
  UNSPEC_PACIBSP = 63,
  UNSPEC_PRLG_STK = 64,
  UNSPEC_REV = 65,
  UNSPEC_RBIT = 66,
  UNSPEC_SADALP = 67,
  UNSPEC_SCVTF = 68,
  UNSPEC_SETMEM = 69,
  UNSPEC_SISD_NEG = 70,
  UNSPEC_SISD_SSHL = 71,
  UNSPEC_SISD_USHL = 72,
  UNSPEC_SSHL_2S = 73,
  UNSPEC_ST1 = 74,
  UNSPEC_ST2 = 75,
  UNSPEC_ST3 = 76,
  UNSPEC_ST4 = 77,
  UNSPEC_ST2_LANE = 78,
  UNSPEC_ST3_LANE = 79,
  UNSPEC_ST4_LANE = 80,
  UNSPEC_TLS = 81,
  UNSPEC_TLSDESC = 82,
  UNSPEC_TLSLE12 = 83,
  UNSPEC_TLSLE24 = 84,
  UNSPEC_TLSLE32 = 85,
  UNSPEC_TLSLE48 = 86,
  UNSPEC_UADALP = 87,
  UNSPEC_UCVTF = 88,
  UNSPEC_USHL_2S = 89,
  UNSPEC_VSTRUCTDUMMY = 90,
  UNSPEC_SSP_SYSREG = 91,
  UNSPEC_SP_SET = 92,
  UNSPEC_SP_TEST = 93,
  UNSPEC_RSQRT = 94,
  UNSPEC_RSQRTE = 95,
  UNSPEC_RSQRTS = 96,
  UNSPEC_NZCV = 97,
  UNSPEC_XPACLRI = 98,
  UNSPEC_LD1_SVE = 99,
  UNSPEC_ST1_SVE = 100,
  UNSPEC_LDNT1_SVE = 101,
  UNSPEC_STNT1_SVE = 102,
  UNSPEC_LD1RQ = 103,
  UNSPEC_LD1_GATHER = 104,
  UNSPEC_LDFF1_GATHER = 105,
  UNSPEC_LDNT1_GATHER = 106,
  UNSPEC_ST1_SCATTER = 107,
  UNSPEC_STNT1_SCATTER = 108,
  UNSPEC_PRED_X = 109,
  UNSPEC_PRED_Z = 110,
  UNSPEC_PTEST = 111,
  UNSPEC_PTRUE = 112,
  UNSPEC_UNPACKSHI = 113,
  UNSPEC_UNPACKUHI = 114,
  UNSPEC_UNPACKSLO = 115,
  UNSPEC_UNPACKULO = 116,
  UNSPEC_PACK = 117,
  UNSPEC_WHILEGE = 118,
  UNSPEC_WHILEGT = 119,
  UNSPEC_WHILEHI = 120,
  UNSPEC_WHILEHS = 121,
  UNSPEC_WHILELE = 122,
  UNSPEC_WHILELO = 123,
  UNSPEC_WHILELS = 124,
  UNSPEC_WHILELT = 125,
  UNSPEC_WHILERW = 126,
  UNSPEC_WHILEWR = 127,
  UNSPEC_LDN = 128,
  UNSPEC_STN = 129,
  UNSPEC_INSR = 130,
  UNSPEC_CLASTA = 131,
  UNSPEC_CLASTB = 132,
  UNSPEC_FADDA = 133,
  UNSPEC_REV_SUBREG = 134,
  UNSPEC_REINTERPRET = 135,
  UNSPEC_SPECULATION_TRACKER = 136,
  UNSPEC_SPECULATION_TRACKER_REV = 137,
  UNSPEC_COPYSIGN = 138,
  UNSPEC_TTEST = 139,
  UNSPEC_UPDATE_FFR = 140,
  UNSPEC_UPDATE_FFRT = 141,
  UNSPEC_RDFFR = 142,
  UNSPEC_WRFFR = 143,
  UNSPEC_SVE_LANE_SELECT = 144,
  UNSPEC_SVE_CNT_PAT = 145,
  UNSPEC_SVE_PREFETCH = 146,
  UNSPEC_SVE_PREFETCH_GATHER = 147,
  UNSPEC_SVE_COMPACT = 148,
  UNSPEC_SVE_SPLICE = 149,
  UNSPEC_GEN_TAG = 150,
  UNSPEC_GEN_TAG_RND = 151,
  UNSPEC_TAG_SPACE = 152,
  UNSPEC_LD1RO = 153,
  UNSPEC_SALT_ADDR = 154,
  UNSPECV_PATCHABLE_AREA = 155,
  UNSPEC_ASHIFT_SIGNED = 156,
  UNSPEC_ASHIFT_UNSIGNED = 157,
  UNSPEC_ABS = 158,
  UNSPEC_FMAX = 159,
  UNSPEC_FMAXNMV = 160,
  UNSPEC_FMAXV = 161,
  UNSPEC_FMIN = 162,
  UNSPEC_FMINNMV = 163,
  UNSPEC_FMINV = 164,
  UNSPEC_FADDV = 165,
  UNSPEC_ADDV = 166,
  UNSPEC_SADDLV = 167,
  UNSPEC_UADDLV = 168,
  UNSPEC_SMAXV = 169,
  UNSPEC_SMINV = 170,
  UNSPEC_UMAXV = 171,
  UNSPEC_UMINV = 172,
  UNSPEC_SHADD = 173,
  UNSPEC_UHADD = 174,
  UNSPEC_SRHADD = 175,
  UNSPEC_URHADD = 176,
  UNSPEC_SHSUB = 177,
  UNSPEC_UHSUB = 178,
  UNSPEC_ADDHN = 179,
  UNSPEC_RADDHN = 180,
  UNSPEC_SUBHN = 181,
  UNSPEC_RSUBHN = 182,
  UNSPEC_SQDMULH = 183,
  UNSPEC_SQRDMULH = 184,
  UNSPEC_PMUL = 185,
  UNSPEC_FMULX = 186,
  UNSPEC_USQADD = 187,
  UNSPEC_SUQADD = 188,
  UNSPEC_SQXTUN = 189,
  UNSPEC_SSRA = 190,
  UNSPEC_USRA = 191,
  UNSPEC_SRSRA = 192,
  UNSPEC_URSRA = 193,
  UNSPEC_SRSHR = 194,
  UNSPEC_URSHR = 195,
  UNSPEC_SQSHLU = 196,
  UNSPEC_SQSHL = 197,
  UNSPEC_UQSHL = 198,
  UNSPEC_SQSHRUN = 199,
  UNSPEC_SQRSHRUN = 200,
  UNSPEC_SQSHRN = 201,
  UNSPEC_UQSHRN = 202,
  UNSPEC_SQRSHRN = 203,
  UNSPEC_UQRSHRN = 204,
  UNSPEC_SSHL = 205,
  UNSPEC_USHL = 206,
  UNSPEC_SRSHL = 207,
  UNSPEC_URSHL = 208,
  UNSPEC_SQRSHL = 209,
  UNSPEC_UQRSHL = 210,
  UNSPEC_SSLI = 211,
  UNSPEC_USLI = 212,
  UNSPEC_SSRI = 213,
  UNSPEC_USRI = 214,
  UNSPEC_SSHLL = 215,
  UNSPEC_USHLL = 216,
  UNSPEC_ADDP = 217,
  UNSPEC_SADDLP = 218,
  UNSPEC_UADDLP = 219,
  UNSPEC_TBL = 220,
  UNSPEC_TBX = 221,
  UNSPEC_CONCAT = 222,
  UNSPEC_ZIP1 = 223,
  UNSPEC_ZIP2 = 224,
  UNSPEC_UZP1 = 225,
  UNSPEC_UZP2 = 226,
  UNSPEC_TRN1 = 227,
  UNSPEC_TRN2 = 228,
  UNSPEC_EXT = 229,
  UNSPEC_REV64 = 230,
  UNSPEC_REV32 = 231,
  UNSPEC_REV16 = 232,
  UNSPEC_AESE = 233,
  UNSPEC_AESD = 234,
  UNSPEC_AESMC = 235,
  UNSPEC_AESIMC = 236,
  UNSPEC_SHA1C = 237,
  UNSPEC_SHA1M = 238,
  UNSPEC_SHA1P = 239,
  UNSPEC_SHA1H = 240,
  UNSPEC_SHA1SU0 = 241,
  UNSPEC_SHA1SU1 = 242,
  UNSPEC_SHA256H = 243,
  UNSPEC_SHA256H2 = 244,
  UNSPEC_SHA256SU0 = 245,
  UNSPEC_SHA256SU1 = 246,
  UNSPEC_PMULL = 247,
  UNSPEC_PMULL2 = 248,
  UNSPEC_REV_REGLIST = 249,
  UNSPEC_VEC_SHR = 250,
  UNSPEC_SQRDMLAH = 251,
  UNSPEC_SQRDMLSH = 252,
  UNSPEC_FMAXNM = 253,
  UNSPEC_FMINNM = 254,
  UNSPEC_SDOT = 255,
  UNSPEC_UDOT = 256,
  UNSPEC_SM3SS1 = 257,
  UNSPEC_SM3TT1A = 258,
  UNSPEC_SM3TT1B = 259,
  UNSPEC_SM3TT2A = 260,
  UNSPEC_SM3TT2B = 261,
  UNSPEC_SM3PARTW1 = 262,
  UNSPEC_SM3PARTW2 = 263,
  UNSPEC_SM4E = 264,
  UNSPEC_SM4EKEY = 265,
  UNSPEC_SHA512H = 266,
  UNSPEC_SHA512H2 = 267,
  UNSPEC_SHA512SU0 = 268,
  UNSPEC_SHA512SU1 = 269,
  UNSPEC_FMLAL = 270,
  UNSPEC_FMLSL = 271,
  UNSPEC_FMLAL2 = 272,
  UNSPEC_FMLSL2 = 273,
  UNSPEC_ADR = 274,
  UNSPEC_SEL = 275,
  UNSPEC_BRKA = 276,
  UNSPEC_BRKB = 277,
  UNSPEC_BRKN = 278,
  UNSPEC_BRKPA = 279,
  UNSPEC_BRKPB = 280,
  UNSPEC_PFIRST = 281,
  UNSPEC_PNEXT = 282,
  UNSPEC_CNTP = 283,
  UNSPEC_SADDV = 284,
  UNSPEC_UADDV = 285,
  UNSPEC_ANDV = 286,
  UNSPEC_IORV = 287,
  UNSPEC_XORV = 288,
  UNSPEC_ANDF = 289,
  UNSPEC_IORF = 290,
  UNSPEC_XORF = 291,
  UNSPEC_REVB = 292,
  UNSPEC_REVH = 293,
  UNSPEC_REVW = 294,
  UNSPEC_REVBHW = 295,
  UNSPEC_SMUL_HIGHPART = 296,
  UNSPEC_UMUL_HIGHPART = 297,
  UNSPEC_FMLA = 298,
  UNSPEC_FMLS = 299,
  UNSPEC_FEXPA = 300,
  UNSPEC_FMMLA = 301,
  UNSPEC_FTMAD = 302,
  UNSPEC_FTSMUL = 303,
  UNSPEC_FTSSEL = 304,
  UNSPEC_SMATMUL = 305,
  UNSPEC_UMATMUL = 306,
  UNSPEC_USMATMUL = 307,
  UNSPEC_TRN1Q = 308,
  UNSPEC_TRN2Q = 309,
  UNSPEC_UZP1Q = 310,
  UNSPEC_UZP2Q = 311,
  UNSPEC_ZIP1Q = 312,
  UNSPEC_ZIP2Q = 313,
  UNSPEC_TRN1_CONV = 314,
  UNSPEC_COND_CMPEQ_WIDE = 315,
  UNSPEC_COND_CMPGE_WIDE = 316,
  UNSPEC_COND_CMPGT_WIDE = 317,
  UNSPEC_COND_CMPHI_WIDE = 318,
  UNSPEC_COND_CMPHS_WIDE = 319,
  UNSPEC_COND_CMPLE_WIDE = 320,
  UNSPEC_COND_CMPLO_WIDE = 321,
  UNSPEC_COND_CMPLS_WIDE = 322,
  UNSPEC_COND_CMPLT_WIDE = 323,
  UNSPEC_COND_CMPNE_WIDE = 324,
  UNSPEC_COND_FABS = 325,
  UNSPEC_COND_FADD = 326,
  UNSPEC_COND_FCADD90 = 327,
  UNSPEC_COND_FCADD270 = 328,
  UNSPEC_COND_FCMEQ = 329,
  UNSPEC_COND_FCMGE = 330,
  UNSPEC_COND_FCMGT = 331,
  UNSPEC_COND_FCMLA = 332,
  UNSPEC_COND_FCMLA90 = 333,
  UNSPEC_COND_FCMLA180 = 334,
  UNSPEC_COND_FCMLA270 = 335,
  UNSPEC_COND_FCMLE = 336,
  UNSPEC_COND_FCMLT = 337,
  UNSPEC_COND_FCMNE = 338,
  UNSPEC_COND_FCMUO = 339,
  UNSPEC_COND_FCVT = 340,
  UNSPEC_COND_FCVTZS = 341,
  UNSPEC_COND_FCVTZU = 342,
  UNSPEC_COND_FDIV = 343,
  UNSPEC_COND_FMAX = 344,
  UNSPEC_COND_FMAXNM = 345,
  UNSPEC_COND_FMIN = 346,
  UNSPEC_COND_FMINNM = 347,
  UNSPEC_COND_FMLA = 348,
  UNSPEC_COND_FMLS = 349,
  UNSPEC_COND_FMUL = 350,
  UNSPEC_COND_FMULX = 351,
  UNSPEC_COND_FNEG = 352,
  UNSPEC_COND_FNMLA = 353,
  UNSPEC_COND_FNMLS = 354,
  UNSPEC_COND_FRECPX = 355,
  UNSPEC_COND_FRINTA = 356,
  UNSPEC_COND_FRINTI = 357,
  UNSPEC_COND_FRINTM = 358,
  UNSPEC_COND_FRINTN = 359,
  UNSPEC_COND_FRINTP = 360,
  UNSPEC_COND_FRINTX = 361,
  UNSPEC_COND_FRINTZ = 362,
  UNSPEC_COND_FSCALE = 363,
  UNSPEC_COND_FSQRT = 364,
  UNSPEC_COND_FSUB = 365,
  UNSPEC_COND_SCVTF = 366,
  UNSPEC_COND_UCVTF = 367,
  UNSPEC_LASTA = 368,
  UNSPEC_LASTB = 369,
  UNSPEC_ASHIFT_WIDE = 370,
  UNSPEC_ASHIFTRT_WIDE = 371,
  UNSPEC_LSHIFTRT_WIDE = 372,
  UNSPEC_LDFF1 = 373,
  UNSPEC_LDNF1 = 374,
  UNSPEC_FCADD90 = 375,
  UNSPEC_FCADD270 = 376,
  UNSPEC_FCMLA = 377,
  UNSPEC_FCMLA90 = 378,
  UNSPEC_FCMLA180 = 379,
  UNSPEC_FCMLA270 = 380,
  UNSPEC_FCMUL = 381,
  UNSPEC_FCMUL_CONJ = 382,
  UNSPEC_FCMLA_CONJ = 383,
  UNSPEC_FCMLA180_CONJ = 384,
  UNSPEC_ASRD = 385,
  UNSPEC_ADCLB = 386,
  UNSPEC_ADCLT = 387,
  UNSPEC_ADDHNB = 388,
  UNSPEC_ADDHNT = 389,
  UNSPEC_BDEP = 390,
  UNSPEC_BEXT = 391,
  UNSPEC_BGRP = 392,
  UNSPEC_CADD270 = 393,
  UNSPEC_CADD90 = 394,
  UNSPEC_CDOT = 395,
  UNSPEC_CDOT180 = 396,
  UNSPEC_CDOT270 = 397,
  UNSPEC_CDOT90 = 398,
  UNSPEC_CMLA = 399,
  UNSPEC_CMLA180 = 400,
  UNSPEC_CMLA270 = 401,
  UNSPEC_CMLA90 = 402,
  UNSPEC_CMLA_CONJ = 403,
  UNSPEC_CMLA180_CONJ = 404,
  UNSPEC_CMUL = 405,
  UNSPEC_CMUL_CONJ = 406,
  UNSPEC_COND_FCVTLT = 407,
  UNSPEC_COND_FCVTNT = 408,
  UNSPEC_COND_FCVTX = 409,
  UNSPEC_COND_FCVTXNT = 410,
  UNSPEC_COND_FLOGB = 411,
  UNSPEC_EORBT = 412,
  UNSPEC_EORTB = 413,
  UNSPEC_FADDP = 414,
  UNSPEC_FMAXNMP = 415,
  UNSPEC_FMAXP = 416,
  UNSPEC_FMINNMP = 417,
  UNSPEC_FMINP = 418,
  UNSPEC_FMLALB = 419,
  UNSPEC_FMLALT = 420,
  UNSPEC_FMLSLB = 421,
  UNSPEC_FMLSLT = 422,
  UNSPEC_HISTCNT = 423,
  UNSPEC_HISTSEG = 424,
  UNSPEC_MATCH = 425,
  UNSPEC_NMATCH = 426,
  UNSPEC_PMULLB = 427,
  UNSPEC_PMULLB_PAIR = 428,
  UNSPEC_PMULLT = 429,
  UNSPEC_PMULLT_PAIR = 430,
  UNSPEC_RADDHNB = 431,
  UNSPEC_RADDHNT = 432,
  UNSPEC_RSHRNB = 433,
  UNSPEC_RSHRNT = 434,
  UNSPEC_RSUBHNB = 435,
  UNSPEC_RSUBHNT = 436,
  UNSPEC_SABDLB = 437,
  UNSPEC_SABDLT = 438,
  UNSPEC_SADDLB = 439,
  UNSPEC_SADDLBT = 440,
  UNSPEC_SADDLT = 441,
  UNSPEC_SADDWB = 442,
  UNSPEC_SADDWT = 443,
  UNSPEC_SBCLB = 444,
  UNSPEC_SBCLT = 445,
  UNSPEC_SHRNB = 446,
  UNSPEC_SHRNT = 447,
  UNSPEC_SLI = 448,
  UNSPEC_SMAXP = 449,
  UNSPEC_SMINP = 450,
  UNSPEC_SMULHRS = 451,
  UNSPEC_SMULHS = 452,
  UNSPEC_SMULLB = 453,
  UNSPEC_SMULLT = 454,
  UNSPEC_SQCADD270 = 455,
  UNSPEC_SQCADD90 = 456,
  UNSPEC_SQDMULLB = 457,
  UNSPEC_SQDMULLBT = 458,
  UNSPEC_SQDMULLT = 459,
  UNSPEC_SQRDCMLAH = 460,
  UNSPEC_SQRDCMLAH180 = 461,
  UNSPEC_SQRDCMLAH270 = 462,
  UNSPEC_SQRDCMLAH90 = 463,
  UNSPEC_SQRSHRNB = 464,
  UNSPEC_SQRSHRNT = 465,
  UNSPEC_SQRSHRUNB = 466,
  UNSPEC_SQRSHRUNT = 467,
  UNSPEC_SQSHRNB = 468,
  UNSPEC_SQSHRNT = 469,
  UNSPEC_SQSHRUNB = 470,
  UNSPEC_SQSHRUNT = 471,
  UNSPEC_SQXTNB = 472,
  UNSPEC_SQXTNT = 473,
  UNSPEC_SQXTUNB = 474,
  UNSPEC_SQXTUNT = 475,
  UNSPEC_SRI = 476,
  UNSPEC_SSHLLB = 477,
  UNSPEC_SSHLLT = 478,
  UNSPEC_SSUBLB = 479,
  UNSPEC_SSUBLBT = 480,
  UNSPEC_SSUBLT = 481,
  UNSPEC_SSUBLTB = 482,
  UNSPEC_SSUBWB = 483,
  UNSPEC_SSUBWT = 484,
  UNSPEC_SUBHNB = 485,
  UNSPEC_SUBHNT = 486,
  UNSPEC_TBL2 = 487,
  UNSPEC_UABDLB = 488,
  UNSPEC_UABDLT = 489,
  UNSPEC_UADDLB = 490,
  UNSPEC_UADDLT = 491,
  UNSPEC_UADDWB = 492,
  UNSPEC_UADDWT = 493,
  UNSPEC_UMAXP = 494,
  UNSPEC_UMINP = 495,
  UNSPEC_UMULHRS = 496,
  UNSPEC_UMULHS = 497,
  UNSPEC_UMULLB = 498,
  UNSPEC_UMULLT = 499,
  UNSPEC_UQRSHRNB = 500,
  UNSPEC_UQRSHRNT = 501,
  UNSPEC_UQSHRNB = 502,
  UNSPEC_UQSHRNT = 503,
  UNSPEC_UQXTNB = 504,
  UNSPEC_UQXTNT = 505,
  UNSPEC_USHLLB = 506,
  UNSPEC_USHLLT = 507,
  UNSPEC_USUBLB = 508,
  UNSPEC_USUBLT = 509,
  UNSPEC_USUBWB = 510,
  UNSPEC_USUBWT = 511,
  UNSPEC_USDOT = 512,
  UNSPEC_SUDOT = 513,
  UNSPEC_BFDOT = 514,
  UNSPEC_BFMLALB = 515,
  UNSPEC_BFMLALT = 516,
  UNSPEC_BFMMLA = 517,
  UNSPEC_BFCVTN = 518,
  UNSPEC_BFCVTN2 = 519,
  UNSPEC_BFCVT = 520,
  UNSPEC_FCVTXN = 521
};
#define NUM_UNSPEC_VALUES 522
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_GET_FPCR = 1,
  UNSPECV_SET_FPCR = 2,
  UNSPECV_GET_FPSR = 3,
  UNSPECV_SET_FPSR = 4,
  UNSPECV_BLOCKAGE = 5,
  UNSPECV_PROBE_STACK_RANGE = 6,
  UNSPECV_SPECULATION_BARRIER = 7,
  UNSPECV_BTI_NOARG = 8,
  UNSPECV_BTI_C = 9,
  UNSPECV_BTI_J = 10,
  UNSPECV_BTI_JC = 11,
  UNSPECV_TSTART = 12,
  UNSPECV_TCOMMIT = 13,
  UNSPECV_TCANCEL = 14,
  UNSPEC_RNDR = 15,
  UNSPEC_RNDRRS = 16,
  UNSPECV_LX = 17,
  UNSPECV_SX = 18,
  UNSPECV_LDA = 19,
  UNSPECV_LDAP = 20,
  UNSPECV_STL = 21,
  UNSPECV_ATOMIC_CMPSW = 22,
  UNSPECV_ATOMIC_EXCHG = 23,
  UNSPECV_ATOMIC_CAS = 24,
  UNSPECV_ATOMIC_SWP = 25,
  UNSPECV_ATOMIC_OP = 26,
  UNSPECV_ATOMIC_LDOP_OR = 27,
  UNSPECV_ATOMIC_LDOP_BIC = 28,
  UNSPECV_ATOMIC_LDOP_XOR = 29,
  UNSPECV_ATOMIC_LDOP_PLUS = 30
};
#define NUM_UNSPECV_VALUES 31
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
