// 函数名称: sub_538790
// 虚拟地址: 0x538790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_538790(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68ec20
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_24 = nullptr
    void* eax_3 = sub_538740(*arg1)
    int32_t eax_4 = *arg1
    void* var_28 = eax_3
    int32_t edx
    void* eax_5 = sub_531280(eax_4, edx, &data_8c35ec)
    int32_t ecx_1 = *(eax_5 + 0x10)
    char** entry_result
    
    if (ecx_1 == 0xf)
        void* esi_1 = arg1[1]
        
        if (esi_1 == 0)
        label_538a52:
            int32_t var_38_15 = *(eax_3 + 4)
            sub_4c4a50(entry_result, "%s")
        else
            sub_537dd0(&var_28, edx, esi_1, &var_28)
            int32_t var_c_1 = 0
            void* eax_7 = var_28
            
            if (eax_7 == 0)
                eax_7 = &data_83f3d3
            
            void* var_38_1 = eax_7
            int32_t var_3c = *(eax_3 + 4)
            sub_4c4a50(entry_result, "%s   [%s]")
            int32_t var_c_2 = 0xffffffff
            void* eax_8 = var_28
            
            if (eax_8 != 0 && *eax_8 != 0)
                void* eax_10 = sub_4c4060(&var_28)
                int32_t temp0_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_3 = *(eax_10 + 0xc) + 0x10
                    sub_4f4430(eax_10, sub_4f4380(esi_3), esi_3)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return entry_result
    else if (ecx_1 != 0xa)
        if (eax_5 != data_315f7ec)
            if (ecx_1 == 8)
                int32_t esi_7 = arg1[1]
                
                if (esi_7 != 0)
                    int32_t var_38_13 = esi_7
                    int32_t var_3c_4 = *(eax_3 + 4)
                    sub_4c4a50(entry_result, "%s   %s")
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return entry_result
            else if (ecx_1 == 1)
                int32_t var_38_14 = arg1[1]
                int32_t var_3c_5 = *(eax_3 + 4)
                sub_4c4a50(entry_result, "%s   %d")
                fsbase->NtTib.ExceptionList = ExceptionList
                return entry_result
            
            goto label_538a52
        
        int32_t* edi_3 = arg1[1]
        int32_t edx_2 = edi_3[1]
        
        if (edx_2 == 1)
            float* ecx_7 = *edi_3
            long double x87_r7_1 = fconvert.t(*ecx_7)
            long double x87_r6_1 = fconvert.t(ecx_7[1])
            x87_r6_1 - x87_r7_1
            eax_5.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                float* var_38_5 = ecx_7
                sub_537c80(&var_24, fconvert.s(fconvert.t(*ecx_7)))
                int32_t var_c_3 = 1
                char* eax_15 = var_24
                
                if (eax_15 == 0)
                    eax_15 = &data_83f3d3
                
                char* var_38_7 = eax_15
                int32_t var_3c_2 = *(var_28 + 4)
                sub_4c4a50(entry_result, "%s   [%s]")
                int32_t var_c_4 = 0xffffffff
                sub_4c43d0(&var_24)
                fsbase->NtTib.ExceptionList = ExceptionList
                return entry_result
            
            if (edx_2 == 1)
                float* var_38_8 = ecx_7
                char* var_1c
                sub_537c80(&var_1c, fconvert.s(fconvert.t(**edi_3)))
                int32_t var_c_5 = 2
                char* var_20
                sub_537c80(&var_20, fconvert.s(fconvert.t(*(*edi_3 + 4))))
                var_c_5.b = 3
                char* eax_18 = var_20
                char* const ecx_13 = &data_83f3d3
                
                if (eax_18 != 0)
                    ecx_13 = eax_18
                
                char* const eax_19 = var_1c
                
                if (eax_19 == 0)
                    eax_19 = &data_83f3d3
                
                char* const var_38_11 = ecx_13
                char* const var_3c_3 = eax_19
                int32_t var_40_1 = *(var_28 + 4)
                sub_4c4a50(entry_result, "%s   [%s to %s]")
                var_c_5.b = 2
                sub_4c43d0(&var_20)
                int32_t var_c_6 = 0xffffffff
                sub_4c43d0(&var_1c)
                fsbase->NtTib.ExceptionList = ExceptionList
                return entry_result
        
        int32_t var_38_12 = *(var_28 + 4)
        sub_4c4a50(entry_result, "%s   [path]")
    else
        void* const var_3c_1
        
        if (arg1[1] == 0)
            int32_t var_38_4 = *(eax_3 + 4)
            var_3c_1 = "%s   [false]"
        else
            int32_t var_38_3 = *(eax_3 + 4)
            var_3c_1 = "%s   [true]"
        
        sub_4c4a50(entry_result, var_3c_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return entry_result
}
