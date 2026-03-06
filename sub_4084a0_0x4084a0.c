// 函数名称: sub_4084a0
// 虚拟地址: 0x4084a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_4084a0(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68faa0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_38 = arg1
    void var_24
    void* var_3c = &var_24
    sub_407fd0(var_3c, var_38)
    int32_t var_8_1 = 0
    char* var_20
    
    if (sub_504fb0() != 0)
        var_38 = arg1
        void* var_1c
        var_3c = &var_1c
        sub_4080b0(var_3c, var_38)
        var_8_1.b = 1
        var_3c = var_1c
        int32_t* eax_8 = &var_38
        char* var_18
        var_38 = var_18
        char* ecx_4 = var_18
        void** var_14_1 = &var_3c
        
        if (ecx_4 != 0 && *ecx_4 != 0)
            eax_8 = sub_4c4060(eax_8)
            eax_8[1] += 1
        
        void* edx_1 = data_307b6ac
        var_8_1.b = 0
        bool cond:0_1 = sub_4cd670(eax_8, edx_1, arg2 + 0x164, edx_1) != 0
        char* eax_10 = var_18
        
        if (cond:0_1)
            if (eax_10 != 0 && *eax_10 != 0)
                void* eax_16 = sub_4c4060(&var_18)
                int32_t temp1_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp1_1 == 1)
                    char* esi_6 = *(eax_16 + 0xc) + 0x10
                    int32_t* eax_17 = sub_4f4380(esi_6)
                    var_38 = esi_6
                    sub_4f4430(eax_16, eax_17, var_38)
            
            int32_t var_8_3 = 0xffffffff
            void* eax_19 = var_20
            
            if (eax_19 != 0 && *eax_19 != 0)
                eax_19 = sub_4c4060(&var_20)
                int32_t temp3_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp3_1 == 1)
                    char* esi_8 = *(eax_19 + 0xc) + 0x10
                    int32_t* eax_21 = sub_4f4380(esi_8)
                    var_38 = esi_8
                    sub_4f4430(eax_19, eax_21, var_38)
            
            eax_19.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_19
        
        if (eax_10 != 0 && *eax_10 != 0)
            void* eax_12 = sub_4c4060(&var_18)
            int32_t temp2_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp2_1 == 1)
                char* esi_4 = *(eax_12 + 0xc) + 0x10
                int32_t* eax_13 = sub_4f4380(esi_4)
                var_38 = esi_4
                sub_4f4430(eax_12, eax_13, var_38)
    
    int32_t var_8_2 = 0xffffffff
    char* eax_4 = var_20
    
    if (eax_4 != 0 && *eax_4 != 0)
        eax_4 = sub_4c4060(&var_20)
        int32_t temp0_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp0_1 == 1)
            char* esi_2 = *(eax_4 + 0xc) + 0x10
            int32_t* eax_6 = sub_4f4380(esi_2)
            var_38 = esi_2
            sub_4f4430(eax_4, eax_6, var_38)
    
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4
}
