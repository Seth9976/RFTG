// 函数名称: sub_4db310
// 虚拟地址: 0x4db310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_4db310()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPADI@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_54
    int32_t eax_3
    int32_t edx
    eax_3, edx = sub_4db020(&var_54)
    float var_34[0x5]
    __builtin_memcpy(&var_34, eax_3, 0x20)
    void var_b4
    sub_406370(&var_b4, edx, &var_34)
    void* eax_5 = data_27e7fe4
    void var_74
    __builtin_memcpy(&var_74, &var_b4, 0x40)
    *(eax_5 + 0xdc) = 1
    __builtin_memcpy(eax_5 + 0x9c, &var_74, 0x40)
    void var_20
    sub_4e2000(&var_20)
    char** result
    
    if ((data_316516c & 1) != 0)
        result = data_27e7fe4
        result[0x95] = data_3165168
    else
        data_316516c.d |= 1
        int32_t var_8_1 = 0
        result = sub_509140(5, "sys/sprite_3d_no_zread.material")
        void* ecx_1 = data_27e7fe4
        data_3165168 = result
        *(ecx_1 + 0x254) = result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
