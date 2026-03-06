// 函数名称: sub_5f9450
// 虚拟地址: 0x5f9450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f9450(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* i = *(arg1 + 0x10)
    void* i = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 - edx) s>> 1
    void* edi = i + eax_3
    float* i_1 = i
    long double x87_r7 = fconvert.t(*i_1)
    
    if (i u< edi)
        long double x87_r6_1 = fconvert.t(0.5)
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = sx.q(edi - i + 3)
        
        if ((eax_7 + (edx_1 & 3)) s>> 2 s>= 4)
            do
                long double x87_r5_1 = fconvert.t(*i_1)
                i += 0x10
                i_1 = &i_1[8]
                *(i - 0x10) = fconvert.s((x87_r7 + x87_r5_1) * x87_r6_1)
                long double x87_r5_4 = fconvert.t(i_1[-6])
                *(i - 0xc) = fconvert.s((x87_r5_1 + x87_r5_4) * x87_r6_1)
                long double x87_r5_7 = fconvert.t(i_1[-4])
                *(i - 8) = fconvert.s((x87_r5_4 + x87_r5_7) * x87_r6_1)
                long double x87_r5_10 = fconvert.t(i_1[-2])
                x87_r7 = x87_r5_10
                *(i - 4) = fconvert.s((x87_r5_7 + x87_r5_10) * x87_r6_1)
            while (i s< edi - 0xc)
        
        while (i u< edi)
            long double x87_r5_13 = fconvert.t(*i_1)
            i += 4
            i_1 = &i_1[2]
            long double x87_r7_8 = x87_r7 + x87_r5_13
            x87_r7 = x87_r5_13
            *(i - 4) = fconvert.s(x87_r7_8 * x87_r6_1)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2)
}
