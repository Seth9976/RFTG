// 函数名称: sub_4f77f0
// 虚拟地址: 0x4f77f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f77f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    void* eax = sub_4fc3d0(&data_be1cb8, arg3)
    int128_t* eax_1 = sub_4f6e90(arg1, eax, &data_83f3d3)
    return *(sub_4f7720(arg4, arg1 * 0x118 + *sub_4f4890(*(eax + 4)), eax_1) + 0x434)
}
