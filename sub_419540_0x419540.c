// 函数名称: sub_419540
// 虚拟地址: 0x419540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_419540(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696cb6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    
    if ((data_3166308 & 1) == 0)
        data_3166308.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4
        eax_4, edx = sub_4f5220(data_307c530, "btn_menu")
        data_3166304 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    int32_t* ecx
    
    if ((data_3166308 & 2) == 0)
        data_3166308.d |= 2
        int32_t var_8_3 = 1
        ecx = data_307c530
        int32_t eax_5
        eax_5, edx = sub_4f5220(ecx, "btn_undo")
        data_3166300 = eax_5
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166308 & 4) == 0)
        data_3166308.d |= 4
        int32_t var_8_5 = 2
        int32_t eax_6
        eax_6, edx = sub_4f5220(data_307c530, "btn_ok")
        data_31662fc = eax_6
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166308 & 8) == 0)
        data_3166308.d |= 8
        int32_t var_8_7 = 3
        int32_t eax_8
        eax_8, edx = sub_4f5220(data_307c530, "btn_next")
        data_31662f8 = eax_8
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3166308 & 0x10) == 0)
        data_3166308.d |= 0x10
        int32_t var_8_9 = 4
        ecx = data_307c530
        int32_t eax_9
        eax_9, edx = sub_4f5220(ecx, "btn_ZoomMilitary")
        data_31662f4 = eax_9
        int32_t var_8_10 = 0xffffffff
    
    if (arg1 != data_31662f8)
        if (arg1 == data_3166304)
            int32_t eax_17
            eax_17.b = 1
            sub_40b000(eax_17.b, edx, data_27e7a40 + 0x56c)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 1
        
        if (arg1 == data_31662f4)
            void* esi_2 = data_27e7a40
            void* ecx_10 = *(esi_2 + 0x548)
            int32_t eax_21
            int32_t edx_5
            edx_5:eax_21 = sx.q(*(ecx_10 + 0x4388c) - *(ecx_10 + 0x184))
            
            if ((eax_21 ^ edx_5) - edx_5 s> 0xa && *(ecx_10 + 0x2c0b0) == 0)
                *(ecx_10 + 0x2c0b0) = 1
                void* eax_24 = *(esi_2 + 0x548)
                *(eax_24 + 0x4388c) = *(eax_24 + 0x184)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return 1
        
        if (arg1 == data_3166300)
            sub_418a60()
            fsbase->NtTib.ExceptionList = ExceptionList
            return 1
        
        if (arg1 == data_31662fc)
            int32_t var_20 = 0
            int32_t var_1c_1 = 0
            int32_t var_18_1 = 0
            void* esi_3 = *(data_27e7a40 + 0x548)
            char eax_28 = sub_419460(ecx)
            
            if (eax_28 == 0)
                *(esi_3 + 0xbff8) = eax_28
                *(esi_3 + 0xc008) = 0
                *(esi_3 + 0xbfe4) = 0
                
                if (*(esi_3 + 0x2c0b8) != 0)
                    *(esi_3 + 0x2c0b8) = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 1
                
                if (*(esi_3 + 0x2c098) != 0)
                    *(esi_3 + 0x2c098) = 0
                    sub_46bf90()
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 1
                
                int32_t edx_7 = sub_445f90()
                int32_t eax_31 = *(esi_3 + 0x210)
                
                if (eax_31 u> 6)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5b0, 
                        "MainLayoutButtonClick")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                switch (eax_31)
                    case 0, 4
                        void* eax_35 = data_27e7a40
                        void* ecx_22 = *(eax_35 + 0x548)
                        void* eax_36 = *(eax_35 + 0x74)
                        var_20 = 4
                        sub_472e60(eax_36, edx_7, &var_20, ecx_22)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
                    case 1, 2
                        void* eax_38 = data_27e7a40
                        void* edx_9 = *(eax_38 + 0x548)
                        void* eax_39 = *(eax_38 + 0x74)
                        var_20 = 5
                        sub_472e60(eax_39, edx_9, &var_20, edx_9)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
                    case 3
                        int32_t eax_41 = *(esi_3 + 8)
                        sub_462dd0(eax_41, *(esi_3 + 4), esi_3 + 0x438f4, 1, 0, eax_41)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
                    case 5
                        void* eax_32 = sub_46b2b0(*(data_27e7a40 + 0x74))
                        bool cond:0 = *(eax_32 + 0x1f8c) == 0xffffffff
                        *(eax_32 + 0x1f90) = 0
                        sub_46c3b0(0, cond:0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
                    case 6
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 1
    else
        void* esi_1 = data_27e7a40
        int32_t edx_2 = *(esi_1 + 0x2c495c)
        *(esi_1 + 0x52c) = 0xffffffff
        int32_t i = 1
        *(esi_1 + 0x528) = 1
        *(esi_1 + 0x530) = 2
        arg1 = edx_2
        
        if (*(esi_1 + 0x2c4960) == 1)
            i = 0
            arg1 = 0
        
        for (int32_t ebx_1 = *(esi_1 + 0x2c4958); i s< ebx_1; i += 1)
            int32_t temp1_1 = mods.dp.d(sx.q(arg1 + i), ebx_1)
            
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
