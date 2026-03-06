// 函数名称: sub_5837f0
// 虚拟地址: 0x5837f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_5837f0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_c4
    int32_t eax_2
    int80_t st0
    st0, eax_2 = sub_40a930(&var_c4)
    void var_4c
    int32_t esi_1 = __builtin_memcpy(&var_4c, eax_2, 0x40)
    void var_58
    int80_t result = sub_4c6230(&var_58)
    void* ecx = data_27e7fdc
    char var_50_1
    
    if ((*(ecx + 0xc) & 1) != 0)
        var_50_1 = 1
    
    if ((*(ecx + 0xc) & 1) == 0 || *(data_27e7bbc + 0x18) == 0)
        var_50_1 = 0
    
    void* var_dc = ecx
    void var_84
    int32_t* eax_5 = sub_4f8710(esi_1, &var_84, data_27c0490, &var_4c, &var_58, var_50_1, 
        fconvert.s(fconvert.t(data_8c4d34)), nullptr, nullptr, nullptr)
    int32_t var_68 = eax_5[1]
    int32_t var_64 = eax_5[2]
    int32_t eax_6 = eax_5[4]
    
    if (*eax_5 == 2)
        sub_511040(eax_6, data_27c048c, eax_5[3], eax_6)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
