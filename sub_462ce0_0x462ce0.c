// 函数名称: sub_462ce0
// 虚拟地址: 0x462ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_462ce0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696d2e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3166318 & 1) == 0)
        data_3166318.d |= 1
        int32_t var_8_1 = 0
        data_3161160 = sub_4f5220(data_307c530, "btn_ok")
        int32_t var_8_2 = 0xffffffff
    
    void* eax_7 =
        sub_4f6e90(data_3161160, sub_4fc3d0(&data_be1cb8, **(data_27e7a40 + 0x548)), &data_83f3d3)
        + 0x18
    
    if (*(eax_7 + 9) != 0 || *(eax_7 + 0xa) != 0 || *(eax_7 + 0xb) != 0)
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    int32_t* var_28 = &var_14
    int32_t var_2c_2 = data_3161160
    int32_t eax_11
    eax_11.b = sub_419540(**(data_27e7a40 + 0x548)) != 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11
}
