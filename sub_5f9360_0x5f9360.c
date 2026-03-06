// 函数名称: sub_5f9360
// 虚拟地址: 0x5f9360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5f9360(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x18)
    void* eax = *(arg1 + 0x18)
    void* ecx = eax * 2
    int32_t edi = *(arg1 + 0x10)
    long double result = fconvert.t(*(edi + eax - 4))
    void* i = edi + ecx - 8
    float* esi = edi + eax - 4
    
    if (i u>= edi)
        long double result_3 = fconvert.t(0.5)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(i - edi + 8)
        
        if ((eax_4 + (edx_1 & 7)) s>> 3 s>= 4)
            do
                long double x87_r5_1 = fconvert.t(*esi)
                i -= 0x20
                esi -= 0x10
                *(i + 0x24) = fconvert.s((result + x87_r5_1) * result_3)
                *(i + 0x20) = fconvert.s(x87_r5_1)
                long double x87_r5_4 = fconvert.t(esi[3])
                *(i + 0x1c) = fconvert.s((x87_r5_1 + x87_r5_4) * result_3)
                *(i + 0x18) = fconvert.s(x87_r5_4)
                long double x87_r5_7 = fconvert.t(esi[2])
                *(i + 0x14) = fconvert.s((x87_r5_4 + x87_r5_7) * result_3)
                *(i + 0x10) = fconvert.s(x87_r5_7)
                long double result_1 = fconvert.t(esi[1])
                *(i + 0xc) = fconvert.s((x87_r5_7 + result_1) * result_3)
                *(i + 8) = fconvert.s(result_1)
                result = result_1
            while (i s>= edi + 0x18)
        
        if (i u>= edi)
            while (true)
                long double result_2 = fconvert.t(*esi)
                i -= 8
                esi -= 4
                *(i + 0xc) = fconvert.s((result + result_2) * result_3)
                result = result_3
                *(i + 8) = fconvert.s(result_2)
                
                if (i u< edi)
                    break
                
                result_3 = result
                result = result_2
        else
            result = result_3
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = ecx
    int32_t eax_9 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_9 << 2) + 0x28) != 0)
        (*(arg1 + (eax_9 << 2) + 0x28))(arg1, arg2)
    
    return result
}
