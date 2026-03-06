// 函数名称: sub_4c6600
// 虚拟地址: 0x4c6600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4c6600(int32_t arg1, int32_t arg2, char* arg3, int16_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const esi = arg3
    void* eax_3 = sub_5a9450(esi, 0x3a)
    char* const ebx = &data_83f3d3
    var_14 = &data_83f3d3
    int32_t var_8_1 = 0
    
    if (eax_3 != 0)
        sub_4c4590(esi)
        sub_4c4690(&var_14, esi)
        void* var_28_2 = eax_3 + 1
        int32_t eax_6 = sub_5a710b()
        ebx = var_14
        arg5 = eax_6
        esi = &data_83f3d3
        
        if (ebx != 0)
            esi = ebx
    
    uint32_t eax_7 = inet_addr(esi)
    
    if (eax_7 == 0xffffffff)
        void* eax_8 = gethostbyname(esi)
        
        if (eax_8 == 0 || *(eax_8 + 0xa) != 4 || *(eax_8 + 8) != 2)
            int32_t var_8_3 = 0xffffffff
            
            if (ebx != 0 && *ebx != 0)
                eax_8 = sub_4c4060(&var_14)
                int32_t temp1_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_6 = *(eax_8 + 0xc) + 0x10
                    sub_4f4430(eax_8, sub_4f4380(esi_6), esi_6)
            
            eax_8.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_8
        
        eax_7 = ***(eax_8 + 0xc)
    
    *arg4 = 2
    *(arg4 + 4) = eax_7
    arg4[1] = htons(arg5.w).w
    int32_t var_8_2 = 0xffffffff
    void* eax_9
    
    if (ebx != 0 && *ebx != 0)
        eax_9 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_4 = *(eax_9 + 0xc) + 0x10
            sub_4f4430(eax_9, sub_4f4380(esi_4), esi_4)
    
    eax_9.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_9
}
