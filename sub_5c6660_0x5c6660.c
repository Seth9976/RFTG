// 函数名称: sub_5c6660
// 虚拟地址: 0x5c6660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_5c6660(uint32_t arg1)
{
    // 第一条实际指令: void* ecx = nullptr
    void* ecx = nullptr
    
    if (arg1 == 0)
        arg1.b = data_bed328:3.b == arg1.b
        return arg1
    
    if ((arg1 & 0xffff0000) != 0)
        arg1 u>>= 0x10
        ecx = 0x10
    
    if ((arg1 & 0xff00) != 0)
        arg1 u>>= 8
        ecx |= 8
    
    if ((arg1.b & 0xf0) != 0)
        arg1 u>>= 4
        ecx |= 4
    
    if ((arg1.b & 0xc) != 0)
        arg1 u>>= 2
        ecx |= 2
    
    if ((arg1.b & 2) != 0)
        ecx |= 1
    
    int32_t eax
    eax.b = *(ecx + 0xbed32c) == 0
    return eax
}
