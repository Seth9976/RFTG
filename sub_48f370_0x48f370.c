// 函数名称: sub_48f370
// 虚拟地址: 0x48f370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_48f370(int32_t arg1, void* arg2, int32_t arg3, char arg4, char arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx_1 = arg3 * 0xb4
    int32_t i = sx.d(*(edx_1 + arg2 + 0x46))
    int32_t eax_2 = 0
    int32_t edi
    int32_t var_420 = edi
    void var_410
    
    while (i != 0xffffffff)
        *(&var_410 + eax_2) = i.b
        i = sx.d(*(arg2 + ((i * 5 + 0x11d) << 2)))
        eax_2 += 1
    
    i.b = arg4
    *(&var_410 + eax_2) = i.b
    char ecx_1 = *(edx_1 + arg2 + 0x2c)
    char edx_2 = *(edx_1 + arg2 + 0x30)
    void var_40f
    *(&var_40f + eax_2) = arg3.b
    void var_40e
    *(&var_40e + eax_2) = ecx_1
    void var_40d
    *(&var_40d + eax_2) = edx_2
    uint32_t edx_3 = zx.d(*(arg2 + 0x1ec0))
    void var_40c
    *(&var_40c + eax_2) = arg5
    void var_40b
    *(&var_40b + eax_2) = edx_3.b
    char var_40a[0x3fe]
    var_40a[eax_2] = arg6
    void* var_424 = &var_410
    int32_t eax_4
    int32_t edx_4
    eax_4, edx_4 = sub_48eac0(eax_2 + 7, edx_3)
    int32_t* i_1
    
    for (i_1 = *(((eax_4 & 0xffff) << 2) + &data_2609940); i_1 != 0; i_1 = i_1[4])
        if (*i_1 == eax_4 && i_1[1] == edx_4)
            goto label_48f462
    
    i_1 = sub_48f0f0()
    *(i_1 + 8) = fconvert.d(fconvert.t(-1.0))
    *i_1 = eax_4
    i_1[1] = edx_4
    i_1[4] = *(((eax_4 & 0xffff) << 2) + &data_2609940)
    *(((eax_4 & 0xffff) << 2) + &data_2609940) = i_1
    label_48f462:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i_1
}
