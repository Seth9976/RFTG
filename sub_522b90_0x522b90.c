// 函数名称: sub_522b90
// 虚拟地址: 0x522b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_522b90(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e901
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int32_t var_20
    sub_522980(&var_20, arg2, sub_522b60, &var_20, arg3)
    int32_t var_8_1 = 1
    int32_t esi = var_20
    char* var_18
    bool cond:0_1
    
    if (esi == 2 || esi == 3 || esi == 4)
        sub_522420(arg3)
        
        if (esi != 4)
            sub_4c5870("result.result == UIPARSERESULT_SUCCESS_STRING", &data_83f3d3, "UI2.cpp", 0x50d, 
                "parse_hex_literal")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* eax_8 = var_18
        
        if (eax_8 == 0)
            eax_8 = &data_83f3d3
        
        char* var_34_1 = eax_8
        int32_t eax_9
        int32_t ecx_2
        eax_9, ecx_2 = sub_5a710b()
        void* edx = *arg3
        void* eax_10 = sub_5218c0(ecx_2, edx)
        *eax_10 = 1
        *(eax_10 + 4) = eax_9
        sub_5225d0(arg4, edx, eax_10)
        var_8_1.b = 0
        char* eax_12 = var_18
        int32_t var_14_2 = 1
        
        if (eax_12 != 0)
            cond:0_1 = *eax_12 == 0
        label_522cb1:
            
            if (not(cond:0_1))
                void* eax_14 = sub_4c4060(&var_18)
                int32_t temp0_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_3 = *(eax_14 + 0xc) + 0x10
                    sub_4f4430(eax_14, sub_4f4380(esi_3), esi_3)
    else
        int32_t var_1c
        arg4[1] = var_1c
        char* ecx_1 = var_18
        *arg4 = esi
        arg4[2] = ecx_1
        
        if (ecx_1 != 0 && *ecx_1 != 0)
            void* eax_5 = sub_4c4060(&arg4[2])
            *(eax_5 + 4) += 1
            ecx_1 = var_18
        
        int32_t var_14_1 = 1
        var_8_1.b = 0
        
        if (ecx_1 != 0)
            cond:0_1 = *ecx_1 == 0
            goto label_522cb1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}
