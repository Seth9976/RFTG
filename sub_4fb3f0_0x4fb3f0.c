// 函数名称: sub_4fb3f0
// 虚拟地址: 0x4fb3f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4fb3f0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int128_t* result = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int128_t* result = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(result + 0x34) = *result + 1
    *(result + 0x38) = arg3
    return result
}
