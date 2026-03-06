// 函数名称: sub_5e9130
// 虚拟地址: 0x5e9130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e9130(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(edi) * fconvert.t(*(arg1 + 8)))
    int32_t ecx = *(arg1 + 0x10)
    int32_t* esi_1 = ecx + eax_1 - 4
    float var_c = fconvert.s(fconvert.t(*(ecx + edi - 4)))
    void* var_10 = ecx + edi - 4
    int32_t edx = 0
    int32_t var_c_1 =
        ((var_c & 0xff0000) | var_c u>> 0x10) u>> 8 | ((var_c & 0xff00) | var_c << 0x10) << 8
    float var_18
    float var_8
    
    if (esi_1 u>= ecx)
        long double x87_r6_1 = fconvert.t(var_c_1)
        
        do
            edx += edi - 0x40
            var_18 = fconvert.s(x87_r6_1)
            *esi_1 = ((var_18 & 0xff0000) | var_18 u>> 0x10) u>> 8
                | ((var_18 & 0xff00) | var_18 << 0x10) << 8
            esi_1 -= 4
            
            if (edx * 2 s>= eax_1)
                float var_8_1 = fconvert.s(fconvert.t(*(var_10 - 4)))
                var_10 -= 4
                var_8 = ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8
                edx -= eax_1
                var_c_1 = fconvert.s((x87_r6_1 + fconvert.t(var_8)) * fconvert.t(0.5))
                x87_r6_1 = fconvert.t(var_c_1)
        while (esi_1 u>= ecx)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1
    int32_t eax_2 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_2 << 2) + 0x28) != 0)
        (*(arg1 + (eax_2 << 2) + 0x28))(arg1, arg2, edi - 0x40, var_18, ecx, var_10, var_c_1, var_8)
}
