// 函数名称: sub_5f9a00
// 虚拟地址: 0x5f9a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5f9a00(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t ecx = eax << 2
    int32_t edi = *(arg1 + 0x10)
    long double result = fconvert.t(*(edi + eax - 4))
    long double x87_r6 = fconvert.t(*(edi + eax - 8))
    void* esi = edi + eax - 8
    float* i = edi + ecx - 0x20
    
    if (i u>= edi)
        long double x87_r5_1 = fconvert.t(3.0)
        long double result_3 = fconvert.t(0.25)
        long double x87_r3_1 = fconvert.t(0.5)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(i - edi + 0x20)
        
        if ((eax_4 + (edx_1 & 0x1f)) s>> 5 s>= 4)
            do
                long double x87_r2_1 = fconvert.t(*(esi + 4))
                long double x87_r1_1 = fconvert.t(*esi)
                i[7] = fconvert.s((result * x87_r5_1 + x87_r2_1) * result_3)
                i[6] = fconvert.s((x87_r6 * x87_r5_1 + x87_r1_1) * result_3)
                i[5] = fconvert.s((x87_r2_1 + result) * x87_r3_1)
                i[4] = fconvert.s((x87_r1_1 + x87_r6) * x87_r3_1)
                i[3] = fconvert.s((result + x87_r2_1 * x87_r5_1) * result_3)
                i[2] = fconvert.s((x87_r6 + x87_r1_1 * x87_r5_1) * result_3)
                i[1] = fconvert.s(x87_r2_1)
                *i = fconvert.s(x87_r1_1)
                long double x87_r2_4 = fconvert.t(*(esi - 4))
                long double x87_r1_6 = fconvert.t(*(esi - 8))
                i[-1] = fconvert.s((x87_r2_1 * x87_r5_1 + x87_r2_4) * result_3)
                i[-2] = fconvert.s((x87_r1_1 * x87_r5_1 + x87_r1_6) * result_3)
                i[-3] = fconvert.s((x87_r2_4 + x87_r2_1) * x87_r3_1)
                i[-4] = fconvert.s((x87_r1_6 + x87_r1_1) * x87_r3_1)
                i[-5] = fconvert.s((x87_r2_1 + x87_r2_4 * x87_r5_1) * result_3)
                i[-6] = fconvert.s((x87_r1_1 + x87_r1_6 * x87_r5_1) * result_3)
                i[-7] = fconvert.s(x87_r2_4)
                i[-8] = fconvert.s(x87_r1_6)
                long double x87_r2_7 = fconvert.t(*(esi - 0xc))
                long double x87_r1_11 = fconvert.t(*(esi - 0x10))
                i[-9] = fconvert.s((x87_r2_4 * x87_r5_1 + x87_r2_7) * result_3)
                i = &i[-0x20]
                esi -= 0x20
                i[0x16] = fconvert.s((x87_r1_6 * x87_r5_1 + x87_r1_11) * result_3)
                i[0x15] = fconvert.s((x87_r2_7 + x87_r2_4) * x87_r3_1)
                i[0x14] = fconvert.s((x87_r1_11 + x87_r1_6) * x87_r3_1)
                i[0x13] = fconvert.s((x87_r2_4 + x87_r2_7 * x87_r5_1) * result_3)
                i[0x12] = fconvert.s((x87_r1_6 + x87_r1_11 * x87_r5_1) * result_3)
                i[0x11] = fconvert.s(x87_r2_7)
                i[0x10] = fconvert.s(x87_r1_11)
                long double result_1 = fconvert.t(*(esi + 0xc))
                long double x87_r1_16 = fconvert.t(*(esi + 8))
                i[0xf] = fconvert.s((x87_r2_7 * x87_r5_1 + result_1) * result_3)
                i[0xe] = fconvert.s((x87_r1_11 * x87_r5_1 + x87_r1_16) * result_3)
                i[0xd] = fconvert.s((result_1 + x87_r2_7) * x87_r3_1)
                i[0xc] = fconvert.s((x87_r1_16 + x87_r1_11) * x87_r3_1)
                i[0xb] = fconvert.s((x87_r2_7 + result_1 * x87_r5_1) * result_3)
                i[0xa] = fconvert.s((x87_r1_11 + x87_r1_16 * x87_r5_1) * result_3)
                i[9] = fconvert.s(result_1)
                result = result_1
                i[8] = fconvert.s(x87_r1_16)
                x87_r6 = x87_r1_16
            while (i s>= edi + 0x60)
        
        if (i u>= edi)
            void* eax_8 = &i[6]
            int32_t ecx_3 = ((i - edi) u>> 5) + 1
            
            while (true)
                long double result_2 = fconvert.t(*(esi + 4))
                esi -= 8
                long double x87_r1_21 = fconvert.t(*(esi + 8))
                eax_8 -= 0x20
                int32_t temp1_1 = ecx_3
                ecx_3 -= 1
                *(eax_8 + 0x24) = fconvert.s((result * x87_r5_1 + result_2) * result_3)
                *(eax_8 + 0x20) = fconvert.s((x87_r6 * x87_r5_1 + x87_r1_21) * result_3)
                *(eax_8 + 0x1c) = fconvert.s((result_2 + result) * x87_r3_1)
                *(eax_8 + 0x18) = fconvert.s((x87_r1_21 + x87_r6) * x87_r3_1)
                *(eax_8 + 0x14) = fconvert.s((result + result_2 * x87_r5_1) * result_3)
                *(eax_8 + 0x10) = fconvert.s((x87_r6 + x87_r1_21 * x87_r5_1) * result_3)
                *(eax_8 + 0xc) = fconvert.s(result_2)
                result = result_2
                *(eax_8 + 8) = fconvert.s(x87_r1_21)
                
                if (temp1_1 == 1)
                    break
                
                x87_r6 = x87_r1_21
            
            result = result_3
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = ecx
    int32_t eax_10 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_10 << 2) + 0x28) != 0)
        (*(arg1 + (eax_10 << 2) + 0x28))(arg1, arg2)
    
    return result
}
