// 函数名称: sub_4f9350
// 虚拟地址: 0x4f9350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4f9350(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int128_t* result = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int128_t* result = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(result + 0x94) = *result + 1
    *(result + 0x98) = arg3
    return result
}
