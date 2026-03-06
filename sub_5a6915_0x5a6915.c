// 函数名称: sub_5a6915
// 虚拟地址: 0x5a6915
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a6915()
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 4
    int32_t __saved_ebp_2 = 4
    int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    void* const var_28_1 = &data_5a6921
    int32_t var_8_2 = 0xffffffff
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_14
    sub_5a69bd(&var_14, 0)
    int32_t var_8 = 0
    
    while (true)
        int32_t* eax_1 = data_bec320
        
        if (eax_1 == 0)
            break
        
        data_bec320 = *eax_1
        sub_5a6900(eax_1)
        int32_t* var_28 = eax_1
        sub_5a6ac9()
    
    int32_t var_8_1 = 0xffffffff
    int32_t result = sub_5a69e5(&var_14)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a6962
    return result
}
