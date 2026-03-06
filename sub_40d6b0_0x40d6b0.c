// 函数名称: sub_40d6b0
// 虚拟地址: 0x40d6b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_40d6b0(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69157c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_316550c & 1) == 0)
        data_316550c.d |= 1
        int32_t var_8_1 = 0
        data_3165508 = sub_4f5220(data_307c4f8, "BtnBack")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_316550c & 2) == 0)
        data_316550c.d |= 2
        int32_t var_8_3 = 1
        data_3165504 = sub_4f5220(data_307c4f8, "btnGenCode")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_316550c & 4) == 0)
        data_316550c.d |= 4
        int32_t var_8_5 = 2
        data_3165500 = sub_4f5220(data_307c4f8, "btnEnterCode")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_316550c & 8) == 0)
        data_316550c.d |= 8
        int32_t var_8_7 = 3
        data_31654fc = sub_4f5220(data_307c4f8, "BtnOK")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_316550c & 0x10) == 0)
        data_316550c.d |= 0x10
        int32_t var_8_9 = 4
        data_31654f8 = sub_4f5220(data_307c4f8, "BtnCopy")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_316550c & 0x20) == 0)
        data_316550c.d |= 0x20
        int32_t var_8_11 = 5
        data_31654f4 = sub_4f5220(data_307c4f8, "BtnPaste")
        int32_t var_8_12 = 0xffffffff
    
    char* arg_4
    char* eax_11 = arg_4
    
    if (eax_11 == data_3165504)
        sub_40d5c0()
        __builtin_strcpy(arg1 + 0x18, "Generating...")
        *(arg1 + 0xc) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x656e002e
    
    if (eax_11 == data_3165500)
        *(arg1 + 0xc) = 2
        sub_4c4590(&data_83f3d3)
        *(arg1 + 0x54) = 0
        *(arg1 + 0x5c) = 0
        *(arg1 + 0xa1) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (eax_11 == data_31654fc)
        char* const eax_12 = *(arg1 + 0x50)
        
        if (eax_12 == 0)
            eax_12 = &data_83f3d3
        
        sub_40d510(eax_12)
        *(arg1 + 0xc) = 3
        *(arg1 + 0x28) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (eax_11 == data_31654f8)
        int32_t eax_13 = sub_4c6360()
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_13
    
    if (eax_11 != data_31654f4)
        if (eax_11 == data_3165508)
            *(arg1 + 8) = 0
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_11
    
    arg_4 = &data_83f3d3
    int32_t var_8_13 = 6
    
    if (sub_4c63c0(&arg_4) != 0)
        char* ebx_3 = arg_4
        int32_t esi_1 = 0
        
        while (true)
            int32_t eax_15
            
            if (ebx_3 == 0 || *ebx_3 == 0)
                eax_15 = 0
            else
                eax_15 = *(sub_4c4060(&arg_4) + 8)
            
            if (esi_1 s>= eax_15)
                break
            
            char* ecx_12 = &data_83f3d3
            
            if (ebx_3 != 0)
                ecx_12 = ebx_3
            
            sub_505e40(ecx_12, arg1 + 0x50, sx.d(ecx_12[esi_1]))
            esi_1 += 1
    
    int32_t var_8_14 = 0xffffffff
    int32_t* eax_19 = sub_4c43d0(&arg_4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_19
}
