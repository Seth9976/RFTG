// 函数名称: sub_4fb130
// 虚拟地址: 0x4fb130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4fb130(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = data_3165190
    int32_t ebx = data_3165190
    void* eax = sub_4fc3d0(&data_be1cb8, arg1)
    int128_t* eax_1 = sub_4f6e90(ebx, eax, &data_83f3d3)
    void* ebx_2 = ebx * 0x118 + *sub_4f4890(*(eax + 4))
    
    if (eax_1[0x12].d s<= *eax_1)
        int32_t var_8_2 = *(ebx_2 + 0x88)
        return mods.dp.d(sx.q(arg2), *(ebx_2 + 0x8c))
    
    int32_t var_8_1 = eax_1[0x13].d
    return mods.dp.d(sx.q(arg2), *(eax_1 + 0x12c))
}
