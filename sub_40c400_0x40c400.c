// 函数名称: sub_40c400
// 虚拟地址: 0x40c400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_40c400(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69162a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165530 & 1) == 0)
        data_3165530.d |= 1
        int32_t var_8_1 = 0
        data_316552c = sub_4f5220(data_307c1b8, "BtnOK")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165530 & 2) == 0)
        data_3165530.d |= 2
        int32_t var_8_3 = 1
        data_3165528 = sub_4f5220(data_307c1b8, "BtnBack")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165530 & 4) == 0)
        data_3165530.d |= 4
        int32_t var_8_5 = 2
        data_3165524 = sub_4f5220(data_307c1b8, "BtnPaste")
    
    if (arg1 == data_316552c)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x3d
    
    if (arg1 == data_3165524)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x3f
    
    int32_t ecx_6
    ecx_6.b = arg1 != data_3165528
    fsbase->NtTib.ExceptionList = ExceptionList
    return (ecx_6 - 1) & 0x3e
}
