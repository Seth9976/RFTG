// 函数名称: sub_40a160
// 虚拟地址: 0x40a160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_40a160(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f1d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_27c0600 == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    char* const var_14 = &data_83f3d3
    int32_t var_8_1 = 0
    sub_4c4590("RftG-Steam")
    char* const esi = var_14
    char* const eax_4 = &data_83f3d3
    
    if (esi != 0)
        eax_4 = esi
    
    int32_t var_2c = arg1
    char* const var_30 = eax_4
    int32_t var_34 = *(data_27e7fd0 + 0x10)
    int32_t var_38 = *data_27e7a64
    char* var_18
    char* edx_2 =
        sub_4c4a50(&var_18, "v=1&tid=UA-34292269-5&cid=%d&t=screenview&an=RftG&av=%s&aid=%s&cd=%s")
    var_8_1.b = 1
    char* const eax_6 = var_18
    
    if (eax_6 == 0)
        eax_6 = &data_83f3d3
    
    char* const var_2c_1 = eax_6
    sub_4c8ff0(0x27c05fc, edx_2)
    var_8_1.b = 0
    char* eax_7 = var_18
    
    if (eax_7 != 0 && *eax_7 != 0)
        eax_7 = sub_4c4060(&var_18)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_7 + 0xc) + 0x10
            sub_4f4430(eax_7, sub_4f4380(esi_2), esi_2)
            esi = var_14
    
    int32_t var_8_2 = 0xffffffff
    
    if (esi != 0 && *esi != 0)
        eax_7 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_7 + 0xc) + 0x10
            sub_4f4430(eax_7, sub_4f4380(esi_4), esi_4)
    
    eax_7.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7
}
