// 函数名称: sub_5f9770
// 虚拟地址: 0x5f9770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f9770(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x18)
    void* eax = *(arg1 + 0x18)
    void* ecx = eax * 2
    int32_t edi = *(arg1 + 0x10)
    long double x87_r7 = fconvert.t(*(edi + eax - 4))
    long double x87_r6 = fconvert.t(*(edi + eax - 8))
    float* esi = edi + eax - 8
    void* i = edi + ecx - 0x10
    
    if (i u>= edi)
        long double x87_r5_1 = fconvert.t(0.5)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(i - edi + 0x10)
        
        if ((eax_4 + (edx_1 & 0xf)) s>> 4 s>= 4)
            do
                long double x87_r4_1 = fconvert.t(esi[1])
                i -= 0x40
                long double x87_r3_1 = fconvert.t(*esi)
                esi -= 0x20
                *(i + 0x4c) = fconvert.s((x87_r7 + x87_r4_1) * x87_r5_1)
                *(i + 0x48) = fconvert.s((x87_r6 + x87_r3_1) * x87_r5_1)
                *(i + 0x44) = fconvert.s(x87_r4_1)
                *(i + 0x40) = fconvert.s(x87_r3_1)
                long double x87_r4_4 = fconvert.t(esi[7])
                long double x87_r3_5 = fconvert.t(esi[6])
                *(i + 0x3c) = fconvert.s((x87_r4_1 + x87_r4_4) * x87_r5_1)
                *(i + 0x38) = fconvert.s((x87_r3_1 + x87_r3_5) * x87_r5_1)
                *(i + 0x34) = fconvert.s(x87_r4_4)
                *(i + 0x30) = fconvert.s(x87_r3_5)
                long double x87_r4_7 = fconvert.t(esi[5])
                long double x87_r3_9 = fconvert.t(esi[4])
                *(i + 0x2c) = fconvert.s((x87_r4_4 + x87_r4_7) * x87_r5_1)
                *(i + 0x28) = fconvert.s((x87_r3_5 + x87_r3_9) * x87_r5_1)
                *(i + 0x24) = fconvert.s(x87_r4_7)
                *(i + 0x20) = fconvert.s(x87_r3_9)
                long double x87_r4_10 = fconvert.t(esi[3])
                long double x87_r3_13 = fconvert.t(esi[2])
                *(i + 0x1c) = fconvert.s((x87_r4_7 + x87_r4_10) * x87_r5_1)
                *(i + 0x18) = fconvert.s((x87_r3_9 + x87_r3_13) * x87_r5_1)
                *(i + 0x14) = fconvert.s(x87_r4_10)
                x87_r7 = x87_r4_10
                *(i + 0x10) = fconvert.s(x87_r3_13)
                x87_r6 = x87_r3_13
            while (i s>= edi + 0x30)
        
        if (i u>= edi)
            void* eax_8 = i + 8
            int32_t ecx_3 = ((i - edi) u>> 4) + 1
            
            while (true)
                long double x87_r4_13 = fconvert.t(esi[1])
                esi -= 8
                long double x87_r3_17 = fconvert.t(esi[2])
                eax_8 -= 0x10
                int32_t temp1_1 = ecx_3
                ecx_3 -= 1
                *(eax_8 + 0x14) = fconvert.s((x87_r7 + x87_r4_13) * x87_r5_1)
                *(eax_8 + 0x10) = fconvert.s((x87_r6 + x87_r3_17) * x87_r5_1)
                *(eax_8 + 0xc) = fconvert.s(x87_r4_13)
                x87_r7 = x87_r4_13
                *(eax_8 + 8) = fconvert.s(x87_r3_17)
                
                if (temp1_1 == 1)
                    break
                
                x87_r6 = x87_r3_17
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = ecx
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2)
}
