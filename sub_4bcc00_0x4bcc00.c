// 函数名称: sub_4bcc00
// 虚拟地址: 0x4bcc00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4bcc00(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_698f88
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    char* const var_18 = &data_83f3d3
    int32_t var_8_1 = 0
    void var_1c
    char i
    
    do
        BOOL eax_4
        int32_t edx
        int32_t edx_1
        eax_4, edx_1 = sub_5003c0(&var_1c, edx, arg1, &esi[2], &var_1c)
        
        if (eax_4.b == 0)
            int32_t var_8_3 = 0xffffffff
            void* eax_10 = var_18
            
            if (eax_10 != 0 && *eax_10 != 0)
                eax_10 = sub_4c4060(&var_18)
                int32_t temp0_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_5 = *(eax_10 + 0xc) + 0x10
                    sub_4f4430(eax_10, sub_4f4380(esi_5), esi_5)
            
            eax_10.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_10
        
        i, arg1, edx = sub_4bc770(eax_4, edx_1, &var_1c, *esi)
    while (i == 0)
    esi[1] += 1
    int32_t esi_1 = *esi
    void* var_38_3 = &var_1c
    int32_t eax_5 = sub_4bca40(esi_1)
    int32_t var_24 = eax_5
    eax_5.b = eax_5 s< 0
    int32_t var_20 = 4
    sub_41c490(esi_1, &var_24, eax_5.b.d)
    int32_t var_8_2 = 0xffffffff
    void* eax_6 = var_18
    
    if (eax_6 != 0 && *eax_6 != 0)
        eax_6 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_3 = *(eax_6 + 0xc) + 0x10
            sub_4f4430(eax_6, sub_4f4380(esi_3), esi_3)
    
    eax_6.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6
}
