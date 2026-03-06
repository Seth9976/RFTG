// 函数名称: sub_5e87e0
// 虚拟地址: 0x5e87e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e87e0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(esi + 8)))
    float* ecx = *(esi + 0x10)
    float* edi = ecx
    void* ebx = ecx + eax_2
    int32_t edx = 0
    arg1 = fconvert.s(fconvert.t(*edi))
    
    while (ecx u< ebx)
        edx += eax_2
        edi = &edi[1]
        
        if (edx * 2 s>= eax - 0x40)
            long double x87_r6_1 = fconvert.t(arg1)
            ecx = &ecx[1]
            edx -= eax - 0x40
            ecx[-1] = fconvert.s(x87_r6_1)
            arg1 = fconvert.s((x87_r6_1 + fconvert.t(*edi)) * fconvert.t(0.5))
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_2
    int32_t eax_3 = *(esi + 0x50)
    
    if (*(esi + (eax_3 << 2) + 0x28) != 0)
        (*(esi + (eax_3 << 2) + 0x28))(esi, arg2)
}
