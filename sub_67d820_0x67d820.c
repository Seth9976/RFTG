// 函数名称: sub_67d820
// 虚拟地址: 0x67d820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_67d820(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1[0x6a]
    void* esi = arg1[0x6a]
    
    if (arg2 != 0)
        if (arg2 == 2)
            *(esi + 4) = sub_67d7f0
            return arg1
        
        *(*arg1 + 0x14) = 4
        return (**arg1)(arg1)
    
    if (*(arg1[0x71] + 8) == 0)
        *(esi + 0x30) = 0
        *(esi + 0x34) = 0
        *(esi + 4) = sub_67d630
        return arg1
    
    *(esi + 4) = sub_67d6b0
    void* eax_3 = sub_67d370(arg1)
    *(esi + 0x40) = 0
    *(esi + 0x44) = 0
    *(esi + 0x4c) = 0
    *(esi + 0x30) = 0
    *(esi + 0x34) = 0
    return eax_3
}
