// 函数名称: sub_4b7c00
// 虚拟地址: 0x4b7c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4b7c00(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    int128_t* eax = sub_4b7890(&var_8)
    sub_4b7950()
    int32_t ecx = var_8
    void* eax_2 = ecx * 0x70
    *(eax_2 + eax + 0x2c) = 0
    void* eax_3 = eax_2 + eax
    *(eax_3 + 0x28) = arg1[1]
    *(eax_3 + 0x30) = 0
    *(eax_3 + 0x34) = 0
    *(eax_3 + 0x38) = 0
    *(eax_3 + 0x3c) = 0x3f800000
    arg1[0x6d] = eax[0x1f].d
    arg1[0x6f] = ecx
    *arg1
    return sub_4d10e0(*(eax + 0x1e8))
}
