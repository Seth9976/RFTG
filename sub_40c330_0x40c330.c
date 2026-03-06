// 函数名称: sub_40c330
// 虚拟地址: 0x40c330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_40c330(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69166c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_316553c & 1) == 0)
        data_316553c.d |= 1
        int32_t var_8_1 = 0
        data_3165538 = sub_4f5220(data_307c1bc, "BtnOK")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_316553c & 2) == 0)
        data_316553c.d |= 2
        int32_t var_8_3 = 1
        data_3165534 = sub_4f5220(data_307c1bc, "BtnBack")
    
    if (arg1 == data_3165538)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x40
    
    int32_t edx
    edx.b = arg1 != data_3165534
    fsbase->NtTib.ExceptionList = ExceptionList
    return (edx - 1) & 0x41
}
