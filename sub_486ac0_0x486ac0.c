// 函数名称: sub_486ac0
// 虚拟地址: 0x486ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_486ac0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69062a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_34
    int32_t eax_2 = __security_cookie ^ &var_34
    int32_t __saved_edi
    int32_t var_44 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31651dc & 1) == 0)
        data_31651dc.d |= 1
        int32_t var_c_1 = 0
        data_31651d8 = sub_4f5220(data_307c1a0, "BtnYes")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_31651dc & 2) == 0)
        data_31651dc.d |= 2
        int32_t var_c_3 = 1
        data_31651d4 = sub_4f5220(data_307c1a0, "BtnNo")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_31651dc & 4) == 0)
        data_31651dc.d |= 4
        int32_t var_c_5 = 2
        data_31651d0 = sub_4f5220(data_307c1a0, "BtnBack")
        int32_t var_c_6 = 0xffffffff
    
    if (arg1 == data_31651d8)
        uint32_t ecx_2 = data_307db14
        int32_t esi_1 = data_307db18
        void* edx_2 = data_27e7a40
        int32_t var_2c_1 = 2
        uint32_t var_30 = ecx_2
        
        if (esi_1 != 1)
            if (esi_1 != 0)
            label_486c0b:
                int32_t eax_11 = ecx_2 * 0x1f8
                int32_t esi_2 = *(eax_11 + edx_2 + 0xcac)
                int32_t edx_3 = *(eax_11 + edx_2 + 0xc68)
                
                if (*(eax_11 + edx_2 + 0xc60) != 1 && edx_3 != 0xffffffff)
                    void* eax_13 = sub_473150(eax_11 + edx_2 + 0xad8, edx_3, 5, data_27e7a5c, 
                        *(eax_11 + edx_2 + 0xc18) - 2, 3, edx_3, 0)
                    *(eax_13 + 4) += 1
                    *(eax_13 + 0xc) += 1
                    
                    if (*(eax_13 + 8) s< 1)
                        *(eax_13 + 8) = 1
                        *(eax_13 + 0x10) = esi_2
                
                sub_408f10()
                goto label_486c75
            
            int32_t var_48_2 = esi_1
            sub_41bb40()
        label_486c75:
            void* eax_14 = data_27e7a40
            void* ecx_9 = *(eax_14 + 0x28)
            void* edi_2 = data_307db14 * 0x1f8 + eax_14 + 0xcac
            
            if (ecx_9 != 0)
                int32_t** edx_6 = data_27e7bb8
                uint32_t eax_15 = zx.d(ecx_9.w)
                
                if (eax_15 u< edx_6[1])
                    void* eax_17 = &(*edx_6)[eax_15 * 0x13]
                    
                    if (*(eax_17 + 0x48) == ecx_9)
                        int32_t var_28
                        int32_t* var_48_3 = &var_28
                        void* var_4c_5 = eax_17 + 0x3c
                        int32_t var_24_1 = 4
                        int32_t var_20_1 = 0xf4263
                        var_28 = 0xfeedface
                        void* ecx_10
                        int32_t** edx_7
                        ecx_10, edx_7 = sub_4c72b0(0xc, edx_6, ecx_9)
                        void* var_50_1 = edi_2
                        void* var_54_2 = eax_17 + 0x3c
                        sub_4c72b0(4, edx_7, ecx_10)
        else
            void* ecx_4 = ecx_2 * 0x1f8 + edx_2
            
            if (*(ecx_4 + 0xcb4) != 1)
                goto label_486c0b
            
            sub_4c75d0(ecx_2, edx_2, *(edx_2 + 0x28), 4, 0xf4262, ecx_4 + 0xcac)
        
        sub_405420(&var_30)
        
        if (data_307db18 == 0)
            int32_t edx_8 = data_307ca58
            *(data_27e7a40 + 0x528) = 1
            data_30d6f38 = edx_8
            data_30d6f40 = 0
        
        data_30d6f3c = 0
    else if (arg1 == data_31651d4 || arg1 == data_31651d0)
        if (data_307db18 != 0)
            data_30d6f3c = 0
        else
            data_30d6f38 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_34)
    return 0
}
