// 函数名称: sub_5f9520
// 虚拟地址: 0x5f9520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5f9520(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t ecx = eax << 2
    int32_t edi = *(arg1 + 0x10)
    long double result = fconvert.t(*(edi + eax - 4))
    void* i = edi + ecx - 0x10
    float* esi = edi + eax - 4
    
    if (i u>= edi)
        long double x87_r6_1 = fconvert.t(3.0)
        long double result_4 = fconvert.t(0.25)
        long double result_3 = fconvert.t(0.5)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(i - edi + 0x10)
        
        if ((eax_4 + (edx_1 & 0xf)) s>> 4 s>= 4)
            do
                long double x87_r3_1 = fconvert.t(*esi)
                i -= 0x40
                esi -= 0x10
                *(i + 0x4c) = fconvert.s((result * x87_r6_1 + x87_r3_1) * result_4)
                *(i + 0x48) = fconvert.s((x87_r3_1 + result) * result_3)
                *(i + 0x44) = fconvert.s((result + x87_r3_1 * x87_r6_1) * result_4)
                *(i + 0x40) = fconvert.s(x87_r3_1)
                long double x87_r3_4 = fconvert.t(esi[3])
                *(i + 0x3c) = fconvert.s((x87_r3_1 * x87_r6_1 + x87_r3_4) * result_4)
                *(i + 0x38) = fconvert.s((x87_r3_4 + x87_r3_1) * result_3)
                *(i + 0x34) = fconvert.s((x87_r3_1 + x87_r3_4 * x87_r6_1) * result_4)
                *(i + 0x30) = fconvert.s(x87_r3_4)
                long double x87_r3_7 = fconvert.t(esi[2])
                *(i + 0x2c) = fconvert.s((x87_r3_4 * x87_r6_1 + x87_r3_7) * result_4)
                *(i + 0x28) = fconvert.s((x87_r3_7 + x87_r3_4) * result_3)
                *(i + 0x24) = fconvert.s((x87_r3_4 + x87_r3_7 * x87_r6_1) * result_4)
                *(i + 0x20) = fconvert.s(x87_r3_7)
                long double result_1 = fconvert.t(esi[1])
                *(i + 0x1c) = fconvert.s((x87_r3_7 * x87_r6_1 + result_1) * result_4)
                *(i + 0x18) = fconvert.s((result_1 + x87_r3_7) * result_3)
                *(i + 0x14) = fconvert.s((x87_r3_7 + result_1 * x87_r6_1) * result_4)
                *(i + 0x10) = fconvert.s(result_1)
                result = result_1
            while (i s>= edi + 0x30)
        
        if (i u< edi)
            result = result_3
        else
            void* eax_8 = i + 8
            int32_t ecx_3 = ((i - edi) u>> 4) + 1
            
            while (true)
                long double result_2 = fconvert.t(*esi)
                esi -= 4
                eax_8 -= 0x10
                int32_t temp1_1 = ecx_3
                ecx_3 -= 1
                *(eax_8 + 0x14) = fconvert.s((result * x87_r6_1 + result_2) * result_4)
                *(eax_8 + 0x10) = fconvert.s((result_2 + result) * result_3)
                *(eax_8 + 0xc) = fconvert.s((result + result_2 * x87_r6_1) * result_4)
                *(eax_8 + 8) = fconvert.s(result_2)
                
                if (temp1_1 == 1)
                    break
                
                result = result_2
            
            result = result_4
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = ecx
    int32_t eax_10 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_10 << 2) + 0x28) != 0)
        (*(arg1 + (eax_10 << 2) + 0x28))(arg1, arg2)
    
    return result
}
