// 函数名称: sub_523520
// 虚拟地址: 0x523520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_523520(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_wcrtomb_s_l@@YAHQAHQADI_WQAU_Mbstatet@@QAU__crt_locale_pointers@@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_28 = ebx
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    char* var_14
    sub_4c42b0(&var_14, &data_83f3d3)
    int32_t var_8_1 = 1
    char* edi = *(arg2 + 4)
    int32_t* result
    
    while (true)
        void* eax_3
        eax_3.b = *edi
        char** eax_14
        
        switch (sx.d(eax_3.b))
            case 0, 0x5d
                result = arg1
                *(arg2 + 4) = edi - 1
                sub_522600(result, &var_14)
                int32_t var_18_3 = 1
                break
            case 0x5b
                int32_t var_38_5 = sx.d(*edi)
                char* var_20
                sub_4c4a50(&var_20, "invalid char %c")
                result = arg1
                sub_522830(result)
                char* eax_20 = var_20
                int32_t var_18_2 = 1
                
                if (eax_20 == 0)
                    break
                
                if (*eax_20 == 0)
                    break
                
                eax_14 = &var_20
                goto label_523678
            case 0x5c
                eax_3.b = edi[1]
                
                if (eax_3.b == 0x5b || eax_3.b == 0x5d)
                    sub_4c4810(&var_14, sx.d(eax_3.b))
                    edi = &edi[2]
                    continue
                
                int32_t var_38_3 = sx.d(edi[1])
                char* var_1c
                sub_4c4a50(&var_1c, "unknown escape char %c")
                result = arg1
                sub_522830(result)
                char* eax_13 = var_1c
                int32_t var_18_1 = 1
                
                if (eax_13 == 0)
                    break
                
                if (*eax_13 == 0)
                    break
                
                eax_14 = &var_1c
            label_523678:
                void* eax_15 = sub_4c4060(eax_14)
                int32_t temp1_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_5 = *(eax_15 + 0xc) + 0x10
                    sub_4f4430(eax_15, sub_4f4380(esi_5), esi_5)
                
                break
        
        if (eax_3.b != 0)
            char* eax_4 = var_14
            int32_t ecx_1
            
            if (eax_4 == 0 || *eax_4 == 0)
                char* eax_5 = edi
                void* edx_2 = &eax_5[1]
                
                do
                    ecx_1.b = *eax_5
                    eax_5 = &eax_5[1]
                while (ecx_1.b != 0)
                
                char** var_38_2 = &var_14
                sub_4c40c0(eax_5 - edx_2, edx_2)
                eax_3 = edi
                char* edx_4 = var_14 - edi
                char i
                
                do
                    i = *eax_3
                    *(edx_4 + eax_3) = i
                    eax_3 += 1
                while (i != 0)
                edi = &edi[1]
                continue
            else
                void* ebx_2 = *(sub_4c4060(&var_14) + 8)
                char* eax_9 = edi
                
                do
                    ecx_1.b = *eax_9
                    eax_9 = &eax_9[1]
                while (ecx_1.b != 0)
                
                void* eax_10 = eax_9 - &eax_9[1]
                void** edx_6 = eax_10 + ebx_2
                sub_4c4160(eax_10, edx_6, &var_14, edx_6, 1)
                sub_5ab990(ebx_2 + var_14, edi, eax_10 + 1)
        
        edi = &edi[1]
    
    var_8_1.b = 0
    char* eax_21 = var_14
    
    if (eax_21 != 0 && *eax_21 != 0)
        void* eax_23 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_7 = *(eax_23 + 0xc) + 0x10
            sub_4f4430(eax_23, sub_4f4380(esi_7), esi_7)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
