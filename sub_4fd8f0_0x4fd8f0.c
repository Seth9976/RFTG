// 函数名称: sub_4fd8f0
// 虚拟地址: 0x4fd8f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_4fd8f0(int32_t arg1, int32_t arg2, char* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d1e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_26a44ec
    
    if (eax_3 != 0)
        int32_t edi_1 = *(eax_3 + 0x120)
        char* var_18
        sub_4fd090(arg4, arg2, arg3, &var_18, arg4)
        int32_t var_8_1 = 0
        int32_t edx = data_26a44ec
        void* esi_3 = (edi_1 * 3 + 0x24) * 4
        void* eax_6
        int32_t edx_1
        eax_6, edx_1 = sub_4fdae0(&var_18, edx, esi_3 + edx)
        
        if (eax_6 != 0)
            goto label_4fd9e0
        
        void* eax_9 = sub_4fdae0(&var_18, edx_1, data_26a44ec + edi_1 * 0xc)
        int32_t* var_34_2
        void* esi_4
        
        if (eax_9 == 0)
            esi_4 = esi_3 + data_26a44ec
            var_34_2 = &(*U"][}{")[4]
        label_4fd9a9:
            sub_4fdb60(esi_4, &var_18, var_34_2)
            int32_t var_8_2 = 0xffffffff
            sub_4c43d0(&var_18)
        else
            void* ecx_4 = data_26a44ec
            
            if (*(ecx_4 + 0x124) != 0 && *(eax_9 + 4) != 0)
                int32_t var_20 = 0
                int32_t var_1c_1 = 0
                var_34_2 = &var_20
                esi_4 = esi_3 + ecx_4
                goto label_4fd9a9
            
            sub_4fdb60(esi_3 + ecx_4, &var_18, eax_9)
            eax_6 = eax_9
        label_4fd9e0:
            int32_t esi_10 = *eax_6
            
            if (esi_10 != 0)
                int32_t var_8_4 = 0xffffffff
                char* eax_17 = var_18
                
                if (eax_17 != 0 && *eax_17 != 0)
                    void* eax_19 = sub_4c4060(&var_18)
                    int32_t temp0_1 = *(eax_19 + 4)
                    *(eax_19 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        int32_t esi_9 = *(eax_19 + 0xc) + 0x10
                        sub_4f4430(eax_19, sub_4f4380(esi_9), esi_9)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return esi_10
            
            int32_t var_8_3 = 0xffffffff
            char* eax_11 = var_18
            
            if (eax_11 != 0 && *eax_11 != 0)
                void* eax_13 = sub_4c4060(&var_18)
                int32_t temp1_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_7 = *(eax_13 + 0xc) + 0x10
                    sub_4f4430(eax_13, sub_4f4380(esi_7), esi_7)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg3
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
