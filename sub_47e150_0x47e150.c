// 函数名称: sub_47e150
// 虚拟地址: 0x47e150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47e150(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69087a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165250 & 1) == 0)
        data_3165250.d |= 1
        int32_t var_8_1 = 0
        data_316524c = sub_4f5220(data_307c174, "BtnBack")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165250 & 2) == 0)
        data_3165250.d |= 2
        int32_t var_8_3 = 1
        data_3165248 = sub_4f5220(data_307c178, "BtnBack")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165250 & 4) == 0)
        data_3165250.d |= 4
        int32_t var_8_5 = 2
        data_3165244 = sub_4f5220(data_307c174, "btnArrowR")
    
    if (arg1 == data_316524c || arg1 == data_3165248)
        data_30d6f38 = data_307c76c
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t ecx_2
    ecx_2.b = arg1 == data_3165244
    data_307d8c8 = ecx_2
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
