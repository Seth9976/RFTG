// 函数名称: sub_5fd420
// 虚拟地址: 0x5fd420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fd420(void* arg1, int32_t arg2)
{
    // 第一条实际指令: float* i = *(arg1 + 0x10)
    float* i = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 + (edx & 3)) s>> 2
    float* i_1 = i
    float var_c = fconvert.s(fconvert.t(*i_1))
    void* edi = i + eax_3
    void* var_10 = edi
    long double result = fconvert.t(((var_c & 0xff0000) | var_c u>> 0x10) u>> 8
        | ((var_c & 0xff00) | var_c << 0x10) << 8)
    float var_c_2 = fconvert.s(fconvert.t(i_1[1]))
    int32_t var_c_3 =
        ((var_c_2 & 0xff0000) | var_c_2 u>> 0x10) u>> 8 | ((var_c_2 & 0xff00) | var_c_2 << 0x10) << 8
    long double x87_r6_1 = fconvert.t(var_c_3)
    int32_t var_8
    void* eax_30
    
    if (i u>= edi)
        eax_30 = arg1
    else
        long double result_3 = fconvert.t(0.5)
        int32_t eax_11
        int32_t edx_12
        edx_12:eax_11 = sx.q(edi - i + 7)
        
        if ((eax_11 + (edx_12 & 7)) s>> 3 s>= 4)
            do
                float var_8_1 = fconvert.s(fconvert.t(*i_1))
                long double x87_r4_2 = fconvert.t(((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8)
                float var_c_4 = fconvert.s(fconvert.t(i_1[1]))
                long double x87_r3_2 = fconvert.t(((var_c_4 & 0xff0000) | var_c_4 u>> 0x10) u>> 8
                    | (var_c_4 << 0x10 | (var_c_4 & 0xff00)) << 8)
                *i = fconvert.s((result + x87_r4_2) * result_3)
                i[1] = fconvert.s((x87_r6_1 + x87_r3_2) * result_3)
                float var_8_3 = fconvert.s(fconvert.t(i_1[8]))
                long double x87_r4_6 = fconvert.t(((var_8_3 & 0xff0000) | var_8_3 u>> 0x10) u>> 8
                    | (var_8_3 << 0x10 | (var_8_3 & 0xff00)) << 8)
                float var_c_6 = fconvert.s(fconvert.t(i_1[9]))
                long double x87_r3_7 = fconvert.t(((var_c_6 & 0xff0000) | var_c_6 u>> 0x10) u>> 8
                    | (var_c_6 << 0x10 | (var_c_6 & 0xff00)) << 8)
                i[2] = fconvert.s((x87_r4_2 + x87_r4_6) * result_3)
                i[3] = fconvert.s((x87_r3_2 + x87_r3_7) * result_3)
                float var_8_5 = fconvert.s(fconvert.t(i_1[0x10]))
                long double x87_r4_10 = fconvert.t(((var_8_5 & 0xff0000) | var_8_5 u>> 0x10) u>> 8
                    | (var_8_5 << 0x10 | (var_8_5 & 0xff00)) << 8)
                float var_c_8 = fconvert.s(fconvert.t(i_1[0x11]))
                long double x87_r3_12 = fconvert.t(((var_c_8 & 0xff0000) | var_c_8 u>> 0x10) u>> 8
                    | (var_c_8 << 0x10 | (var_c_8 & 0xff00)) << 8)
                i[4] = fconvert.s((x87_r4_6 + x87_r4_10) * result_3)
                i[5] = fconvert.s((x87_r3_7 + x87_r3_12) * result_3)
                float var_8_7 = fconvert.s(fconvert.t(i_1[0x18]))
                var_8 = ((var_8_7 & 0xff0000) | var_8_7 u>> 0x10) u>> 8
                    | (var_8_7 << 0x10 | (var_8_7 & 0xff00)) << 8
                long double result_1 = fconvert.t(var_8)
                float var_c_10 = fconvert.s(fconvert.t(i_1[0x19]))
                var_c_3 = ((var_c_10 & 0xff0000) | var_c_10 u>> 0x10) u>> 8
                    | (var_c_10 << 0x10 | (var_c_10 & 0xff00)) << 8
                i = &i[8]
                i_1 -= 0xffffff80
                x87_r6_1 = fconvert.t(var_c_3)
                i[-2] = fconvert.s((x87_r4_10 + result_1) * result_3)
                result = result_1
                i[-1] = fconvert.s((x87_r3_12 + x87_r6_1) * result_3)
            while (i s< edi - 0x18)
            
            edi = var_10
        
        eax_30 = arg1
        
        if (i u< edi)
            while (true)
                i = &i[2]
                float var_8_8 = fconvert.s(fconvert.t(*i_1))
                i_1 = &i_1[8]
                var_8 = ((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
                    | (var_8_8 << 0x10 | (var_8_8 & 0xff00)) << 8
                long double result_2 = fconvert.t(var_8)
                float var_c_11 = fconvert.s(fconvert.t(i_1[-7]))
                var_c_3 = ((var_c_11 & 0xff0000) | var_c_11 u>> 0x10) u>> 8
                    | (var_c_11 << 0x10 | (var_c_11 & 0xff00)) << 8
                long double x87_r3_22 = fconvert.t(var_c_3)
                i[-2] = fconvert.s((result + result_2) * result_3)
                i[-1] = fconvert.s((x87_r6_1 + x87_r3_22) * result_3)
                
                if (i u>= edi)
                    break
                
                result = result_2
                x87_r6_1 = x87_r3_22
            
            eax_30 = arg1
            result = result_3
    
    *(eax_30 + 0x50) += 1
    *(eax_30 + 0x18) = eax_3
    int32_t ecx_2 = *(eax_30 + 0x50)
    
    if (*(eax_30 + (ecx_2 << 2) + 0x28) != 0)
        (*(eax_30 + (ecx_2 << 2) + 0x28))(eax_30, arg2, eax_3, var_10, var_c_3, var_8)
    
    return result
}
