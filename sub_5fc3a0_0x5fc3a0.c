// 函数名称: sub_5fc3a0
// 虚拟地址: 0x5fc3a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fc3a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x10)
    float* esi = edi + eax - 4
    int32_t edx = eax << 2
    float var_8 = fconvert.s(fconvert.t(*(edi + eax - 4)))
    float* i = edi + edx - 0x10
    int32_t var_8_1 =
        ((var_8 & 0xff0000) | var_8 u>> 0x10) u>> 8 | ((var_8 & 0xff00) | var_8 << 0x10) << 8
    long double result = fconvert.t(var_8_1)
    
    if (i u>= edi)
        long double x87_r6_1 = fconvert.t(3.0)
        long double result_4 = fconvert.t(0.25)
        long double result_3 = fconvert.t(0.5)
        int32_t eax_6
        int32_t edx_6
        edx_6:eax_6 = sx.q(i - edi + 0x10)
        
        if ((eax_6 + (edx_6 & 0xf)) s>> 4 s>= 4)
            do
                float var_8_2 = fconvert.s(fconvert.t(*esi))
                long double x87_r3_2 = fconvert.t(((var_8_2 & 0xff0000) | var_8_2 u>> 0x10) u>> 8
                    | ((var_8_2 & 0xff00) | var_8_2 << 0x10) << 8)
                i[3] = fconvert.s((result * x87_r6_1 + x87_r3_2) * result_4)
                i[2] = fconvert.s((x87_r3_2 + result) * result_3)
                i[1] = fconvert.s((result + x87_r3_2 * x87_r6_1) * result_4)
                *i = fconvert.s(x87_r3_2)
                float var_8_4 = fconvert.s(fconvert.t(esi[-1]))
                long double x87_r3_6 = fconvert.t(((var_8_4 & 0xff0000) | var_8_4 u>> 0x10) u>> 8
                    | ((var_8_4 & 0xff00) | var_8_4 << 0x10) << 8)
                i[-1] = fconvert.s((x87_r3_2 * x87_r6_1 + x87_r3_6) * result_4)
                i[-2] = fconvert.s((x87_r3_6 + x87_r3_2) * result_3)
                i[-3] = fconvert.s((x87_r3_2 + x87_r3_6 * x87_r6_1) * result_4)
                i[-4] = fconvert.s(x87_r3_6)
                float var_8_6 = fconvert.s(fconvert.t(esi[-2]))
                long double x87_r3_10 = fconvert.t(((var_8_6 & 0xff0000) | var_8_6 u>> 0x10) u>> 8
                    | ((var_8_6 & 0xff00) | var_8_6 << 0x10) << 8)
                i -= 0x40
                esi -= 0x10
                i[0xb] = fconvert.s((x87_r3_6 * x87_r6_1 + x87_r3_10) * result_4)
                i[0xa] = fconvert.s((x87_r3_10 + x87_r3_6) * result_3)
                i[9] = fconvert.s((x87_r3_6 + x87_r3_10 * x87_r6_1) * result_4)
                i[8] = fconvert.s(x87_r3_10)
                float var_8_8 = fconvert.s(fconvert.t(esi[1]))
                var_8_1 = ((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
                    | ((var_8_8 & 0xff00) | var_8_8 << 0x10) << 8
                long double result_1 = fconvert.t(var_8_1)
                i[7] = fconvert.s((x87_r3_10 * x87_r6_1 + result_1) * result_4)
                i[6] = fconvert.s((result_1 + x87_r3_10) * result_3)
                i[5] = fconvert.s((x87_r3_10 + result_1 * x87_r6_1) * result_4)
                i[4] = fconvert.s(result_1)
                result = result_1
            while (i s>= edi + 0x30)
        
        if (i u< edi)
            result = result_3
        else
            void* edx_28 = &i[2]
            int32_t ecx_3 = ((i - edi) u>> 4) + 1
            
            while (true)
                long double x87_r3_16 = fconvert.t(*esi)
                esi -= 4
                float var_8_9 = fconvert.s(x87_r3_16)
                edx_28 -= 0x10
                int32_t temp1_1 = ecx_3
                ecx_3 -= 1
                var_8_1 = ((var_8_9 & 0xff0000) | var_8_9 u>> 0x10) u>> 8
                    | ((var_8_9 & 0xff00) | var_8_9 << 0x10) << 8
                long double result_2 = fconvert.t(var_8_1)
                *(edx_28 + 0x14) = fconvert.s((result * x87_r6_1 + result_2) * result_4)
                *(edx_28 + 0x10) = fconvert.s((result_2 + result) * result_3)
                *(edx_28 + 0xc) = fconvert.s((result + result_2 * x87_r6_1) * result_4)
                *(edx_28 + 8) = fconvert.s(result_2)
                
                if (temp1_1 == 1)
                    break
                
                result = result_2
            
            result = result_4
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_5 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_5 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_5 << 2) + 0x28))(arg1, arg2, edx, var_8_1)
    
    return result
}
