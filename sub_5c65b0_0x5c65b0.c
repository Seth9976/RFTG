// 函数名称: sub_5c65b0
// 虚拟地址: 0x5c65b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5c65b0(uint32_t arg1)
{
    // 第一条实际指令: void* ecx = nullptr
    void* ecx = nullptr
    
    if (arg1 == 0)
        data_bed328:3.b += 1
        return 
    
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
    
    *(ecx + 0xbed32c) += 1
}
