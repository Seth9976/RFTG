// 函数名称: sub_40b8a0
// 虚拟地址: 0x40b8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_40b8a0(int32_t arg1, int32_t arg2, char arg3, float* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69623a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_e8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_307c1a0
    char* entry_ebx
    
    if (sub_4f65a0(&entry_ebx[4], *entry_ebx) != 0)
        void var_d8
        int32_t eax_5
        int80_t st0_1
        st0_1, eax_5 = sub_40a930(&var_d8)
        long double x87_r6_1 = fconvert.t(data_8c4d34)
        int32_t eax_6 = *(entry_ebx + 8)
        void var_70
        int32_t ecx
        int32_t esi_2
        esi_2, ecx = __builtin_memcpy(&var_70, eax_5, 0x40)
        int32_t var_f8_1 = ecx
        void var_98
        int32_t* eax_7 = sub_4f8710(esi_2, &var_98, eax_6, &var_70, arg4, arg3, fconvert.s(x87_r6_1), 
            nullptr, nullptr, nullptr)
        int32_t ecx_2 = *eax_7
        int32_t var_28_1 = eax_7[1]
        int32_t var_24 = eax_7[2]
        int32_t esi_3 = 0xffffffff
        int32_t var_20_1 = eax_7[3]
        
        if (ecx_2 == 2)
            esi_3 = eax_7[4]
        
        if ((data_3166158 & 1) == 0)
            data_3166158.d |= 1
            int32_t var_8_1 = 0
            data_3166154 = sub_4f5220(data_307c1a0, "BtnYes")
            int32_t var_8_2 = 0xffffffff
        
        if ((data_3166158 & 2) == 0)
            data_3166158.d |= 2
            int32_t var_8_3 = 1
            data_3166150 = sub_4f5220(data_307c1a0, "BtnNo")
            int32_t var_8_4 = 0xffffffff
        
        if ((data_3166158 & 4) == 0)
            data_3166158.d |= 4
            int32_t var_8_5 = 2
            data_316614c = sub_4f5220(data_307c1a0, "BtnBack")
            int32_t var_8_6 = 0xffffffff
        
        if (esi_3 == data_3166154)
            uint32_t ecx_4 = *(entry_ebx + 0xc)
            int32_t edx_6 = *(entry_ebx + 0x10)
            void* esi_4 = data_27e7a40
            int32_t var_74_1 = 2
            uint32_t var_78 = ecx_4
            void* ecx_6
            
            if (edx_6 == 1)
                ecx_6 = ecx_4 * 0x1f8 + esi_4
            
            if (edx_6 != 1 || *(ecx_6 + 0xcb4) != 1)
                if (edx_6 != 0)
                    int32_t eax_14 = ecx_4 * 0x1f8
                    int32_t edx_7 = *(eax_14 + esi_4 + 0xc68)
                    int32_t esi_5 = *(eax_14 + esi_4 + 0xcac)
                    
                    if (*(eax_14 + esi_4 + 0xc60) != 1 && edx_7 != 0xffffffff)
                        void* eax_16 = sub_473150(eax_14 + esi_4 + 0xad8, edx_7, 5, data_27e7a5c, 
                            *(eax_14 + esi_4 + 0xc18) - 2, 3, edx_7, 0)
                        *(eax_16 + 4) += 1
                        *(eax_16 + 0xc) += 1
                        
                        if (*(eax_16 + 8) s< 1)
                            *(eax_16 + 8) = 1
                            *(eax_16 + 0x10) = esi_5
                    
                    sub_408f10()
                else
                    int32_t var_ec_3 = edx_6
                    sub_41bb40()
                
                void* eax_17 = data_27e7a40
                void* ecx_11 = *(eax_17 + 0x28)
                void* edi_2 = *(entry_ebx + 0xc) * 0x1f8 + eax_17 + 0xcac
                
                if (ecx_11 != 0)
                    int32_t** edx_10 = data_27e7bb8
                    uint32_t eax_18 = zx.d(ecx_11.w)
                    
                    if (eax_18 u< edx_10[1])
                        void* eax_20 = &(*edx_10)[eax_18 * 0x13]
                        
                        if (*(eax_20 + 0x48) == ecx_11)
                            int32_t* var_ec_4 = &var_24
                            void* var_f0_5 = eax_20 + 0x3c
                            int32_t var_20_2 = 4
                            int32_t var_1c_1 = 0xf4263
                            var_24 = 0xfeedface
                            void* ecx_12
                            int32_t** edx_11
                            ecx_12, edx_11 = sub_4c72b0(0xc, edx_10, ecx_11)
                            void* var_f4_1 = edi_2
                            void* var_f8_4 = eax_20 + 0x3c
                            sub_4c72b0(4, edx_11, ecx_12)
            else
                sub_4c75d0(ecx_4, edx_6, *(esi_4 + 0x28), 4, 0xf4262, ecx_6 + 0xcac)
            
            sub_405420(&var_78)
            
            if (*(entry_ebx + 0x10) == 0)
                *(data_27e7a40 + 0x528) = 1
            
            *entry_ebx = 0
        else if (esi_3 == data_3166150 || esi_3 == data_316614c)
            *entry_ebx = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return 0
}
