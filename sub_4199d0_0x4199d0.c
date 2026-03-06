// 函数名称: sub_4199d0
// 虚拟地址: 0x4199d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4199d0()
{
    // 第一条实际指令: float entry_ebx
    float entry_ebx
    int128_t* eax_2 =
        sub_4f6e90(entry_ebx, sub_4fc3d0(&data_be1cb8, **(data_27e7a40 + 0x548)), &data_83f3d3)
    int32_t edx = *eax_2
    eax_2[6].d = fconvert.s(float.t(0))
    *(eax_2 + 0x5c) = edx + 1
    int32_t esi_2 = **(data_27e7a40 + 0x548)
    int32_t var_10 = 0
    sub_4fa4e0(esi_2, entry_ebx, (edx + 1).b)
    int128_t* result = sub_4f6e90(entry_ebx, sub_4fc3d0(&data_be1cb8, esi_2), &data_83f3d3)
    long double x87_r7_1 = float.t(0)
    *(result + 0x14) = fconvert.s(x87_r7_1)
    result[1].d = fconvert.s(x87_r7_1)
    return result
}
