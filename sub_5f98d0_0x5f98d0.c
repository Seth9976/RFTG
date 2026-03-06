// 函数名称: sub_5f98d0
// 虚拟地址: 0x5f98d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5f98d0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* i = *(arg1 + 0x10)
    void* i = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 - edx) s>> 1
    float* i_1 = i
    void* edi = i + eax_3
    long double result = fconvert.t(*i_1)
    long double x87_r6 = fconvert.t(i_1[1])
    
    if (i u< edi)
        long double result_3 = fconvert.t(0.5)
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = sx.q(edi - i + 7)
        
        if ((eax_7 + (edx_1 & 7)) s>> 3 s>= 4)
            do
                long double x87_r4_1 = fconvert.t(*i_1)
                i += 0x20
                long double x87_r3_1 = fconvert.t(i_1[1])
                i_1 = &i_1[0x10]
                *(i - 0x20) = fconvert.s((result + x87_r4_1) * result_3)
                *(i - 0x1c) = fconvert.s((x87_r6 + x87_r3_1) * result_3)
                long double x87_r4_4 = fconvert.t(i_1[-0xc])
                long double x87_r3_5 = fconvert.t(i_1[-0xb])
                *(i - 0x18) = fconvert.s((x87_r4_1 + x87_r4_4) * result_3)
                *(i - 0x14) = fconvert.s((x87_r3_1 + x87_r3_5) * result_3)
                long double x87_r4_7 = fconvert.t(i_1[-8])
                long double x87_r3_9 = fconvert.t(i_1[-7])
                *(i - 0x10) = fconvert.s((x87_r4_4 + x87_r4_7) * result_3)
                *(i - 0xc) = fconvert.s((x87_r3_5 + x87_r3_9) * result_3)
                long double result_1 = fconvert.t(i_1[-4])
                x87_r6 = fconvert.t(i_1[-3])
                *(i - 8) = fconvert.s((x87_r4_7 + result_1) * result_3)
                result = result_1
                *(i - 4) = fconvert.s((x87_r3_9 + x87_r6) * result_3)
            while (i s< edi - 0x18)
        
        if (i u< edi)
            while (true)
                long double result_2 = fconvert.t(*i_1)
                i += 8
                long double x87_r3_17 = fconvert.t(i_1[1])
                i_1 = &i_1[4]
                *(i - 8) = fconvert.s((result + result_2) * result_3)
                *(i - 4) = fconvert.s((x87_r6 + x87_r3_17) * result_3)
                
                if (i u>= edi)
                    break
                
                result = result_2
                x87_r6 = x87_r3_17
            
            result = result_3
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t eax_11 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_11 << 2) + 0x28) != 0)
        (*(arg1 + (eax_11 << 2) + 0x28))(arg1, arg2)
    
    return result
}
