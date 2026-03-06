// 函数名称: sub_407970
// 虚拟地址: 0x407970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_407970(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = data_27e7fd0
    int32_t result = data_27e7fd0
    
    if (*(result + 0x27) != 0)
        return result
    
    sub_4db310()
    void var_88
    int32_t eax
    int80_t st0_1
    st0_1, eax = sub_40a930(&var_88)
    float var_94_2 = fconvert.s(float.t(1))
    void var_48
    __builtin_memcpy(&var_48, eax, 0x40)
    sub_4f9fe0(*arg1, &var_48)
    void* eax_2 = data_27e7fe4
    *(eax_2 + 0x254) = 0
    __builtin_memcpy(eax_2 + 0x9c, 0x83faf8, 0x40)
    *(eax_2 + 0xdc) = 0
    return sub_4e2080()
}
