// 函数名称: sub_460790
// 虚拟地址: 0x460790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_460790()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69867e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_a4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* entry_ebx
    int32_t edi = entry_ebx[0x16]
    int32_t eax_3
    int32_t edx
    
    if (edi != 0xffffffff)
        eax_3, edx = sub_46b360(edi)
    else
        eax_3 = &ExceptionList | edi
    
    void var_94
    void var_54
    int32_t esi_1 = __builtin_memcpy(&var_54, sub_45fb20(eax_3, edx, eax_3, &var_94), 0x40)
    
    if ((data_31666fc & 1) == 0)
        data_31666fc.d |= 1
        int32_t var_8_1 = 0
        data_31666f8 = sub_4f5220(data_307c584, "rgn_opponentTableau")
        int32_t var_8_2 = 0xffffffff
    
    int80_t result = sub_45fce0(&var_54, data_31666f8, data_307c584, esi_1, &var_54, entry_ebx)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
