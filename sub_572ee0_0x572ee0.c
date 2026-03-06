// 函数名称: sub_572ee0
// 虚拟地址: 0x572ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_572ee0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_698f50
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_bc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    HWND eax_3 = *arg1
    
    if (eax_3 != 1)
        if (eax_3 == 0x1a)
            char* eax_28 = arg1[6]
            
            if (eax_28 == 0)
                eax_28 = &data_83f3d3
            
            HWND var_48
            sub_51ee80(eax_28, &var_48, eax_28, &var_48)
            int32_t var_8_1 = 0
            HWND eax_29 = var_48
            
            if (eax_29 == 0)
                eax_29 = &data_83f3d3
            
            char** eax_30 = sub_543700(eax_29)
            int32_t eax_31 = eax_30[1]
            
            if (eax_31 == 3 || eax_31 == 2 || eax_31 == 0x1e || eax_31 == 0x19)
                int32_t eax_32 = data_2727b70
                data_2727b70 = eax_32 + 1
                void* eax_34 = data_27e7fd0
                char* var_50 = fconvert.s(float.t(*(eax_34 + 0x14)))
                float var_38 = fconvert.s(float.t(*(eax_34 + 0x18)))
                long double x87_r7_3 = float.t(0)
                float var_64 = fconvert.s(x87_r7_3)
                float var_5c_1 = fconvert.s(fconvert.t(var_50))
                float var_98_1 = fconvert.s(x87_r7_3)
                float var_58_1 = fconvert.s(fconvert.t(var_38))
                data_2727b78
                float var_9c_1 = var_64
                long double x87_r6_1 = float.t(1)
                int32_t var_34 = data_2727b88
                float var_94_1 = var_5c_1
                float var_90_1 = var_58_1
                int32_t eax_37 = data_2727b90
                int32_t var_28_1 = data_2727b94
                int32_t ecx_10 = data_2727ba0
                float var_30 = data_2727b8c
                int32_t var_2c_1 = eax_37
                int32_t var_1c_1 = ecx_10
                int32_t var_24_1 = data_2727b98
                int32_t var_20_1 = data_2727b9c
                void var_8c
                __builtin_memcpy(&var_8c, &var_34, 0x1c)
                var_38 = fconvert.s(x87_r6_1 / x87_r6_1)
                long double x87_r6_2 = fconvert.t(data_2727b74)
                var_38 = fconvert.s(fconvert.t(var_38) * x87_r6_2)
                long double x87_r6_4 = fconvert.t(var_38)
                var_64 = fconvert.s(fneg(x87_r6_4))
                float var_ac = var_64
                float var_a8 = fconvert.s(fneg(x87_r6_2))
                float var_a4_1 = fconvert.s(x87_r6_4)
                float var_a0_1 = fconvert.s(x87_r6_2)
                float var_3c
                int32_t edx_9
                int80_t st0_1
                st0_1, edx_9 = sub_4c6230(&var_3c)
                int32_t* eax_41 = sub_4e4c10(&var_3c, edx_9, &var_ac, &var_3c)
                float edx_10 = eax_41[1]
                var_30 = *eax_41
                long double x87_r7_11 = float.t(0)
                float ecx_14 = eax_41[2]
                float edx_11 = eax_41[3]
                long double x87_r6_6 = x87_r7_11 * x87_r7_11
                float ecx_15 = eax_41[4]
                float edx_12 = eax_41[5]
                int32_t var_60_3 = 0
                var_38 = fconvert.s(x87_r7_11 + x87_r6_6 + x87_r6_6)
                var_64 = 0f
                var_38 = fconvert.s(fneg(fconvert.t(var_38)))
                int32_t var_5c_3 = 0x3f800000
                float var_58_3 = var_38
                sub_4d7b10(&var_64, &var_30, &var_38)
                long double x87_r6_8 = fconvert.t(var_38)
                int32_t* esi_12 = data_26a6760
                float var_44_1 = fconvert.s(fconvert.t(edx_11) * x87_r6_8)
                float var_40_1 = fconvert.s(fconvert.t(ecx_15) * x87_r6_8)
                var_3c = fconvert.s(x87_r6_8 * fconvert.t(edx_12))
                var_64 = fconvert.s(fconvert.t(var_44_1) + fconvert.t(var_30))
                float var_60_4 = fconvert.s(fconvert.t(edx_10) + fconvert.t(var_40_1))
                float var_5c_4 = fconvert.s(fconvert.t(ecx_14) + fconvert.t(var_3c))
                void* eax_43
                int32_t ecx_16
                eax_43, ecx_16 = sub_50c140(esi_12)
                float ebx_3 = *(eax_43 + 4)
                void* eax_44 = data_30d7484
                int32_t var_c4_2 = ecx_16
                var_38 = ebx_3
                int32_t* eax_45
                int32_t edx_13
                eax_45, edx_13 = sub_4fff30(eax_44, 0)
                sub_505030(eax_45, edx_13, eax_43, eax_45, ebx_3)
                int32_t* ebx_5 = ebx_3 i* 0xb8 + *eax_43
                int32_t var_c8_1 = eax_32
                var_8_1.b = 1
                int128_t* eax_47 = *sub_4c4a50(&var_50, "Item-%d")
                
                if (eax_47 == 0)
                    eax_47 = &data_83f3d3
                
                sub_4fedb0(eax_47, &ebx_5[1])
                var_8_1.b = 0
                char* eax_48 = var_50
                
                if (eax_48 != 0 && *eax_48 != 0)
                    void* eax_50 = sub_4c4060(&var_50)
                    int32_t temp3_1 = *(eax_50 + 4)
                    *(eax_50 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        int32_t esi_15 = *(eax_50 + 0xc) + 0x10
                        sub_4f4430(eax_50, sub_4f4380(esi_15), esi_15)
                
                ebx_5[0x2d] = eax_32
                int32_t eax_53 = eax_30[1]
                
                if (eax_53 == 3)
                    int32_t* eax_55 = sub_4ca0f0(eax_30)
                    ebx_5[0xe] = eax_30
                    __builtin_memset(&ebx_5[2], 0x840590, 0x24)
                    ebx_5[2] = var_64
                    ebx_5[3] = var_60_4
                    ebx_5[4] = var_5c_4
                    
                    if (*(*eax_55 + 0x18) != 1)
                        *ebx_5 = 1
                    else
                        *ebx_5 = 4
                        *(ebx_5 + 0x31) = 1
                else if (eax_53 == 2)
                    *ebx_5 = 3
                    ebx_5[0x16] = eax_30
                else if (eax_53 == 0x1e)
                    *ebx_5 = 2
                    ebx_5[0x1d] = eax_30
                else if (eax_53 == 0x19)
                    *ebx_5 = 8
                    ebx_5[0x2c] = eax_30
                
                data_26a6764 = var_38
                data_26a7764 = 1
                sub_5752b0(1)
                sub_540800(data_26a6760)
                sub_56f3d0()
                int32_t var_8_3 = 0xffffffff
                eax_3 = var_48
                
                if (eax_3 != 0 && eax_3->unused.b != 0)
                    eax_3 = sub_4c4060(&var_48)
                    
                    if (eax_3 == 1)
                        sub_4f4430(eax_3 - 1, sub_4f4380(eax_3 + 0xf), eax_3 + 0xf)
            else
                int32_t var_8_2 = 0xffffffff
                sub_4c43d0(&var_48)
        else if (eax_3 == 5)
            sub_573970()
        
        eax_3.b = 0
    else
        eax_3 = arg1[1]
        
        if (eax_3 == 0x2e)
            int32_t eax_4 = sub_50c140(data_26a6760)
            int32_t esi_2 = data_26a7764
            int32_t esi_3 = esi_2 - 1
            
            if (esi_2 - 1 s>= 0)
                int32_t temp2_1
                
                do
                    int32_t eax_5 = (&data_26a6764)[esi_3]
                    int32_t var_c0_1 = 0
                    int32_t* eax_7
                    int32_t ecx
                    eax_7, ecx = sub_4fff30(data_30d7484, 0)
                    sub_505290(eax_4, eax_7, ecx, eax_5)
                    temp2_1 = esi_3
                    esi_3 -= 1
                while (temp2_1 - 1 s>= 0)
            
            int32_t* eax_9 = data_26a6760
            data_26a7764 = 0
            sub_540800(eax_9)
            sub_56f3d0()
            sub_5752b0(1)
            eax_3.b = 0
        else if (eax_3 != 0x1b)
            if (eax_3 == 0xd)
                data_273abf0 = 0
                eax_3.b = 1
            else if (eax_3 != 9)
            label_57303a:
                int16_t eax_13
                
                if (arg1[1] == 8)
                    eax_13 = GetKeyState(0x11)
                
                if (arg1[1] != 8 || (0x8000 & eax_13) == 0)
                    int16_t eax_14
                    
                    if (arg1[1] == 9)
                        eax_14 = GetKeyState(0x11)
                    
                    if (arg1[1] != 9 || (0x8000 & eax_14) == 0)
                        if (arg1[1] == 0x4f)
                            eax_3 = GetKeyState(0x11)
                        
                        if (arg1[1] != 0x4f || (0x8000 & eax_3.w) == 0)
                            int16_t eax_21
                            
                            if (arg1[1] == 0x4b)
                                eax_21 = GetKeyState(0x11)
                            
                            if (arg1[1] != 0x4b || (0x8000 & eax_21) == 0)
                                int16_t eax_22
                                
                                if (arg1[1] == 0x4c)
                                    eax_22 = GetKeyState(0x11)
                                
                                if (arg1[1] != 0x4c || (0x8000 & eax_22) == 0)
                                    eax_3 = arg1[1]
                                    
                                    if (eax_3 != 0x4c)
                                        int16_t eax_23
                                        
                                        if (eax_3 == 0x59)
                                            eax_23 = GetKeyState(0x11)
                                        
                                        if (eax_3 != 0x59 || (0x8000 & eax_23) == 0)
                                            int16_t eax_24
                                            
                                            if (arg1[1] == 0x5a)
                                                eax_24 = GetKeyState(0x11)
                                            
                                            if (arg1[1] != 0x5a || (0x8000 & eax_24) == 0)
                                                int16_t eax_26
                                                
                                                if (arg1[1] == 0x4a)
                                                    eax_26 = GetKeyState(0x11)
                                                
                                                if (arg1[1] != 0x4a || (0x8000 & eax_26) == 0)
                                                    if (arg1[1] == 0x54)
                                                        eax_3 = GetKeyState(0x11)
                                                    
                                                    if (arg1[1] != 0x54 || (0x8000 & eax_3.w) == 0)
                                                        eax_3 = arg1[1]
                                                        int32_t ecx_3 = data_273abf0
                                                        void* edx_2 = data_27e7fdc
                                                        void* edi_6 = data_27e7bbc
                                                        
                                                        if (eax_3 == 0x57 && ecx_3 != 0 && (
                                                                (*(edx_2 + 0xc) & 2) == 0
                                                                || *(edi_6 + 0x18) == 0))
                                                            data_273abf0 = 2
                                                            eax_3.b = 1
                                                        else if (eax_3 == 0x45 && ecx_3 != 0 && (
                                                                (*(edx_2 + 0xc) & 2) == 0
                                                                || *(edi_6 + 0x18) == 0))
                                                            data_273abf0 = 3
                                                            eax_3.b = 1
                                                        else if (eax_3 == 0x52 && ecx_3 != 0 && (
                                                                (*(edx_2 + 0xc) & 2) == 0
                                                                || *(edi_6 + 0x18) == 0))
                                                            data_273abf0 = 4
                                                            eax_3.b = 1
                                                        else if (eax_3 == 0x51 && ecx_3 != 0)
                                                            data_273abf0 = 1
                                                            eax_3.b = 1
                                                        else if (eax_3 != 0x53)
                                                        label_573335:
                                                            
                                                            if (arg1[1] == 0x53)
                                                                eax_3 = GetKeyState(0x11)
                                                            
                                                            if (arg1[1] != 0x53
                                                                    || (0x8000 & eax_3.w) == 0)
                                                                if (arg1[1] == 0x41)
                                                                    eax_3 = GetKeyState(0x11)
                                                                
                                                                if (arg1[1] == 0x41
                                                                        && (0x8000 & eax_3.w) != 0)
                                                                    if (data_273abf0 != 0
                                                                            && arg1[1] == 0x44)
                                                                        goto label_57337c
                                                                    
                                                                    eax_3.b = 0
                                                                else if (arg1[1] != 0x44)
                                                                    eax_3.b = 0
                                                                else
                                                                label_57337c:
                                                                    
                                                                    if ((0x8000 & GetKeyState(0x11).w) != 0
                                                                            && data_273abf0 == 0)
                                                                        data_26a7764 = 0
                                                                        sub_56f3d0()
                                                                    
                                                                    eax_3.b = 0
                                                            else
                                                                sub_542a90(0x8000)
                                                                eax_3.b = 0
                                                        else
                                                            eax_3 = GetKeyState(0x11)
                                                            
                                                            if ((0x8000 & eax_3.w) == 0)
                                                                goto label_573335
                                                            
                                                            char* ecx_4
                                                            eax_3, ecx_4 = GetKeyState(0x10)
                                                            
                                                            if ((0x8000 & eax_3.w) == 0)
                                                                goto label_573335
                                                            
                                                            sub_542f30(ecx_4)
                                                            eax_3.b = 0
                                                    else if (data_26a7764 s<= 0)
                                                        eax_3.b = 1
                                                    else if (data_273abf0 != 0)
                                                        data_273abf0 = 0
                                                        eax_3.b = 1
                                                    else
                                                        data_273abf0 = 2
                                                        sub_56fb80()
                                                        int32_t eax_27
                                                        eax_27.b = 1
                                                else
                                                    sub_5713b0()
                                                    sub_5752b0(1)
                                                    eax_3.b = 0
                                            else
                                                sub_5754d0()
                                                int32_t eax_25
                                                eax_25.b = 1
                                        else
                                            sub_575540()
                                            eax_3.b = 0
                                    else
                                        data_be1e94 = 1
                                        eax_3.b = 0
                                else
                                    sub_575090()
                                    eax_3.b = 0
                            else
                                sub_575110()
                                eax_3.b = 0
                        else
                            if (data_26a7764 == 1)
                                int32_t* edi_4 = data_26a6764 * 0xb8 + *sub_50c140(data_26a6760)
                                int32_t eax_16 = *edi_4
                                
                                if (eax_16 == 2)
                                    sub_56bbb0(edi_4[0x1d])
                                else if (eax_16 == 5)
                                    if (edi_4[0x25] s<= 0)
                                        sub_4c5870("el.numSubFabs > 0", &data_83f3d3, 
                                            "Editor\FabEditor.cpp", 0x650, "FabEditorInputHandle")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t* edi_5 = edi_4[0x24]
                                    
                                    if (*edi_5 == 0)
                                        sub_4c5870("el.subFabs[0].subFab", &data_83f3d3, 
                                            "Editor\FabEditor.cpp", 0x651, "FabEditorInputHandle")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    sub_56bbb0(*edi_5)
                                else if (eax_16 == 8)
                                    sub_56bbb0(edi_4[0x2c])
                            
                            eax_3.b = 0
                    else
                        sub_56bb60()
                        eax_3.b = 0
                else
                    sub_56bb10()
                    eax_3.b = 0
            else
                if ((0x8000 & GetKeyState(0x11)) == 0)
                    goto label_57303a
                
                if ((0x8000 & GetKeyState(0x10)) == 0)
                    goto label_57303a
                
                sub_56bb10()
                eax_3.b = 0
        else if (data_273abf0 == 0)
            eax_3.b = 0
        else
            int32_t i = 0
            void* ebx_2 = sub_50c140(data_26a6760)
            void* eax_10
            
            if (data_26a7764 s> 0)
                eax_10 = &data_2728bc0
                
                do
                    int32_t edi_1 = (&data_26a6764)[i] * 0xb8 + *ebx_2 + 8
                    i += 1
                    __builtin_memcpy(edi_1, eax_10, 0x24)
                    eax_10 += 0x24
                while (i s< data_26a7764)
            
            data_273abf0 = 0
            eax_10.b = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
}
