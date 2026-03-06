// 函数名称: sub_65dad0
// 虚拟地址: 0x65dad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_65dad0(float* arg1 @ esi, void* arg2 @ edi)
{
    // 第一条实际指令: int32_t ebx = 2
    int32_t ebx = 2
    int32_t var_c = 2
    *arg1 = fconvert.s(fconvert.t(*arg1) * fconvert.t(0.5))
    
    if (arg2 s< 2)
        return 
    
    void* var_8_1 = arg2 - 1
    
    do
        void* ecx_1 = arg2
        
        if (arg2 s>= ebx)
            if (var_8_1 s>= 4)
                int32_t i_1 = ((arg2 - ebx - 3) u>> 2) + 1
                void* eax = &arg1[arg2 - 2]
                ecx_1 -= i_1 << 2
                int32_t i
                
                do
                    long double x87_r7_2 = fconvert.t(*eax)
                    eax -= 0x10
                    i = i_1
                    i_1 -= 1
                    *(eax + 0x10) = fconvert.s(x87_r7_2 - fconvert.t(*(eax + 0x18)))
                    long double x87_r7_4 = fconvert.t(*(eax + 0x18))
                    *(eax + 0x18) = fconvert.s(x87_r7_4 + x87_r7_4)
                    *(eax + 0xc) = fconvert.s(fconvert.t(*(eax + 0xc)) - fconvert.t(*(eax + 0x14)))
                    long double x87_r7_8 = fconvert.t(*(eax + 0x14))
                    *(eax + 0x14) = fconvert.s(x87_r7_8 + x87_r7_8)
                    *(eax + 8) = fconvert.s(fconvert.t(*(eax + 8)) - fconvert.t(*(eax + 0x10)))
                    long double x87_r7_12 = fconvert.t(*(eax + 0x10))
                    *(eax + 0x10) = fconvert.s(x87_r7_12 + x87_r7_12)
                    *(eax + 4) = fconvert.s(fconvert.t(*(eax + 4)) - fconvert.t(*(eax + 0xc)))
                    long double x87_r7_16 = fconvert.t(*(eax + 0xc))
                    *(eax + 0xc) = fconvert.s(x87_r7_16 + x87_r7_16)
                while (i != 1)
                ebx = var_c
            
            while (ecx_1 s>= ebx)
                long double x87_r7_18 = fconvert.t(arg1[ecx_1 - 2])
                ecx_1 -= 1
                arg1[ecx_1 - 1] = fconvert.s(x87_r7_18 - fconvert.t(arg1[ecx_1 + 1]))
                long double x87_r7_20 = fconvert.t(arg1[ecx_1 + 1])
                arg1[ecx_1 + 1] = fconvert.s(x87_r7_20 + x87_r7_20)
        
        var_8_1 -= 1
        ebx += 1
        var_c = ebx
    while (ebx s<= arg2)
}
