// 函数名称: sub_5fbf80
// 虚拟地址: 0x5fbf80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fbf80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x10)
    float* esi = edi + eax - 4
    int32_t edx = eax * 2
    float var_8 = fconvert.s(fconvert.t(*(edi + eax - 4)))
    float* i = edi + edx - 8
    int32_t var_8_1 =
        ((var_8 & 0xff0000) | var_8 u>> 0x10) u>> 8 | ((var_8 & 0xff00) | var_8 << 0x10) << 8
    long double result = fconvert.t(var_8_1)
    
    if (i u>= edi)
        long double result_3 = fconvert.t(0.5)
        int32_t eax_6
        int32_t edx_6
        edx_6:eax_6 = sx.q(i - edi + 8)
        
        if ((eax_6 + (edx_6 & 7)) s>> 3 s>= 4)
            do
                float var_8_2 = fconvert.s(fconvert.t(*esi))
                long double x87_r5_2 = fconvert.t(((var_8_2 & 0xff0000) | var_8_2 u>> 0x10) u>> 8
                    | ((var_8_2 & 0xff00) | var_8_2 << 0x10) << 8)
                i[1] = fconvert.s((result + x87_r5_2) * result_3)
                *i = fconvert.s(x87_r5_2)
                float var_8_4 = fconvert.s(fconvert.t(esi[-1]))
                long double x87_r5_6 = fconvert.t(((var_8_4 & 0xff0000) | var_8_4 u>> 0x10) u>> 8
                    | ((var_8_4 & 0xff00) | var_8_4 << 0x10) << 8)
                i[-1] = fconvert.s((x87_r5_2 + x87_r5_6) * result_3)
                i[-2] = fconvert.s(x87_r5_6)
                float var_8_6 = fconvert.s(fconvert.t(esi[-2]))
                long double x87_r5_10 = fconvert.t(((var_8_6 & 0xff0000) | var_8_6 u>> 0x10) u>> 8
                    | ((var_8_6 & 0xff00) | var_8_6 << 0x10) << 8)
                i[-3] = fconvert.s((x87_r5_6 + x87_r5_10) * result_3)
                i[-4] = fconvert.s(x87_r5_10)
                float var_8_8 = fconvert.s(fconvert.t(esi[-3]))
                var_8_1 = ((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
                    | ((var_8_8 & 0xff00) | var_8_8 << 0x10) << 8
                long double result_1 = fconvert.t(var_8_1)
                i -= 0x20
                esi -= 0x10
                i[3] = fconvert.s((x87_r5_10 + result_1) * result_3)
                i[2] = fconvert.s(result_1)
                result = result_1
            while (i s>= edi + 0x18)
        
        if (i u>= edi)
            while (true)
                i -= 8
                float var_8_9 = fconvert.s(fconvert.t(*esi))
                esi -= 4
                var_8_1 = ((var_8_9 & 0xff0000) | var_8_9 u>> 0x10) u>> 8
                    | ((var_8_9 & 0xff00) | var_8_9 << 0x10) << 8
                long double result_2 = fconvert.t(var_8_1)
                i[3] = fconvert.s((result + result_2) * result_3)
                result = result_3
                i[2] = fconvert.s(result_2)
                
                if (i u< edi)
                    break
                
                result_3 = result
                result = result_2
        else
            result = result_3
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_2 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_2 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_2 << 2) + 0x28))(arg1, arg2, edx, var_8_1)
    
    return result
}
