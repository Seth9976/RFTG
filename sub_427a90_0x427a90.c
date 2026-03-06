// 函数名称: sub_427a90
// 虚拟地址: 0x427a90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_427a90(void* arg1)
{
    // 第一条实际指令: int32_t ecx = sx.d(*(arg1 + 0xe))
    int32_t ecx = sx.d(*(arg1 + 0xe))
    
    if ((*(arg1 + 0x10) & 2) != 0)
        ecx = 6
    
    if ((data_31602d8 & 1) == 0)
        int32_t edx_1 = data_307ba4c
        data_31602d8.d |= 1
        data_315fb6c = edx_1
        data_315fb70 = data_307ba50
        data_315fb74 = 0
        data_315fb78 = 0
        data_315fb7c = data_307ba34
        data_315fb80 = data_307ba38
        data_315fb84 = data_307ba3c
        data_315fb88 = data_307ba40
        data_315fb8c = data_307ba44
        data_315fb90 = data_307ba48
        data_315fb94 = data_307ba5c
        data_315fb98 = data_307ba60
        data_315fb9c = data_307ba54
        data_315fba0 = data_307ba58
    
    return (&data_315fb6c)[(*(arg1 + 0x10) & 1) + (ecx << 1)]
}
