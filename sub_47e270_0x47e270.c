// 函数名称: sub_47e270
// 虚拟地址: 0x47e270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47e270(char arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69987e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* entry_ebx
    *(sub_4fc3d0(&data_be1cb8, entry_ebx) + 0x2c) = sub_41b350
    
    if ((data_3166a70 & 1) == 0)
        data_3166a70.d |= 1
        int32_t var_8_1 = 0
        data_3166a6c = sub_4f5220(data_307c500, "tblItems")
        int32_t var_8_2 = 0xffffffff
    
    *(sub_4f6e90(data_3166a6c, sub_4fc3d0(&data_be1cb8, entry_ebx), &data_83f3d3) + 0x11c) = sub_41cd70
    sub_4075c0()
    
    if (arg1 == 0)
        sub_45af30(entry_ebx)
    else
        sub_45a9d0(entry_ebx)
    
    sub_407670()
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
