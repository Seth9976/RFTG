// 函数名称: sub_4eb880
// 虚拟地址: 0x4eb880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4eb880(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1[1]
    int32_t* esi = arg1[1]
    
    if (esi[1] == 1)
        float* edi_1 = *esi
        long double x87_r7_1 = fconvert.t(*edi_1)
        long double x87_r6_1 = fconvert.t(edi_1[1])
        x87_r6_1 - x87_r7_1
        int32_t result
        result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            *edi_1
            return result
    
    int32_t ecx = *arg1
    int32_t eax_2 = (*(arg2 + 0x2c) + ecx) * ecx
    int32_t ecx_3 = (eax_2 << 0xf) + not.d(eax_2)
    int32_t ecx_4 = (ecx_3 u>> 0xc ^ ecx_3) * 5
    int32_t eax_10 = (ecx_4 u>> 4 ^ ecx_4) * 0x809
    float ecx_10 = *(arg2 + 0x2f4)
    float var_8_1 =
        fconvert.s(fconvert.t(((eax_10 u>> 0x10 ^ eax_10) & 0x7fffff) | 0x3f800000) - fconvert.t(1.0))
    long double x87_r7_5 = fconvert.t(*(arg2 + 0x2f0))
    long double x87_r6_2 = fconvert.t(*(arg2 + 0x2e8))
    x87_r6_2 - x87_r7_5
    eax_10.w = (x87_r6_2 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        ecx_10 -= 1
    
    float var_18 = ecx_10
    float var_18_1 = fconvert.s(fconvert.t(var_8_1))
    float var_20 = ecx_10
    long double x87_r0
    long double x87_r1
    return sub_553af0(esi, x87_r0, x87_r1, fconvert.s(fconvert.t(*(arg2 + 0x2f0))), arg2, ecx_10)
}
