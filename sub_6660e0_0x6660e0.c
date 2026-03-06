// 函数名称: sub_6660e0
// 虚拟地址: 0x6660e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_6660e0(int128_t* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0xb8) != 0)
    if (*(arg1 + 0xb8) != 0)
        sub_6732a0(arg1 + 0x78)
    
    sub_666530(arg1, arg1[0xb].d)
    sub_666530(arg1, *(arg1 + 0x108))
    sub_666530(arg1, *(arg1 + 0x104))
    sub_666530(arg1, *(arg1 + 0x10c))
    sub_666530(arg1, arg1[0x11].d)
    sub_666530(arg1, *(arg1 + 0x114))
    int32_t var_88 = *(arg1 + 0x118)
    sub_666530(arg1, var_88)
    sub_665bf0(arg1)
    sub_666530(arg1, *(arg1 + 0x214))
    sub_666530(arg1, *(arg1 + 0x218))
    int32_t edx_3 = *(arg1 + 0x268)
    int32_t var_60_1 = 0x2c4
    void var_48
    __builtin_memcpy(&var_48, arg1, 0x40)
    int128_t* result = *(arg1 + 0x4c)
    int32_t esi_1 = *(arg1 + 0x44)
    int32_t edi = *(arg1 + 0x48)
    sub_5abfc0(arg1, 0, var_60_1)
    *(arg1 + 0x44) = esi_1
    *(arg1 + 0x48) = edi
    *(arg1 + 0x268) = edx_3
    __builtin_memcpy(arg1, &var_48, 0x40)
    *(arg1 + 0x4c) = result
    return result
}
