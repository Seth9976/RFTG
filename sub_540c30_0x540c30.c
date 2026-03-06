// 函数名称: sub_540c30
// 虚拟地址: 0x540c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_540c30(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690228
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    HWND hWnd = GetDlgItem(data_3078830, 0xab)
    SendMessageA(hWnd, 0x184, 0, 0)
    int32_t* i = sub_4f4890(arg1)
    int32_t* i_2 = i
    int32_t* i_3 = i_2
    int32_t* i_1 = nullptr
    
    if (i_2[1] s> 0)
        int32_t var_18_1 = 0
        
        do
            char* esi_1 = *(var_18_1 + *i_2 + 8)
            
            if (esi_1 == 0)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* const lParam_2
            char* const lParam_1
            
            if (*esi_1 != 0)
                void* eax_4 = esi_1
                void** edx_2 = eax_4 + 1
                char j
                
                do
                    j = *eax_4
                    eax_4 += 1
                while (j != 0)
                char* const* var_4c_1 = &lParam_2
                sub_4c40c0(eax_4 - edx_2, edx_2)
                lParam_1 = lParam_2
                char* eax_6 = esi_1
                char j_1
                
                do
                    j_1 = *eax_6
                    *(lParam_1 - esi_1 + eax_6) = j_1
                    eax_6 = &eax_6[1]
                while (j_1 != 0)
            else
                lParam_1 = &data_83f3d3
                lParam_2 = &data_83f3d3
            
            int32_t var_8_1 = 0
            void** edx_5 = *i_2
            
            if (*(var_18_1 + edx_5 + 0x30) != 0)
                char* var_1c
                int32_t* var_4c_2 = &var_1c
                sub_4c40c0(1, edx_5)
                void* const eax_8 = &data_860590
                void* edx_7 = var_1c - &data_860590
                char j_2
                
                do
                    j_2 = *eax_8
                    *(edx_7 + eax_8) = j_2
                    eax_8 += 1
                while (j_2 != 0)
                var_8_1.b = 1
                char* var_24
                int32_t* esi_2 = sub_4c48a0(&var_1c, &var_24, &lParam_2)
                var_8_1.b = 2
                char* const lParam_3 = &data_83f3d3
                
                if (lParam_1 != 0)
                    lParam_3 = lParam_1
                
                char* const eax_10 = *esi_2
                
                if (eax_10 == 0)
                    eax_10 = &data_83f3d3
                
                if (lParam_3 != eax_10)
                    if (lParam_1 != 0 && *lParam_1 != 0)
                        void* eax_12 = sub_4c4060(&lParam_2)
                        int32_t temp2_1 = *(eax_12 + 4)
                        *(eax_12 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            int32_t esi_4 = *(eax_12 + 0xc) + 0x10
                            sub_4f4430(eax_12, sub_4f4380(esi_4), esi_4)
                    
                    lParam_1 = *esi_2
                    lParam_2 = lParam_1
                    
                    if (lParam_1 != 0 && *lParam_1 != 0)
                        void* eax_16 = sub_4c4060(&lParam_2)
                        *(eax_16 + 4) += 1
                
                var_8_1.b = 1
                char* eax_17 = var_24
                
                if (eax_17 != 0 && *eax_17 != 0)
                    void* eax_19 = sub_4c4060(&var_24)
                    int32_t temp1_1 = *(eax_19 + 4)
                    *(eax_19 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        int32_t esi_6 = *(eax_19 + 0xc) + 0x10
                        sub_4f4430(eax_19, sub_4f4380(esi_6), esi_6)
                
                var_8_1.b = 0
                char* eax_22 = var_1c
                
                if (eax_22 != 0 && *eax_22 != 0)
                    void* eax_24 = sub_4c4060(&var_1c)
                    int32_t temp5_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        int32_t esi_8 = *(eax_24 + 0xc) + 0x10
                        sub_4f4430(eax_24, sub_4f4380(esi_8), esi_8)
            
            if (*(var_18_1 + *i_3 + 0x31) != 0)
                char* var_20
                int32_t* var_4c_7 = &var_20
                sub_4c40c0(1, i_3)
                void* const eax_28 = &data_88d56c
                void* edx_10 = var_20 - &data_88d56c
                char j_3
                
                do
                    j_3 = *eax_28
                    *(edx_10 + eax_28) = j_3
                    eax_28 += 1
                while (j_3 != 0)
                var_8_1.b = 3
                char* var_28
                int32_t* esi_9 = sub_4c48a0(&var_20, &var_28, &lParam_2)
                var_8_1.b = 4
                char* const lParam_4 = &data_83f3d3
                
                if (lParam_1 != 0)
                    lParam_4 = lParam_1
                
                char* const eax_30 = *esi_9
                
                if (eax_30 == 0)
                    eax_30 = &data_83f3d3
                
                if (lParam_4 != eax_30)
                    if (lParam_1 != 0 && *lParam_1 != 0)
                        void* eax_32 = sub_4c4060(&lParam_2)
                        int32_t temp4_1 = *(eax_32 + 4)
                        *(eax_32 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            int32_t esi_11 = *(eax_32 + 0xc) + 0x10
                            sub_4f4430(eax_32, sub_4f4380(esi_11), esi_11)
                    
                    lParam_1 = *esi_9
                    lParam_2 = lParam_1
                    
                    if (lParam_1 != 0 && *lParam_1 != 0)
                        void* eax_36 = sub_4c4060(&lParam_2)
                        *(eax_36 + 4) += 1
                
                var_8_1.b = 3
                char* eax_37 = var_28
                
                if (eax_37 != 0 && *eax_37 != 0)
                    void* eax_39 = sub_4c4060(&var_28)
                    int32_t temp3_1 = *(eax_39 + 4)
                    *(eax_39 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        int32_t esi_13 = *(eax_39 + 0xc) + 0x10
                        sub_4f4430(eax_39, sub_4f4380(esi_13), esi_13)
                
                var_8_1.b = 0
                char* eax_42 = var_20
                
                if (eax_42 != 0 && *eax_42 != 0)
                    void* eax_44 = sub_4c4060(&var_20)
                    int32_t temp6_1 = *(eax_44 + 4)
                    *(eax_44 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        int32_t esi_15 = *(eax_44 + 0xc) + 0x10
                        sub_4f4430(eax_44, sub_4f4380(esi_15), esi_15)
            
            char* const lParam = &data_83f3d3
            
            if (lParam_1 != 0)
                lParam = lParam_1
            
            SendMessageA(hWnd, 0x180, 0, lParam)
            int32_t var_8_2 = 0xffffffff
            
            if (lParam_1 != 0 && *lParam_1 != 0)
                if (*(lParam_1 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = *(lParam_1 - 0xc)
                *(lParam_1 - 0xc) -= 1
                
                if (temp0_1 == 1)
                    void* edx_11 = data_26a44e4
                    int32_t esi_17 = *(lParam_1 - 4) + 0x10
                    
                    if (edx_11 == 0)
                        sub_4f4250()
                        edx_11 = data_26a44e4
                    
                    int32_t eax_48 = 0
                    int32_t* edi_13
                    
                    while (true)
                        if (esi_17 s<= 1 << (eax_48.b + 4))
                            edi_13 = edx_11 + eax_48 * 0x14
                            break
                        
                        eax_48 += 1
                        
                        if (eax_48 s>= 7)
                            edi_13 = edx_11 + 0x8c
                            break
                    
                    sub_4f4430(&lParam_1[0xfffffff0], edi_13, esi_17)
            
            i_2 = i_3
            var_18_1 += 0x118
            i = i_1 + 1
            i_1 = i
        while (i s< i_2[1])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
