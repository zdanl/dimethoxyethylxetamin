static long __undefined;

struct S0 {
   volatile signed f0 : 20;
   signed f1 : 27;
   volatile signed f2 : 18;
   volatile unsigned f3 : 21;
   signed f4 : 18;
   unsigned f5 : 3;
   volatile int32_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 24;
   const unsigned f1 : 6;
   volatile signed f2 : 27;
   signed f3 : 9;
};
#pragma pack(pop)

struct S2 {
   volatile int16_t  f0;
   int64_t  f1;
   volatile int8_t  f2;
   int8_t  f3;
   volatile uint64_t  f4;
   int16_t  f5;
   const int64_t  f6;
   uint16_t  f7;
};

struct S3 {
   const unsigned f0 : 30;
   uint32_t  f1;
   volatile struct S0  f2;
   volatile uint64_t  f3;
   unsigned f4 : 22;
   int16_t  f5;
   volatile int64_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   int64_t  f0;
   unsigned f1 : 13;
   const unsigned f2 : 2;
   const volatile int32_t  f3;
   unsigned f4 : 23;
   unsigned : 0;
};
#pragma pack(pop)

static int32_t g_3 = 0x73DF2EF5L;
static volatile uint8_t g_7[3] = {5UL,5UL,5UL};
static int32_t g_42[7] = {0x0CFADBACL,0x0CFADBACL,0x0CFADBACL,0x0CFADBACL,0x0CFADBACL,0x0CFADBACL,0x0CFADBACL};
static struct S0 g_74 = {-188,4717,-347,289,-89,1,0x35D57718L};
static uint8_t g_94 = 0UL;
static volatile int8_t g_104[3] = {0x44L,0x44L,0x44L};
static uint8_t *** volatile g_111 = &g_112;
static int8_t g_151 = 7L;
static uint64_t g_153 = 0xDB3155C3D3C4AB01LL;
static int8_t g_155 = 0xD3L;
}
