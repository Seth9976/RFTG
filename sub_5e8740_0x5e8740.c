// 函数名称: sub_5e8740
// 虚拟地址: 0x5e8740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e8740(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x18)
    int32_t ebx = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(ebx) * fconvert.t(*(arg1 + 8)))
    int32_t edi = *(arg1 + 0x10)
    float* ecx = edi + eax_1 - 4
    int32_t edx = 0
    void* var_8 = edi + ebx - 4
    
    if (ecx u>= edi)
        long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*(edi + ebx - 4))))
        
        do
            edx += ebx - 0x40
            *ecx = fconvert.s(x87_r6_1)
            ecx -= 4
            
            if (edx * 2 s>= eax_1)
                long double x87_r6_2 = x87_r6_1 + fconvert.t(*(var_8 - 4))
                var_8 -= 4
                edx -= eax_1
                x87_r6_1 = fconvert.t(fconvert.s(x87_r6_2 * fconvert.t(0.5)))
        while (ecx u>= edi)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1
    int32_t eax_2 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_2 << 2) + 0x28) != 0)
        (*(arg1 + (eax_2 << 2) + 0x28))(arg1, arg2)
}
