// 函数名称: sub_4f9300
// 虚拟地址: 0x4f9300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4f9300(int32_t arg1, int32_t arg2, char* arg3, char arg4)
{
    // 第一条实际指令: int128_t* eax_1 = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int128_t* eax_1 = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_1 + 0x64) = *eax_1 + 1
    int32_t* result = sub_4c4590(arg3)
    *(eax_1 + 0x151) = arg4
    return result
}
