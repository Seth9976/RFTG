// 函数名称: sub_5c7420
// 虚拟地址: 0x5c7420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5c7420(void* arg1)
{
    // 第一条实际指令: void* ecx_3 = *(arg1 + 0x50)
    void* ecx_3 = *(arg1 + 0x50)
    
    if (ecx_3 != 0)
        *(ecx_3 + 0x54) = *(arg1 + 0x54)
    
    void* ecx = *(arg1 + 0x54)
    
    if (ecx != 0)
        *(ecx + 0x50) = *(arg1 + 0x50)
    
    if (arg1 == data_8b95d8)
        data_8b95d8 = *(arg1 + 0x54)
    
    if (arg1 == data_8b95dc)
        data_8b95dc = *(arg1 + 0x50)
    
    *(arg1 + 0x54) = data_8b95e0
    data_8b95e0 = arg1
    data_8b95d4 -= 1
}
