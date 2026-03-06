// 函数名称: sub_4bad40
// 虚拟地址: 0x4bad40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4bad40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_691b8c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t var_24 = __security_cookie ^ &__saved_ebx
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165658 & 1) == 0)
        data_3165658.d |= 1
        int32_t var_c_1 = 0
        data_3165654 = sub_4f5220(data_307c744, "BtnBack")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165658 & 2) == 0)
        data_3165658.d |= 2
        int32_t var_c_3 = 1
        data_3165650 = sub_4f5220(data_307c744, "BtnOK")
        int32_t var_c_4 = 0xffffffff
    
    if (arg1 == data_3165650 || arg1 == data_3165654)
        sub_409060()
        data_27e7aa4
        sub_4ba5d0(0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
