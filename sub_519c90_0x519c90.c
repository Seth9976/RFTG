// 函数名称: sub_519c90
// 虚拟地址: 0x519c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_519c90()
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    
    if ((0x8000 & GetKeyState(1)) != 0)
        esi = 1
    
    if ((0x8000 & GetKeyState(2)) != 0)
        esi |= 2
    
    int16_t eax_2 = GetKeyState(4)
    
    if ((0x8000 & eax_2) != 0)
        esi |= 4
    
    if (data_30785e8 s> 0)
        *(data_27e7fdc + 0xc) = esi | 1
        return eax_2
    
    void* eax_3 = data_27e7fdc
    *(eax_3 + 0xc) = esi
    return eax_3
}
