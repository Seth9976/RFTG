// 函数名称: sub_5e9550
// 虚拟地址: 0x5e9550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e9550(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(arg1 + 8)))
    void* edx = *(arg1 + 0x10)
    void* eax_3 = eax_2 + edx
    float* esi_1 = edx
    int32_t edi = 0
    float var_14 = fconvert.s(fconvert.t(*esi_1))
    float var_14_1 = fconvert.s(fconvert.t(esi_1[1]))
    int32_t var_10 =
        ((var_14 & 0xff0000) | var_14 u>> 0x10) u>> 8 | ((var_14 & 0xff00) | var_14 << 0x10) << 8
    int32_t var_14_2 = ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
        | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8
    float var_28
    float var_24
    float var_c
    int32_t var_8
    
    if (edx u< eax_3)
        long double x87_r7_4 = fconvert.t(0.5)
        int32_t eax_14 = eax - 0x80
        
        do
            edi += eax_2
            esi_1 = &esi_1[2]
            
            if (edi * 2 s>= eax_14)
                long double x87_r6_1 = fconvert.t(var_10)
                edx += 8
                var_24 = fconvert.s(x87_r6_1)
                long double x87_r5_1 = fconvert.t(var_14_2)
                var_28 = fconvert.s(x87_r5_1)
                *(edx - 8) = ((var_24 & 0xff0000) | var_24 u>> 0x10) u>> 8
                    | (var_24 << 0x10 | (var_24 & 0xff00)) << 8
                *(edx - 4) = ((var_28 & 0xff0000) | var_28 u>> 0x10) u>> 8
                    | (var_28 << 0x10 | (var_28 & 0xff00)) << 8
                float var_8_1 = fconvert.s(fconvert.t(*esi_1))
                var_8 = ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8
                var_10 = fconvert.s((x87_r6_1 + fconvert.t(var_8)) * x87_r7_4)
                float var_c_1 = fconvert.s(fconvert.t(esi_1[1]))
                var_c = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                    | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8
                eax_14 = eax - 0x80
                edi -= eax_14
                var_14_2 = fconvert.s((x87_r5_1 + fconvert.t(var_c)) * x87_r7_4)
        while (edx u< eax_3)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_2
    int32_t ecx_14 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_14 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_14 << 2) + 0x28))(arg1, arg2, var_28, var_24, eax_2, eax_3, eax - 0x80, 
            var_14_2, var_10, var_c, var_8)
}
