// 函数名称: sub_5fc650
// 虚拟地址: 0x5fc650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5fc650(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* i = *(arg1 + 0x10)
    void* i = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 + (edx & 3)) s>> 2
    float* i_1 = i
    void* edi = i + eax_3
    float var_8 = fconvert.s(fconvert.t(*i_1))
    int32_t var_8_1 =
        ((var_8 & 0xff0000) | var_8 u>> 0x10) u>> 8 | ((var_8 & 0xff00) | var_8 << 0x10) << 8
    long double x87_r7_1 = fconvert.t(var_8_1)
    
    if (i u< edi)
        long double x87_r6_1 = fconvert.t(0.5)
        int32_t eax_9
        int32_t edx_7
        edx_7:eax_9 = sx.q(edi - i + 3)
        
        if ((eax_9 + (edx_7 & 3)) s>> 2 s>= 4)
            do
                float var_8_2 = fconvert.s(fconvert.t(*i_1))
                long double x87_r5_2 = fconvert.t(((var_8_2 & 0xff0000) | var_8_2 u>> 0x10) u>> 8
                    | ((var_8_2 & 0xff00) | var_8_2 << 0x10) << 8)
                *i = fconvert.s((x87_r7_1 + x87_r5_2) * x87_r6_1)
                float var_8_4 = fconvert.s(fconvert.t(i_1[4]))
                long double x87_r5_6 = fconvert.t(((var_8_4 & 0xff0000) | var_8_4 u>> 0x10) u>> 8
                    | ((var_8_4 & 0xff00) | var_8_4 << 0x10) << 8)
                *(i + 4) = fconvert.s((x87_r5_2 + x87_r5_6) * x87_r6_1)
                float var_8_6 = fconvert.s(fconvert.t(i_1[8]))
                long double x87_r5_10 = fconvert.t(((var_8_6 & 0xff0000) | var_8_6 u>> 0x10) u>> 8
                    | ((var_8_6 & 0xff00) | var_8_6 << 0x10) << 8)
                *(i + 8) = fconvert.s((x87_r5_6 + x87_r5_10) * x87_r6_1)
                float var_8_8 = fconvert.s(fconvert.t(i_1[0xc]))
                var_8_1 = ((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
                    | ((var_8_8 & 0xff00) | var_8_8 << 0x10) << 8
                long double x87_r5_14 = fconvert.t(var_8_1)
                i += 0x10
                i_1 = &i_1[0x10]
                x87_r7_1 = x87_r5_14
                *(i - 4) = fconvert.s((x87_r5_10 + x87_r5_14) * x87_r6_1)
            while (i s< edi - 0xc)
        
        while (i u< edi)
            i += 4
            float var_8_9 = fconvert.s(fconvert.t(*i_1))
            i_1 = &i_1[4]
            var_8_1 = ((var_8_9 & 0xff0000) | var_8_9 u>> 0x10) u>> 8
                | ((var_8_9 & 0xff00) | var_8_9 << 0x10) << 8
            long double x87_r5_18 = fconvert.t(var_8_1)
            long double x87_r7_9 = x87_r7_1 + x87_r5_18
            x87_r7_1 = x87_r5_18
            *(i - 4) = fconvert.s(x87_r7_9 * x87_r6_1)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t ecx_2 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_2 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_2 << 2) + 0x28))(arg1, arg2, eax_3, var_8_1)
}
