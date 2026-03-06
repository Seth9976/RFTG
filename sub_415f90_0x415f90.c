// 函数名称: sub_415f90
// 虚拟地址: 0x415f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_415f90(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691394
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* arg_8
    void* ebx = *(arg_8 + 0xc) * 0x1f8 + data_27e7a40 + 0xad8
    char* var_18
    sub_4c42b0(&var_18, "OPPONENT")
    int32_t var_8_1 = 0
    sub_4c42b0(&arg_8, &data_83f3d3)
    var_8_1.b = 1
    int32_t ecx_2 = *(ebx + 0x140)
    int32_t eax_4 = 0
    char* var_20
    char* var_1c
    
    if (ecx_2 s> 0)
        void* esi_2 = ebx + 0x30
        
        while (true)
            int32_t edx_1 = *esi_2
            char* var_14
            int32_t esi_7
            
            if (edx_1 == 2)
                int32_t eax_5 = eax_4 * 5
                
                if (ebx + eax_5 * 0x10 == 0xfffffff4)
                    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char* edi_1
                
                if (*(ebx + eax_5 * 0x10 + 0xc) != 0)
                    void* eax_8 = ebx + eax_5 * 0x10 + 0xc
                    void** edx_2 = eax_8 + 1
                    
                    do
                        ecx_2.b = *eax_8
                        eax_8 += 1
                    while (ecx_2.b != 0)
                    
                    char** var_38_1 = &var_14
                    sub_4c40c0(eax_8 - edx_2, edx_2)
                    char* edi_2 = var_14
                    void* eax_10 = ebx + eax_5 * 0x10 + 0xc
                    edi_1 = edi_2
                    char i
                    
                    do
                        i = *eax_10
                        *(edi_2 - (ebx + eax_5 * 0x10 + 0xc) + eax_10) = i
                        eax_10 += 1
                    while (i != 0)
                else
                    edi_1 = &data_83f3d3
                    var_14 = &data_83f3d3
                
                var_8_1.b = 2
                char* eax_11 = &data_83f3d3
                
                if (edi_1 != 0)
                    eax_11 = edi_1
                
                char* var_38_2 = eax_11
                char** eax_12 = sub_4c4a50(&var_1c, "%s forfeited the game.")
                var_8_1.b = 3
                char* ecx_3 = arg_8
                char* edx_5 = &data_83f3d3
                
                if (ecx_3 != 0)
                    edx_5 = ecx_3
                
                char* eax_13 = *eax_12
                
                if (eax_13 == 0)
                    eax_13 = &data_83f3d3
                
                if (edx_5 != eax_13)
                    if (ecx_3 != 0 && *ecx_3 != 0)
                        void* eax_15 = sub_4c4060(&arg_8)
                        int32_t temp3_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            int32_t esi_5 = *(eax_15 + 0xc) + 0x10
                            sub_4f4430(eax_15, sub_4f4380(esi_5), esi_5)
                    
                    char* eax_18 = *eax_12
                    arg_8 = eax_18
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        void* eax_20 = sub_4c4060(&arg_8)
                        *(eax_20 + 4) += 1
                
                var_8_1.b = 2
                char* eax_21 = var_1c
                
                if (eax_21 != 0 && *eax_21 != 0)
                    void* eax_23 = sub_4c4060(&var_1c)
                    int32_t temp2_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        esi_7 = *(eax_23 + 0xc) + 0x10
                        sub_4f4430(eax_23, sub_4f4380(esi_7), esi_7)
            else if (edx_1 == 6)
                void* ebx_2 = ebx + eax_4 * 0x50
                
                if (ebx_2 == 0xfffffff4)
                    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_4c42b0(&var_14, ebx_2 + 0xc)
                var_8_1.b = 4
                int32_t eax_28
                
                if (*(data_27e7a40 + 0x38) == 0)
                    eax_28 = *(data_27e7a54 + 0x10)
                else
                    eax_28 = *(data_27e7a54 + 0x14)
                
                int32_t* eax_31
                
                if (*ebx_2 != eax_28)
                    char* eax_32 = var_14
                    
                    if (eax_32 == 0)
                        eax_32 = &data_83f3d3
                    
                    char* var_38_5 = eax_32
                    var_8_1.b = 6
                    char* var_24
                    sub_4c4510(sub_4c4a50(&var_24, "%s ran out of time."))
                    var_8_1.b = 4
                    char* eax_34 = var_24
                    
                    if (eax_34 != 0 && *eax_34 != 0)
                        eax_31 = &var_24
                        goto label_416265
                else
                    sub_4c4590("GAME")
                    var_8_1.b = 5
                    sub_4c4510(sub_4c4a50(&var_20, "You ran out of time."))
                    var_8_1.b = 4
                    char* eax_30 = var_20
                    
                    if (eax_30 != 0 && *eax_30 != 0)
                        eax_31 = &var_20
                    label_416265:
                        void* eax_35 = sub_4c4060(eax_31)
                        int32_t temp1_1 = *(eax_35 + 4)
                        *(eax_35 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            esi_7 = *(eax_35 + 0xc) + 0x10
                            sub_4f4430(eax_35, sub_4f4380(esi_7), esi_7)
            else
                eax_4 += 1
                esi_2 += 0x50
                
                if (eax_4 s>= ecx_2)
                    break
                
                continue
            var_8_1.b = 1
            char* eax_37 = var_14
            
            if (eax_37 != 0 && *eax_37 != 0)
                void* eax_39 = sub_4c4060(&var_14)
                int32_t temp0_1 = *(eax_39 + 4)
                *(eax_39 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_11 = *(eax_39 + 0xc) + 0x10
                    sub_4f4430(eax_39, sub_4f4380(esi_11), esi_11)
            
            break
    
    int32_t eax_42
    
    if ((data_31654a4 & 1) != 0)
        eax_42 = data_31654a0
    else
        data_31654a4.d |= 1
        var_8_1.b = 7
        eax_42 = sub_4f5220(data_307c1a4, "txtTitlePrefix")
        data_31654a0 = eax_42
        var_8_1.b = 1
    
    char* ecx_10 = var_18
    var_20 = &data_83f3d3
    
    if (ecx_10 != 0)
        var_20 = ecx_10
    
    if (arg1 == 0)
        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
            "DataArray<struct UIState>::DataArrayGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t esi_13 = zx.d(arg1.w)
    
    if (esi_13 u< data_be1cbc)
        int32_t edx_7 = data_be1cb8
        
        if (*(esi_13 * 0x438 + edx_7 + 0x434) == arg1)
            char* ecx_14 = esi_13 * 0x438
            var_1c = ecx_14
            void* edi_10 = &ecx_14[edx_7]
            
            if (eax_42 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int32_t edx_8 = *(edi_10 + (eax_42 << 2) + 0x30)
            int128_t* eax_46
            
            if (edx_8 != 0)
                eax_46 = sub_4fc1e0(ecx_14, edx_8)
            else
                eax_46 = sub_4fc0d0()
                *(eax_46 + 4) = &data_83f3d3
                *(edi_10 + ((eax_42 + 0xc) << 2)) = *(eax_46 + 0x1bc)
            
            char* eax_47 = var_20
            *(eax_46 + 0x64) = *eax_46 + 1
            sub_4c4590(eax_47)
            *(eax_46 + 0x151) = 1
            int32_t eax_49
            
            if ((data_31654a4 & 2) != 0)
                eax_49 = data_316549c
            else
                data_31654a4.d |= 2
                var_8_1.b = 8
                eax_49 = sub_4f5220(data_307c1a4, "txtDescription")
                data_316549c = eax_49
                var_8_1.b = 1
            
            char* ecx_16 = arg_8
            var_20 = &data_83f3d3
            
            if (ecx_16 != 0)
                var_20 = ecx_16
            
            if (esi_13 u< data_be1cbc)
                int32_t ecx_17 = data_be1cb8
                
                if (*(esi_13 * 0x438 + ecx_17 + 0x434) == arg1)
                    void* edi_13 = &var_1c[ecx_17]
                    
                    if (eax_49 s>= 0x100)
                        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                            "UIStateElementGet")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_4c5a30()
                            noreturn
                        
                        breakpoint
                    
                    int32_t edx_12 = *(edi_13 + (eax_49 << 2) + 0x30)
                    int128_t* eax_52
                    
                    if (edx_12 != 0)
                        eax_52 = sub_4fc1e0(ecx_17, edx_12)
                    else
                        eax_52 = sub_4fc0d0()
                        *(eax_52 + 4) = &data_83f3d3
                        *(edi_13 + ((eax_49 + 0xc) << 2)) = *(eax_52 + 0x1bc)
                    
                    int32_t* edi_14 = eax_52
                    edi_14[0x19] = *edi_14 + 1
                    sub_4c4590(var_20)
                    var_8_1.b = 0
                    char* eax_56 = arg_8
                    *(edi_14 + 0x151) = 1
                    
                    if (eax_56 != 0 && *eax_56 != 0)
                        if (*(eax_56 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t temp4_1 = *(eax_56 - 0xc)
                        *(eax_56 - 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            void* edi_15 = data_26a44e4
                            int32_t ebx_9 = *(eax_56 - 4) + 0x10
                            
                            if (edi_15 == 0)
                                sub_4f4250()
                                edi_15 = data_26a44e4
                            
                            int32_t edx_13 = 0
                            
                            while (true)
                                if (ebx_9 s<= 1 << (edx_13.b + 4))
                                    edi_14 = edi_15 + edx_13 * 0x14
                                    break
                                
                                edx_13 += 1
                                
                                if (edx_13 s>= 7)
                                    edi_14 = edi_15 + 0x8c
                                    break
                            
                            sub_4f4430(&eax_56[0xfffffff0], edi_14, ebx_9)
                    
                    int32_t result = 0xffffffff
                    int32_t var_8_2 = 0xffffffff
                    char* ebx_10 = var_18
                    
                    if (ebx_10 != 0 && *ebx_10 != 0)
                        if (*(ebx_10 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t temp5_1 = *(ebx_10 - 0xc)
                        *(ebx_10 - 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            void* edx_14 = data_26a44e4
                            int32_t esi_18 = *(ebx_10 - 4) + 0x10
                            
                            if (edx_14 == 0)
                                sub_4f4250()
                                edx_14 = data_26a44e4
                            
                            int32_t eax_61 = 0
                            int32_t* edi_18
                            
                            while (true)
                                if (esi_18 s<= 1 << (eax_61.b + 4))
                                    edi_18 = edx_14 + eax_61 * 0x14
                                    break
                                
                                eax_61 += 1
                                
                                if (eax_61 s>= 7)
                                    edi_18 = edx_14 + 0x8c
                                    break
                            
                            result = sub_4f4430(&ebx_10[0xfffffff0], edi_18, esi_18)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
            
            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
                0x46, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x46, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
