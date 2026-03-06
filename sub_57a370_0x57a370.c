// 函数名称: sub_57a370
// 虚拟地址: 0x57a370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __fastcallsub_57a370(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6933b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_74 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    LRESULT result = *arg1
    char* var_38
    
    if (result == 3)
        if ((0x8000 & GetKeyState(0x20)) != 0)
            result = sub_579690()
        else if (data_273bc30 != 0 || data_273bc31:1.b != 0)
            result = sub_579360(1)
        else if (data_273bc31.b == 0)
            if (sub_5796e0(&var_38) == 0)
                data_273bc2c = 0
                result = sub_57c6a0()
            else
                char var_3c = 1
                
                if (data_273bc2c s> 0)
                    var_3c = 0
                
                if ((0x8000 & GetKeyState(0x11)) != 0)
                    result = sub_579c60(0x8000, var_38)
                label_57a473:
                    data_27bc469 = 1
                    goto label_57a47a
                
                char* edi_1 = var_38
                result = sub_575780(0x8000, edi_1)
                
                if (result.b == 0)
                    if ((0x8000 & GetKeyState(0x12)) == 0 || data_273bc2c s<= 0)
                        data_273ac2c = edi_1
                        data_273bc2c = 1
                        result = sub_57c6a0()
                        goto label_57a473
                    
                label_57a489:
                    
                    if ((0x8000 & GetKeyState(0x12)) != 0)
                        sub_5798d0()
                    
                    result = sub_579360(var_3c)
                else
                    data_27bc469 = 0
                label_57a47a:
                    
                    if (data_273bc2c s> 0)
                        goto label_57a489
        else
            result = sub_5795c0()
    else
        float var_34
        float var_2c
        float var_28
        
        if (result == 0x1a)
            char* edi_2 = arg1[6]
            char* const ecx = &data_83f3d3
            
            if (edi_2 != 0)
                ecx = edi_2
            
            int32_t edx
            sub_51ee80(&var_38, edx, ecx, &var_38)
            int32_t var_8_1 = 0
            char* eax_9 = var_38
            
            if (eax_9 == 0)
                eax_9 = &data_83f3d3
            
            char** eax_10 = sub_543700(eax_9)
            
            if (eax_10[1] == 3)
                int32_t eax_11 = data_273ac28
                int32_t* esi_1 = data_273ac20
                data_273ac28 = eax_11 + 1
                void* eax_13
                int32_t ecx_1
                eax_13, ecx_1 = sub_4f4890(esi_1)
                int32_t ebx_1 = *(eax_13 + 4)
                int32_t var_7c_1 = ecx_1
                int32_t* eax_15
                int32_t edx_4
                eax_15, edx_4 = sub_4fff30(data_30d7440, 0)
                sub_505030(eax_15, edx_4, eax_13, eax_15, ebx_1)
                int32_t* ebx_3 = ebx_1 * 0x118 + *eax_13
                int32_t var_80_1 = eax_11
                *ebx_3 = eax_11
                ebx_3[1] = 1
                var_8_1.b = 1
                char* eax_18 = *sub_4c4a50(&var_28, "Rect-%d")
                
                if (eax_18 == 0)
                    eax_18 = &data_83f3d3
                
                sub_4fedb0(eax_18, &ebx_3[2])
                var_8_1.b = 0
                sub_4c43d0(&var_28)
                float eax_20
                int32_t edx_6
                eax_20, edx_6 = sub_418560(eax_10)
                float var_1c = eax_20
                int32_t var_18_1 = edx_6
                sub_4c6230(&var_34)
                data_27bc43c
                long double x87_r6_1 = float.t(1)
                var_28 = fconvert.s(x87_r6_1 / x87_r6_1)
                long double x87_r6_2 = fconvert.t(var_28)
                var_2c = fconvert.s(fconvert.t(var_34) * x87_r6_2)
                float var_30
                var_28 = fconvert.s(x87_r6_2 * fconvert.t(var_30))
                var_34 = fconvert.s(fconvert.t(var_2c) + fconvert.t(data_27bc440))
                long double x87_r7_9 = fconvert.t(var_28)
                var_2c = var_34
                var_28 = fconvert.s(x87_r7_9 + fconvert.t(data_27bc444))
                float var_54
                sub_405e30(&var_54, &var_1c, &var_2c)
                float var_24 = var_54
                int32_t var_50
                int32_t var_20_1 = var_50
                float var_4c
                var_1c = var_4c
                int32_t var_48
                int32_t var_18_2 = var_48
                void var_64
                int32_t* eax_24 = sub_413110(&var_24, &var_64)
                int32_t edx_10 = eax_24[1]
                int32_t esi_4 = eax_24[2]
                int32_t eax_25 = eax_24[3]
                ebx_3[3] = *eax_24
                ebx_3[4] = edx_10
                ebx_3[5] = esi_4
                ebx_3[6] = eax_25
                ebx_3[0x1a] = eax_10
                data_273ac2c = eax_11
                data_273bc2c = 1
                sub_57c6a0()
                sub_5758a0(1)
                sub_540c30(data_273ac20)
                sub_57c6a0()
            
            int32_t var_8_2 = 0xffffffff
            result = sub_4c43d0(&var_38)
        else if (result == 9)
            var_28 = fconvert.s(float.t(arg1[3]) * fconvert.t(0.0020000000949949026) + fconvert.t(1.0))
            data_27bc43c = fconvert.s(fconvert.t(var_28) * fconvert.t(data_27bc43c))
        else if (result != 1)
            if (result == 7)
                result = sub_57c330()
        else if (data_273bc30 == 0 && data_273bc31:1.b == 0)
            if (data_273bc31.b == 0 || arg1[1] != 0xd)
                goto label_57a70a
            
            data_273bc30 = 0
            data_273bc31 = 0
        else if (arg1[1] != 0xd)
        label_57a70a:
            int16_t eax_27
            
            if (arg1[1] == 8)
                eax_27 = GetKeyState(0x11)
            
            if (arg1[1] == 8 && (0x8000 & eax_27) != 0)
                result = sub_56bb10()
            else if (arg1[1] != 9)
            label_57a766:
                
                if (arg1[1] == 0x4f)
                    result = GetKeyState(0x11)
                
                if (arg1[1] != 0x4f || (0x8000 & result.w) == 0)
                    if (arg1[1] != 0xdb)
                    label_57a7e0:
                        
                        if (arg1[1] != 0xdd)
                        label_57a812:
                            int16_t eax_35
                            
                            if (arg1[1] == 0xdb)
                                eax_35 = GetKeyState(0x11)
                            
                            if (arg1[1] != 0xdb || (0x8000 & eax_35) == 0)
                                int16_t eax_36
                                
                                if (arg1[1] == 0xdd)
                                    eax_36 = GetKeyState(0x11)
                                
                                if (arg1[1] != 0xdd || (0x8000 & eax_36) == 0)
                                    result = arg1[1]
                                    
                                    if (result != 0x43)
                                        int80_t st0_2
                                        
                                        if (result != 0x48)
                                            int16_t eax_37
                                            
                                            if (result == 0x4a)
                                                eax_37 = GetKeyState(0x11)
                                            
                                            if (result != 0x4a || (0x8000 & eax_37) == 0)
                                                if (arg1[1] == 0x54)
                                                    result = GetKeyState(0x11)
                                                
                                                if (arg1[1] != 0x54 || (0x8000 & result.w) == 0)
                                                    int32_t eax_38 = arg1[1]
                                                    
                                                    if (eax_38 != 0x42)
                                                        if (eax_38 == 0xbb)
                                                            result = GetKeyState(0x11)
                                                        
                                                        if (eax_38 != 0xbb || (0x8000 & result.w) == 0)
                                                            if (arg1[1] == 0xbd)
                                                                result = GetKeyState(0x11)
                                                            
                                                            if (arg1[1] != 0xbd
                                                                    || (0x8000 & result.w) == 0)
                                                                int16_t eax_39
                                                                
                                                                if (arg1[1] == 0x5a)
                                                                    eax_39 = GetKeyState(0x11)
                                                                
                                                                if (arg1[1] != 0x5a
                                                                        || (0x8000 & eax_39) == 0)
                                                                    int16_t eax_40
                                                                    
                                                                    if (arg1[1] == 0x59)
                                                                        eax_40 = GetKeyState(0x11)
                                                                    
                                                                    if (arg1[1] != 0x59
                                                                            || (0x8000 & eax_40) == 0)
                                                                        int32_t eax_41 = arg1[1]
                                                                        
                                                                        if (eax_41 == 0x2e)
                                                                            result = sub_579e30()
                                                                        else if (eax_41 != 0x53)
                                                                        label_57a9d0:
                                                                            int16_t eax_44
                                                                            char* ecx_12
                                                                            
                                                                            if (arg1[1] == 0x53)
                                                                                eax_44, ecx_12 = GetKeyState(0x11)
                                                                            
                                                                            if (arg1[1] != 0x53
                                                                                    || (0x8000 & eax_44) == 0)
                                                                                int16_t eax_45
                                                                                
                                                                                if (arg1[1] == 0x41)
                                                                                    eax_45 = GetKeyState(0x11)
                                                                                
                                                                                if (arg1[1] != 0x41
                                                                                        || (0x8000 & eax_45) == 0
                                                                                        || data_273bc30 != 0)
                                                                                    int16_t eax_46
                                                                                    
                                                                                    if (arg1[1] == 0x44)
                                                                                        eax_46 = GetKeyState(0x11)
                                                                                    
                                                                                    if (arg1[1] != 0x44
                                                                                            || (0x8000 & eax_46) == 0
                                                                                            || data_273bc30 != 0)
                                                                                        result = arg1[1]
                                                                                        
                                                                                        if (result == 0x27)
                                                                                            bool cond:4_1 = (arg1[2].b & 1) == 0
                                                                                            var_34 = fconvert.s(float.t(1))
                                                                                            float var_30_2 = fconvert.s(float.t(0))
                                                                                            var_2c = var_34
                                                                                            var_28 = var_30_2
                                                                                            
                                                                                            if (cond:4_1)
                                                                                                result = sub_577150(&var_2c)
                                                                                            else
                                                                                                var_2c = fconvert.s(fconvert.t(10f))
                                                                                                var_28 = fconvert.s(fconvert.t(var_28)
                                                                                                    * fconvert.t(10.0))
                                                                                                result = sub_577150(&var_2c)
                                                                                        else if (result == 0x25)
                                                                                            bool cond:5_1 = (arg1[2].b & 1) == 0
                                                                                            var_34 = fconvert.s(fconvert.t(-1f))
                                                                                            var_2c = var_34
                                                                                            var_28 = fconvert.s(float.t(0))
                                                                                            
                                                                                            if (cond:5_1)
                                                                                                result = sub_577150(&var_2c)
                                                                                            else
                                                                                                var_2c = fconvert.s(fconvert.t(-10f))
                                                                                                var_28 = fconvert.s(fconvert.t(var_28)
                                                                                                    * fconvert.t(10.0))
                                                                                                result = sub_577150(&var_2c)
                                                                                        else if (result == 0x26)
                                                                                            var_34 = fconvert.s(float.t(0))
                                                                                            float var_30_4 =
                                                                                                fconvert.s(fconvert.t(-1f))
                                                                                            var_2c = var_34
                                                                                            var_28 = var_30_4
                                                                                        label_57aafc:
                                                                                            
                                                                                            if ((arg1[2].b & 1) == 0)
                                                                                                result = sub_577150(&var_2c)
                                                                                            else
                                                                                                long double x87_r6_4 = fconvert.t(10.0)
                                                                                                var_2c =
                                                                                                    fconvert.s(float.t(0) * x87_r6_4)
                                                                                                var_28 = fconvert.s(x87_r6_4
                                                                                                    * fconvert.t(var_28))
                                                                                                result = sub_577150(&var_2c)
                                                                                        else if (result == 0x28)
                                                                                            var_34 = fconvert.s(float.t(0))
                                                                                            float var_30_5 = fconvert.s(float.t(1))
                                                                                            var_2c = var_34
                                                                                            var_28 = var_30_5
                                                                                            goto label_57aafc
                                                                                    else
                                                                                        data_273bc2c = 0
                                                                                        result = sub_57c6a0()
                                                                                else
                                                                                    result = sub_579fa0()
                                                                            else
                                                                                result = sub_542a90(ecx_12)
                                                                        else
                                                                            if ((0x8000 & GetKeyState(0x11)) == 0)
                                                                                goto label_57a9d0
                                                                            
                                                                            if ((0x8000 & GetKeyState(0x10)) == 0)
                                                                                goto label_57a9d0
                                                                            
                                                                            result = sub_542f30(0x8000)
                                                                    else
                                                                        result = sub_575b30()
                                                                else
                                                                    result = sub_575ac0()
                                                            else
                                                                data_27bc43c = fconvert.s(
                                                                    fconvert.t(data_27bc43c)
                                                                    / fconvert.t(1.2999999523162842))
                                                        else
                                                            data_27bc43c = fconvert.s(
                                                                fconvert.t(data_27bc43c)
                                                                * fconvert.t(1.2999999523162842))
                                                    else
                                                        data_273bc2c = 0
                                                        result = sub_57c6a0()
                                                        data_273bc30.w = 0x100
                                                else
                                                    bool cond:3_1 = data_273bc2c s<= 0
                                                    data_273bc31.b = 0
                                                    
                                                    if (not(cond:3_1))
                                                        data_273bc30 = 1
                                            else
                                                sub_5798d0()
                                                result = sub_5758a0(1)
                                        else
                                            st0_2, result = sub_57a310()
                                    else if (data_273bc2c == 1)
                                        data_273bc31:1.b = 1
                                else
                                    result = sub_57a220()
                            else
                                result = sub_57a2a0()
                        else
                            if ((0x8000 & GetKeyState(0x11)) == 0)
                                goto label_57a812
                            
                            if ((0x8000 & GetKeyState(0x10)) == 0)
                                goto label_57a812
                            
                            result = sub_57a1a0()
                    else
                        if ((0x8000 & GetKeyState(0x11)) == 0)
                            goto label_57a7e0
                        
                        if ((0x8000 & GetKeyState(0x10)) == 0)
                            goto label_57a7e0
                        
                        result = sub_57a1e0()
                else if (data_273bc2c == 1)
                    result = sub_575c20(data_273ac2c)
                    
                    if (*(result + 4) == 2)
                        result = sub_56bbb0(*(result + 0xa0))
            else
                int16_t eax_28 = GetKeyState(0x11)
                int16_t eax_29
                
                if ((0x8000 & eax_28) != 0)
                    eax_29 = GetKeyState(0x10)
                
                if ((0x8000 & eax_28) == 0 || (0x8000 & eax_29) == 0)
                    if (arg1[1] != 9)
                        goto label_57a766
                    
                    if ((0x8000 & GetKeyState(0x11)) == 0)
                        goto label_57a766
                    
                    result = sub_56bb60()
                else
                    result = sub_56bb10()
        else
            data_273bc30 = 0
            data_273bc31 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
