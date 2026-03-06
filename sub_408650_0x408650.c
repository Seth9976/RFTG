// 函数名称: sub_408650
// 虚拟地址: 0x408650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_408650()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fbe6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* ecx = __chkstk(0x138c4)
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_14 = eax_2
    int32_t var_20 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_408190(ecx)
    int32_t var_8_1 = 0
    char eax_3
    char* ecx_1
    eax_3, ecx_1 = sub_504fb0()
    char* result
    char* result_1
    char* var_24
    
    if (eax_3 == 0)
        int32_t var_8_4 = 0xffffffff
        char* result_2 = result_1
        
        if (result_2 != 0 && *result_2 != 0)
            void* eax_25 = sub_4c4060(&result_1)
            int32_t temp0_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp0_1 == 1)
                char* esi_10 = *(eax_25 + 0xc) + 0x10
                int32_t* eax_26 = sub_4f4380(esi_10)
                var_24 = esi_10
                sub_4f4430(eax_25, eax_26, var_24)
        
        result = sub_4084a0(*(data_27e7a54 + 0x20c), ecx)
    else
        sub_4081d0(ecx_1)
        var_8_1.b = 1
        char* var_138c4
        char* var_28 = var_138c4
        char* var_138c0
        char* edx = var_138c0
        var_24 = edx
        char* ecx_3 = var_138c0
        char** var_138d0_1 = &var_28
        
        if (ecx_3 != 0 && *ecx_3 != 0)
            void* eax_5 = sub_4c4060(&var_24)
            *(eax_5 + 4) += 1
        
        void* eax_6 = data_307b6ac
        int128_t var_138bc[0x1389]
        
        if (sub_4cd670(eax_6, edx, &var_138bc, eax_6) == 0)
            var_24 = "Had valid v1 xml save file but not valid bin"
            sub_4c5680(var_24)
            var_8_1.b = 0
            char* eax_16 = var_138c0
            
            if (eax_16 != 0 && *eax_16 != 0)
                void* eax_18 = sub_4c4060(&var_138c0)
                int32_t temp1_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp1_1 == 1)
                    char* esi_6 = *(eax_18 + 0xc) + 0x10
                    int32_t* eax_19 = sub_4f4380(esi_6)
                    var_24 = esi_6
                    sub_4f4430(eax_18, eax_19, var_24)
            
            int32_t var_8_3 = 0xffffffff
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_4c4060(&result_1)
                int32_t temp3_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp3_1 == 1)
                    char* esi_8 = *(result + 0xc) + 0x10
                    int32_t* eax_22 = sub_4f4380(esi_8)
                    var_24 = esi_8
                    sub_4f4430(result, eax_22, var_24)
            
            result.b = 0
        else
            var_24 = *(data_27e7a54 + 0x20c)
            var_28 = ecx
            sub_5000d0(sub_5000d0(sub_4082e0(var_28, var_24)))
            var_8_1.b = 0
            char* eax_8 = var_138c0
            
            if (eax_8 != 0 && *eax_8 != 0)
                void* eax_10 = sub_4c4060(&var_138c0)
                int32_t temp2_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp2_1 == 1)
                    char* esi_2 = *(eax_10 + 0xc) + 0x10
                    int32_t* eax_11 = sub_4f4380(esi_2)
                    var_24 = esi_2
                    sub_4f4430(eax_10, eax_11, var_24)
            
            int32_t var_8_2 = 0xffffffff
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_4c4060(&result_1)
                int32_t temp4_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp4_1 == 1)
                    char* esi_4 = *(result + 0xc) + 0x10
                    int32_t* eax_14 = sub_4f4380(esi_4)
                    var_24 = esi_4
                    sub_4f4430(result, eax_14, var_24)
            
            result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t entry_ebx
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return result
}
