// 函数名称: sub_5e11f0
// 虚拟地址: 0x5e11f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e11f0(void* arg1)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    float* edi = *(eax + 0x10)
    uint32_t i_1 = *(eax + 0x18) u>> 2
    float* ebx = edi
    
    if (i_1 != 0)
        uint32_t i
        
        do
            int32_t eax_1 = sub_685f40(fconvert.t(*edi) * fconvert.t(2147483647.0))
            *ebx = ((eax_1 & 0xff0000) | eax_1 u>> 0x10) u>> 8 | ((eax_1 & 0xff00) | eax_1 << 0x10) << 8
            edi = &edi[1]
            ebx = &ebx[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        eax = arg1
    
    *(eax + 0x50) += 1
    int32_t ecx_6 = *(eax + 0x50)
    
    if (*(eax + (ecx_6 << 2) + 0x28) != 0)
        (*(eax + (ecx_6 << 2) + 0x28))(eax, 0x9020)
}
