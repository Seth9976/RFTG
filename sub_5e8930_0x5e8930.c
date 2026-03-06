// 函数名称: sub_5e8930
// 虚拟地址: 0x5e8930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e8930(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(esi + 8)))
    void* ecx = *(esi + 0x10)
    float* edx = ecx
    void* ebx = ecx + eax_2
    arg1 = fconvert.s(fconvert.t(*edx))
    int32_t edi = 0
    float var_8 = fconvert.s(fconvert.t(edx[1]))
    
    if (ecx u< ebx)
        long double x87_r7_4 = fconvert.t(0.5)
        
        do
            edi += eax_2
            edx = &edx[2]
            
            if (edi * 2 s>= eax - 0x80)
                long double x87_r6_1 = fconvert.t(arg1)
                ecx += 8
                *(ecx - 8) = fconvert.s(x87_r6_1)
                edi -= eax - 0x80
                long double x87_r5_1 = fconvert.t(var_8)
                *(ecx - 4) = fconvert.s(x87_r5_1)
                arg1 = fconvert.s((x87_r6_1 + fconvert.t(*edx)) * x87_r7_4)
                var_8 = fconvert.s((x87_r5_1 + fconvert.t(edx[1])) * x87_r7_4)
        while (ecx u< ebx)
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_2
    int32_t eax_3 = *(esi + 0x50)
    
    if (*(esi + (eax_3 << 2) + 0x28) != 0)
        (*(esi + (eax_3 << 2) + 0x28))(esi, arg2)
}
