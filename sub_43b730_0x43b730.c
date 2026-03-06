// 函数名称: sub_43b730
// 虚拟地址: 0x43b730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43b730(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690b1c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307ca40
    
    if ((data_31652c4 & 1) == 0)
        data_31652c4.d |= 1
        int32_t var_8_1 = 0
        data_31652c0 = sub_4f5220(esi, "btn_menu")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31652c4 & 2) == 0)
        data_31652c4.d |= 2
        int32_t var_8_3 = 1
        data_31652bc = sub_4f5220(esi, "btnMil")
    
    if (arg1 == data_31652bc)
        *(*(data_27e7a40 + 0x548) + 0x2c0b0) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_31652c0)
        data_30d6f40 = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
