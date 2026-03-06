// 函数名称: sub_5d5f90
// 虚拟地址: 0x5d5f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d5f90(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return arg1
    
    int32_t esi = *(arg1 + 8)
    int32_t edi = *(arg1 + 0xc)
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_c = esi
    int32_t var_8 = edi
    
    if (arg2 != 0)
        return sub_5d4dd0(arg2, &var_14, arg1 + 0x24)
    
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x2c) = esi
    *(arg1 + 0x30) = edi
    return 1
}
