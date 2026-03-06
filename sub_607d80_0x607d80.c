// 函数名称: sub_607d80
// 虚拟地址: 0x607d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_607d80(void* arg1)
{
    // 第一条实际指令: int32_t eax = sub_607d00(arg1)
    int32_t eax = sub_607d00(arg1)
    
    if (eax == 0)
        return 0xffffffff
    
    int32_t eax_4 =
        sub_5d7e30(*(eax + 4), *(arg1 + 0x12c), *(arg1 + 0x12d), *(arg1 + 0x12e), *(arg1 + 0x12f))
    int32_t var_14 = *(eax + 0x24)
    int32_t var_10 = *(eax + 0x28)
    int32_t var_c = *(eax + 0x2c)
    int32_t var_8 = *(eax + 0x30)
    sub_5d5f90(eax, nullptr)
    sub_611e60(eax, nullptr, eax_4)
    sub_5d5f90(eax, &var_14)
    return 0
}
