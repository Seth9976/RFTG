// 函数名称: sub_43b0e0
// 虚拟地址: 0x43b0e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43b0e0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696b88
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31662c4 & 1) == 0)
        data_31662c4.d |= 1
        int32_t var_8_1 = 0
        data_31662c0 = sub_4f5220(data_307ca40, "btn_menu")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31662c4 & 2) == 0)
        data_31662c4.d |= 2
        int32_t var_8_3 = 1
        data_31662bc = sub_4f5220(data_307ca40, "btn_undo")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31662c4 & 4) == 0)
        data_31662c4.d |= 4
        int32_t var_8_5 = 2
        data_31662b8 = sub_4f5220(data_307ca40, "btn_ok")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_31662c4 & 8) == 0)
        data_31662c4.d |= 8
        int32_t var_8_7 = 3
        data_31662b4 = sub_4f5220(data_307ca40, "btn_next")
        int32_t var_8_8 = 0xffffffff
    
    if (arg1 != data_31662b4)
        if (arg1 == data_31662c0)
            data_30d6f40 = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        if (arg1 == data_31662bc)
            sub_418a60()
            fsbase->NtTib.ExceptionList = ExceptionList
            return 1
        
        if (arg1 == data_31662b8)
            int32_t* ecx_11 = data_27e7a40
            void* esi_2 = ecx_11[0x152]
            int32_t var_20 = 0
            int32_t var_1c_1 = 0
            int32_t var_18_1 = 0
            char eax_19 = sub_419460(ecx_11)
            
            if (eax_19 == 0)
                *(esi_2 + 0xbff8) = eax_19
                *(esi_2 + 0xc008) = 0
                *(esi_2 + 0xbfe4) = 0
                
                if (*(esi_2 + 0x2c0b8) != 0)
                    *(esi_2 + 0x2c0b8) = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 1
                
                if (*(esi_2 + 0x2c098) != 0)
                    *(esi_2 + 0x2c098) = 0
                    sub_46bf90()
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 1
                
                int32_t edx_5 = sub_445f90()
                int32_t eax_22 = *(esi_2 + 0x210)
                
                switch (eax_22)
                    case 0, 4
                        void* eax_23 = data_27e7a40
                        void* edx_6 = *(eax_23 + 0x548)
                        void* eax_24 = *(eax_23 + 0x74)
                        var_20 = 4
                        sub_472e60(eax_24, edx_6, &var_20, edx_6)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
                    case 1, 2
                        void* eax_26 = data_27e7a40
                        void* ecx_19 = *(eax_26 + 0x548)
                        void* eax_27 = *(eax_26 + 0x74)
                        var_20 = 5
                        sub_472e60(eax_27, edx_5, &var_20, ecx_19)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
                    case 3
                        sub_462dd0(eax_22, *(esi_2 + 4), esi_2 + 0x438f4, 1, 0, *(esi_2 + 8))
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
                    case 6
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
                
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3981, 
                    "GeneralButtonClickVR")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    else
        void* esi_1 = data_27e7a40
        int32_t ecx_2 = *(esi_1 + 0x2c495c)
        *(esi_1 + 0x52c) = 0xffffffff
        int32_t i = 1
        *(esi_1 + 0x528) = 1
        *(esi_1 + 0x530) = 2
        arg1 = ecx_2
        
        if (*(esi_1 + 0x2c4960) == 1)
            i = 0
            arg1 = 0
        
        for (int32_t ebx_1 = *(esi_1 + 0x2c4958); i s< ebx_1; i += 1)
            int32_t temp1_1 = mods.dp.d(sx.q(i + arg1), ebx_1)
            
            if (sub_4194d0(temp1_1) != 0)
                *(esi_1 + 0x52c) = temp1_1
                break
        
        if (*(esi_1 + 0x52c) == 0xffffffff)
            if (data_27c060c == 0 || *(esi_1 + 0x2c4960) == 1)
                *(esi_1 + 0x530) = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            
            *(esi_1 + 0x530) = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
