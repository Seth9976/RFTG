// 函数名称: sub_45a8c0
// 虚拟地址: 0x45a8c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_45a8c0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69212c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31656fc & 1) == 0)
        data_31656fc.d |= 1
        int32_t var_8_1 = 0
        data_31656f8 = sub_4f5220(data_307c16c, "btnBack")
        int32_t var_8_2 = 0xffffffff
    
    int32_t* ecx
    
    if ((data_31656fc & 2) == 0)
        data_31656fc.d |= 2
        int32_t var_8_3 = 1
        ecx = data_307c16c
        data_31656f4 = sub_4f5220(ecx, "btnNext")
        int32_t var_8_4 = 0xffffffff
    
    if (arg1 == data_31656f4)
        void* eax_7 = *(data_27e7a40 + 0x548)
        *(eax_7 + 0x43350) += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_31656f8)
        if (*(data_27e7fd0 + 0x27) != 0)
            data_30d6f38 = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        sub_463040(ecx, 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
