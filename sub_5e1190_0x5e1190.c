// 函数名称: sub_5e1190
// 虚拟地址: 0x5e1190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e1190(void* arg1)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    float* edi = *(eax + 0x10)
    uint32_t i_1 = *(eax + 0x18) u>> 2
    float* ebx = edi
    
    if (i_1 != 0)
        uint32_t i
        
        do
            *ebx = sub_685f40(fconvert.t(*edi) * fconvert.t(2147483647.0))
            edi = &edi[1]
            ebx = &ebx[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        eax = arg1
    
    *(eax + 0x50) += 1
    int32_t ecx = *(eax + 0x50)
    
    if (*(eax + (ecx << 2) + 0x28) != 0)
        (*(eax + (ecx << 2) + 0x28))(eax, 0x8020)
}
