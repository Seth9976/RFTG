// 函数名称: sub_5e9380
// 虚拟地址: 0x5e9380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e9380(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x18)
    int32_t ebx = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(ebx) * fconvert.t(*(arg1 + 8)))
    int32_t edx = *(arg1 + 0x10)
    void* esi_1 = edx + eax_1 - 8
    float var_14 = fconvert.s(fconvert.t(*(edx + ebx - 4)))
    float var_14_1 = fconvert.s(fconvert.t(*(edx + ebx - 8)))
    float* edx_1 = edx + ebx - 8
    int32_t var_10 =
        ((var_14 & 0xff0000) | var_14 u>> 0x10) u>> 8 | ((var_14 & 0xff00) | var_14 << 0x10) << 8
    int32_t edi = 0
    int32_t var_14_2 = ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
        | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8
    float var_24
    float var_20
    float var_c
    int32_t var_8
    
    if (esi_1 u>= edx)
        long double x87_r7_4 = fconvert.t(0.5)
        long double x87_r6_1 = fconvert.t(var_10)
        long double x87_r5_1 = fconvert.t(var_14_2)
        
        do
            edi += ebx - 0x80
            var_20 = fconvert.s(x87_r6_1)
            esi_1 -= 8
            var_24 = fconvert.s(x87_r5_1)
            *(esi_1 + 0xc) = ((var_20 & 0xff0000) | var_20 u>> 0x10) u>> 8
                | (var_20 << 0x10 | (var_20 & 0xff00)) << 8
            *(esi_1 + 8) = ((var_24 & 0xff0000) | var_24 u>> 0x10) u>> 8
                | (var_24 << 0x10 | (var_24 & 0xff00)) << 8
            
            if (edi * 2 s>= eax_1)
                long double x87_r4_1 = fconvert.t(edx_1[-1])
                edx_1 -= 8
                float var_8_1 = fconvert.s(x87_r4_1)
                var_8 = ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8
                var_10 = fconvert.s((x87_r6_1 + fconvert.t(var_8)) * x87_r7_4)
                float var_c_1 = fconvert.s(fconvert.t(*edx_1))
                edi -= eax_1
                var_c = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                    | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8
                var_14_2 = fconvert.s((x87_r5_1 + fconvert.t(var_c)) * x87_r7_4)
                x87_r6_1 = fconvert.t(var_10)
                x87_r5_1 = fconvert.t(var_14_2)
        while (esi_1 u>= edx)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1
    int32_t ecx_14 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_14 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_14 << 2) + 0x28))(arg1, arg2, ebx - 0x80, var_24, var_20, edx, eax_1, var_14_2, 
            var_10, var_c, var_8)
}
