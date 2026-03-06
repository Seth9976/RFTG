// 函数名称: sub_43b490
// 虚拟地址: 0x43b490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43b490(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6921ae
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165714 & 1) == 0)
        data_3165714.d |= 1
        int32_t var_8_1 = 0
        data_3165710 = sub_4f5220(data_307ca54, "btn_undo")
        int32_t var_8_2 = 0xffffffff
    
    if (arg1 == data_3165710)
        sub_418a60()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
