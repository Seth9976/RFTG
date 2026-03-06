// 函数名称: sub_661c60
// 虚拟地址: 0x661c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_661c60(int128_t* arg1, int128_t* arg2, int128_t* arg3)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        sub_662710(arg1, arg2)
    
    if (arg3 != 0)
        sub_662710(arg1, arg3)
    
    sub_663310(arg1)
    sub_666530(arg1, arg1[0xb].d)
    sub_666530(arg1, *(arg1 + 0x26c))
    sub_666530(arg1, arg1[0x2b].d)
    sub_666530(arg1, *(arg1 + 0x2a8))
    sub_666530(arg1, *(arg1 + 0x1f8))
    int32_t edx_1 = *(arg1 + 0x1fc)
    int128_t* var_84 = arg1
    sub_666530(var_84, edx_1)
    
    if ((*(arg1 + 0x23c) & 0x1000) != 0)
        int32_t var_54_4 = *(arg1 + 0x128)
        int128_t* var_58_4 = arg1
        sub_662250()
    
    *(arg1 + 0x23c) &= 0xffffefff
    
    if ((*(arg1 + 0x23c) & 0x2000) != 0)
        sub_666530(arg1, *(arg1 + 0x1a4))
    
    *(arg1 + 0x23c) &= 0xffffdfff
    
    if ((*(arg1 + 0x23c) & 8) != 0)
        sub_666530(arg1, arg1[0x20].d)
    
    *(arg1 + 0x23c) &= 0xfffffff7
    sub_676a10(arg1 + 0x78)
    sub_666530(arg1, *(arg1 + 0x1cc))
    int128_t* edx_3 = *(arg1 + 0x4c)
    int128_t* eax_6 = *(arg1 + 0x268)
    int32_t var_60_1 = 0x2c4
    void var_44
    __builtin_memcpy(&var_44, arg1, 0x40)
    int32_t esi_1 = *(arg1 + 0x44)
    int32_t edi = *(arg1 + 0x48)
    int128_t* result = sub_5abfc0(arg1, 0, var_60_1)
    *(arg1 + 0x44) = esi_1
    *(arg1 + 0x48) = edi
    *(arg1 + 0x4c) = edx_3
    __builtin_memcpy(arg1, &var_44, 0x40)
    *(arg1 + 0x268) = eax_6
    return result
}
