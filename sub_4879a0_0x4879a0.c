// 函数名称: sub_4879a0
// 虚拟地址: 0x4879a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4879a0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696584
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(data_27e7a40 + 0x2c4960) == 0)
        void* eax_4 = sub_4fc3d0(&data_be1cb8, arg1)
        *(eax_4 + 8) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    void* eax_5 = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:0 = (data_31661b8 & 1) != 0
    int32_t* edi = data_307ca6c
    *(eax_5 + 8) = 0
    
    if (not(cond:0))
        data_31661b8.d |= 1
        int32_t var_8_1 = 0
        data_31661b4 = sub_4f5220(edi, "BtnForfeit")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31661b8 & 2) == 0)
        data_31661b8.d |= 2
        int32_t var_8_3 = 1
        data_31661b0 = sub_4f5220(edi, "txtTimeRemaining")
        int32_t var_8_4 = 0xffffffff
    
    char* var_18
    sub_40b440(&var_18)
    int32_t var_8_5 = 2
    char* eax_8 = var_18
    char* const var_1c = &data_83f3d3
    
    if (eax_8 != 0)
        var_1c = eax_8
    
    int128_t* eax_10 = sub_4f6e90(data_31661b0, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_10 + 0x64) = *eax_10 + 1
    sub_4c4590(var_1c)
    *(eax_10 + 0x151) = 1
    bool cond:1 = data_30d6f40 == 0
    void* eax_12 = sub_4fc3d0(&data_be1cb8, arg1)
    void* edx_2 = data_27e7a40
    *(eax_12 + 8) = cond:1
    int32_t eax_13 = *(edx_2 + 0x2c4960)
    char var_14_1
    
    if (eax_13 != 1)
        var_14_1 = 0
    
    if (eax_13 == 1 || eax_13 == 4)
        var_14_1 = 1
    
    *(sub_4f6e90(data_31661b4, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3) + 0x21) = var_14_1
    *(sub_4fc3d0(&data_be1cb8, arg1) + 0x2c) = sub_4876c0
    int32_t var_8_6 = 0xffffffff
    void* eax_17 = var_18
    
    if (eax_17 != 0 && *eax_17 != 0)
        eax_17 = sub_4c4060(&var_18)
        int32_t temp0_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_7 = *(eax_17 + 0xc) + 0x10
            eax_17 = sub_4f4430(eax_17, sub_4f4380(esi_7), esi_7)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_17
}
