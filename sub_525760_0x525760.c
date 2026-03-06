// 函数名称: sub_525760
// 虚拟地址: 0x525760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __fastcallsub_525760(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* eax_2 = sub_5303b0()
    sub_4fe7d0(eax_2, data_30d74dc)
    eax_2[0x14c].d = 6
    *(eax_2 + 8) = *arg2
    *(eax_2 + 0xc) = arg2[1]
    eax_2[1].d = arg2[2]
    *(eax_2 + 0x14) = arg2[3]
    void var_2c
    int32_t* eax_5 = sub_524d70(&var_2c)
    int32_t var_14 = eax_5[1]
    float var_18 = *eax_5
    int32_t var_10 = eax_5[2]
    int32_t var_c = eax_5[3]
    int32_t eax_7
    int80_t result
    result, eax_7 = sub_4fb1d0(arg2, &var_18)
    void var_6c
    __builtin_memcpy(&var_6c, eax_7, 0x40)
    *(eax_2 + 0x58) = fconvert.s(float.t(1))
    __builtin_memcpy(eax_2 + 0x18, &var_6c, 0x40)
    *(eax_2 + 0x14f8) = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
