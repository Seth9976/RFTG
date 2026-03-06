// 函数名称: sub_553270
// 虚拟地址: 0x553270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_553270(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f3d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_24 = arg4
    char* arg_8
    
    if (sub_5531d0(arg3, arg2, arg2) != 0)
        int32_t var_8_3 = 0xffffffff
        void* eax_12 = arg_8
        
        if (eax_12 != 0 && *eax_12 != 0)
            eax_12 = sub_4c4060(&arg_8)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_4 = *(eax_12 + 0xc) + 0x10
                sub_4f4430(eax_12, sub_4f4380(esi_4), esi_4)
        
        eax_12.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12
    
    int32_t i = 0
    
    if (arg3[0xd] s> 0)
        do
            int32_t ecx = arg3[0xf]
            int32_t eax_6 = *(ecx + (i << 3) + 4)
            int32_t* edi_1 = ecx + (i << 3)
            
            if (eax_6 != 0)
                _aligned_free_base(eax_6)
                edi_1[1] = 0
            
            i += 1
            *edi_1 = 0
        while (i s< arg3[0xd])
    
    char* const eax_7 = arg_8
    
    if (eax_7 == 0)
        eax_7 = &data_83f3d3
    
    char* const var_24_2 = eax_7
    sub_4c5680("texture reimport failed to read '%s'")
    int32_t var_8_2 = 0xffffffff
    char* eax_8 = arg_8
    
    if (eax_8 != 0 && *eax_8 != 0)
        eax_8 = sub_4c4060(&arg_8)
        int32_t temp1_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
    
    eax_8.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8
}
