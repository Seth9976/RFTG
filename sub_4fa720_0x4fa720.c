// 函数名称: sub_4fa720
// 虚拟地址: 0x4fa720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4fa720(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int128_t* result = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int128_t* result = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(result + 0x88) = *result + 1
    int32_t* entry_ebx
    *(result + 0x8c) = *entry_ebx
    result[9].d = entry_ebx[1]
    return result
}
