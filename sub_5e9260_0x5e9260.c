// 函数名称: sub_5e9260
// 虚拟地址: 0x5e9260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e9260(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(arg1 + 8)))
    void* edx = *(arg1 + 0x10)
    void* eax_3 = eax_2 + edx
    float* esi_1 = edx
    float var_c = fconvert.s(fconvert.t(*esi_1))
    int32_t edi = 0
    int32_t var_c_1 =
        ((var_c & 0xff0000) | var_c u>> 0x10) u>> 8 | ((var_c & 0xff00) | var_c << 0x10) << 8
    float var_1c
    float var_8
    
    if (edx u< eax_3)
        int32_t eax_9 = eax - 0x40
        
        do
            edi += eax_2
            esi_1 = &esi_1[1]
            
            if (edi * 2 s>= eax_9)
                long double x87_r6_1 = fconvert.t(var_c_1)
                edx += 4
                var_1c = fconvert.s(x87_r6_1)
                *(edx - 4) = ((var_1c & 0xff0000) | var_1c u>> 0x10) u>> 8
                    | ((var_1c & 0xff00) | var_1c << 0x10) << 8
                float var_8_1 = fconvert.s(fconvert.t(*esi_1))
                var_8 = ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8
                eax_9 = eax - 0x40
                edi -= eax_9
                var_c_1 = fconvert.s((x87_r6_1 + fconvert.t(var_8)) * fconvert.t(0.5))
        while (edx u< eax_3)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_2
    int32_t ecx_8 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_8 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_8 << 2) + 0x28))(arg1, arg2, var_1c, eax_2, eax_3, eax - 0x40, var_c_1, var_8)
}
