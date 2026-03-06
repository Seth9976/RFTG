// 函数名称: sub_40bee0
// 虚拟地址: 0x40bee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_40bee0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691748
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165564 & 1) == 0)
        data_3165564.d |= 1
        int32_t var_8_1 = 0
        data_3165560 = sub_4f5220(data_307c1c0, "BtnBack")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165564 & 2) == 0)
        data_3165564.d |= 2
        int32_t var_8_3 = 1
        data_316555c = sub_4f5220(data_307c1c0, "btnCopyFriendCode")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165564 & 4) == 0)
        data_3165564.d |= 4
        int32_t var_8_5 = 2
        data_3165558 = sub_4f5220(data_307c1c0, "btnPrev")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3165564 & 8) == 0)
        data_3165564.d |= 8
        int32_t var_8_7 = 3
        data_3165554 = sub_4f5220(data_307c1c0, "btnNext")
    
    if (arg1 == data_3165560)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 8
    
    if (arg1 == data_3165558)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 6
    
    if (arg1 == data_3165554)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 7
    
    if (arg1 == data_316555c)
        data_27e7a54
        sub_4c6360()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
