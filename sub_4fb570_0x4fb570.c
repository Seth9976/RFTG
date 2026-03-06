// 函数名称: sub_4fb570
// 虚拟地址: 0x4fb570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4fb570(int32_t arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: void* eax = sub_4fc3d0(&data_be1cb8, arg1)
    void* eax = sub_4fc3d0(&data_be1cb8, arg1)
    int128_t* eax_1 = sub_4f6e90(arg2, eax, &data_83f3d3)
    int32_t esi_3 = sub_4f4890(*(eax + 4))
    int32_t result
    result.b = *(eax_1 + 0x15c)
    
    if (result.b == 0 && arg3 == 1)
        return sub_4fb4a0(arg2 * 0x118 + *esi_3, eax_1)
    
    if (result.b == 1 && arg3 == 0)
        *(eax_1 + 0x15c) = 0
    
    return result
}
