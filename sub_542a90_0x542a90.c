// 函数名称: sub_542a90
// 虚拟地址: 0x542a90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_542a90(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fa68
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = data_3079208
    int32_t* var_28 = edi
    char* hWnd_7
    
    if (edi == 0)
        hWnd_7 = *4
    
    if (edi != 0 || hWnd_7 == 0x19 || hWnd_7 == 0x1b)
        enum MESSAGEBOX_STYLE hWnd_11 = edi[1]
        char* hWnd_2 = arg1
        char* hWnd_4 = edi[8]
        int32_t* var_24_1 = &hWnd_2
        hWnd_2 = hWnd_4
        
        if (hWnd_4 != 0 && *hWnd_4 != 0)
            void* eax_5 = sub_4c4060(&hWnd_2)
            *(eax_5 + 4) += 1
        
        char* hWnd_6
        sub_51f6d0(&hWnd_6, hWnd_2)
        int32_t var_8_1 = 0
        char* const hWnd_3 = hWnd_6
        
        if (hWnd_3 == 0)
            hWnd_3 = &data_83f3d3
        
        hWnd_11 = &data_87b8d0
        hWnd_2 = hWnd_3
        int32_t* hWnd_14 = sub_5a898b(hWnd_2, hWnd_11)
        enum MESSAGEBOX_STYLE hWnd_12
        char* hWnd_28
        
        if (hWnd_14 != 0)
            hWnd_11 = hWnd_14
            enum MESSAGEBOX_STYLE hWnd_16 = sub_5a8c61(hWnd_11)
            int32_t* ebx_1 = *edi
            enum MESSAGEBOX_STYLE hWnd_15 = ebx_1[1]
            
            if (hWnd_15 != MB_OK)
                hWnd_11 = hWnd_15
                hWnd_16 = sub_500770(hWnd_11)
            
            sub_51c990(&hWnd_28)
            hWnd_11 = hWnd_16
            var_8_1.b = 1
            enum MESSAGEBOX_STYLE hWnd_17 = edi[8]
            enum MESSAGEBOX_STYLE* var_24_2 = &hWnd_11
            hWnd_11 = hWnd_17
            
            if (hWnd_17 != MB_OK && *hWnd_17 != 0)
                void* eax_17 = sub_4c4060(&hWnd_11)
                *(eax_17 + 4) += 1
            
            enum MESSAGEBOX_STYLE hWnd_13
            hWnd_2 = &hWnd_13
            sub_51fd90(hWnd_2)
            var_8_1.b = 2
            hWnd_11 = hWnd_13
            char* hWnd_32 = hWnd_13
            enum MESSAGEBOX_STYLE* var_24_3 = &hWnd_11
            
            if (hWnd_32 != 0 && *hWnd_32 != 0)
                void* eax_19 = sub_4c4060(&hWnd_11)
                *(eax_19 + 4) += 1
            
            sub_51c9c0()
            int32_t* eax_20 = ebx_1[3]
            void* edi_5 = data_30785c8
            enum MESSAGEBOX_STYLE hWnd_33 = *ebx_1
            *(edi_5 + 0x1c) += 1
            hWnd_12 = hWnd_33
            
            if (*(edi_5 + 0x10) == 0)
                sub_504460(edi_5 + 0x10)
            
            int32_t* hWnd_5 = *(edi_5 + 0x10)
            int32_t edx_2 = *hWnd_5
            *(edi_5 + 0x10) = edx_2
            __builtin_memset(hWnd_5, 0, 0x14)
            
            if (hWnd_5 != 0)
                *hWnd_5 = &data_83f3d3
                hWnd_5[1] = 0
                hWnd_5[2] = 0
                hWnd_5[3] = 0
            
            hWnd_11 = hWnd_12
            hWnd_2 = hWnd_5
            sub_504160(eax_20, edx_2, nullptr, hWnd_2, hWnd_11)
            ebx_1[1] = hWnd_5
            char* hWnd_18 = hWnd_28
            enum MESSAGEBOX_STYLE* var_24_5 = &hWnd_11
            hWnd_11 = hWnd_18
            
            if (hWnd_18 != 0 && *hWnd_18 != 0)
                void* eax_24 = sub_4c4060(&hWnd_11)
                *(eax_24 + 4) += 1
            
            sub_51c9c0()
            
            if (sub_509bf0(var_28) != 0)
                var_8_1.b = 1
                enum MESSAGEBOX_STYLE hWnd_31 = hWnd_13
                data_307885c = 0
                
                if (hWnd_31 != MB_OK && *hWnd_31 != 0)
                    void* eax_46 = sub_4c4060(&hWnd_13)
                    int32_t temp2_1 = *(eax_46 + 4)
                    *(eax_46 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        enum MESSAGEBOX_STYLE hWnd_25 = *(eax_46 + 0xc) + 0x10
                        int32_t* eax_47 = sub_4f4380(hWnd_25)
                        hWnd_11 = hWnd_25
                        sub_4f4430(eax_46, eax_47, hWnd_11)
                
                var_8_1.b = 0
                
                if (hWnd_18 != 0 && *hWnd_18 != 0)
                    void* eax_50 = sub_4c4060(&hWnd_28)
                    int32_t temp3_1 = *(eax_50 + 4)
                    *(eax_50 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        enum MESSAGEBOX_STYLE hWnd_26 = *(eax_50 + 0xc) + 0x10
                        int32_t* eax_51 = sub_4f4380(hWnd_26)
                        hWnd_11 = hWnd_26
                        sub_4f4430(eax_50, eax_51, hWnd_11)
                
                int32_t var_8_4 = 0xffffffff
                char* hWnd_10 = hWnd_6
                
                if (hWnd_10 != 0 && *hWnd_10 != 0)
                    hWnd_10 = sub_4c4060(&hWnd_6)
                    int32_t temp4_1 = *(hWnd_10 + 4)
                    *(hWnd_10 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        enum MESSAGEBOX_STYLE hWnd_27 = *(hWnd_10 + 0xc) + 0x10
                        int32_t* eax_54 = sub_4f4380(hWnd_27)
                        hWnd_11 = hWnd_27
                        sub_4f4430(hWnd_10, eax_54, hWnd_11)
                
                hWnd_10.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return hWnd_10
            
            char* hWnd_9 = hWnd_6
            
            if (hWnd_9 == 0)
                hWnd_9 = &data_83f3d3
            
            hWnd_11 = hWnd_9
            hWnd_2 = "Failed to save '%s'."
            char* lpText_3 = *sub_4c4a50(&hWnd_12, hWnd_2)
            char* lpText_1 = &data_83f3d3
            
            if (lpText_3 != 0)
                lpText_1 = lpText_3
            
            HWND hWnd_1 = GetForegroundWindow()
            hWnd_11 = &var_28
            hWnd_2 = hWnd_1
            GetWindowThreadProcessId(hWnd_2, hWnd_11)
            uint32_t eax_28 = GetCurrentProcessId()
            
            if (var_28 != eax_28)
                hWnd_1 = nullptr
            
            hWnd_11 = MB_OK
            hWnd_2 = "Can't save"
            MessageBoxA(hWnd_1, lpText_1, hWnd_2, hWnd_11)
            enum MESSAGEBOX_STYLE hWnd_29 = hWnd_12
            
            if (hWnd_29 != MB_OK && *hWnd_29 != 0)
                void* eax_30 = sub_4c4060(&hWnd_12)
                int32_t temp5_1 = *(eax_30 + 4)
                *(eax_30 + 4) -= 1
                
                if (temp5_1 == 1)
                    enum MESSAGEBOX_STYLE hWnd_21 = *(eax_30 + 0xc) + 0x10
                    int32_t* eax_31 = sub_4f4380(hWnd_21)
                    hWnd_11 = hWnd_21
                    sub_4f4430(eax_30, eax_31, hWnd_11)
            
            var_8_1.b = 1
            enum MESSAGEBOX_STYLE hWnd_30 = hWnd_13
            
            if (hWnd_30 != MB_OK && *hWnd_30 != 0)
                void* eax_34 = sub_4c4060(&hWnd_13)
                int32_t temp6_1 = *(eax_34 + 4)
                *(eax_34 + 4) -= 1
                
                if (temp6_1 == 1)
                    enum MESSAGEBOX_STYLE hWnd_22 = *(eax_34 + 0xc) + 0x10
                    int32_t* eax_35 = sub_4f4380(hWnd_22)
                    hWnd_11 = hWnd_22
                    sub_4f4430(eax_34, eax_35, hWnd_11)
            
            var_8_1.b = 0
            
            if (hWnd_18 != 0 && *hWnd_18 != 0)
                void* eax_38 = sub_4c4060(&hWnd_28)
                int32_t temp7_1 = *(eax_38 + 4)
                *(eax_38 + 4) -= 1
                
                if (temp7_1 == 1)
                    enum MESSAGEBOX_STYLE hWnd_23 = *(eax_38 + 0xc) + 0x10
                    int32_t* eax_39 = sub_4f4380(hWnd_23)
                    hWnd_11 = hWnd_23
                    sub_4f4430(eax_38, eax_39, hWnd_11)
            
            int32_t var_8_3 = 0xffffffff
            hWnd_7 = hWnd_6
            
            if (hWnd_7 != 0 && *hWnd_7 != 0)
                hWnd_7 = sub_4c4060(&hWnd_6)
                int32_t temp8_1 = *(hWnd_7 + 4)
                *(hWnd_7 + 4) -= 1
                
                if (temp8_1 == 1)
                    enum MESSAGEBOX_STYLE hWnd_24 = *(hWnd_7 + 0xc) + 0x10
                    int32_t* eax_42 = sub_4f4380(hWnd_24)
                    hWnd_11 = hWnd_24
                    sub_4f4430(hWnd_7, eax_42, hWnd_11)
                    int32_t eax_44
                    eax_44.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_44
        else
            char* const hWnd_8 = hWnd_6
            
            if (hWnd_8 == 0)
                hWnd_8 = &data_83f3d3
            
            hWnd_11 = hWnd_8
            hWnd_2 = "Can't open '%s' for saving."
            char* lpText_2 = *sub_4c4a50(&hWnd_28, hWnd_2)
            char* lpText = &data_83f3d3
            
            if (lpText_2 != 0)
                lpText = lpText_2
            
            HWND hWnd = GetForegroundWindow()
            hWnd_11 = &hWnd_12
            hWnd_2 = hWnd
            GetWindowThreadProcessId(hWnd_2, hWnd_11)
            uint32_t eax_8 = GetCurrentProcessId()
            
            if (hWnd_12 != eax_8)
                hWnd = nullptr
            
            hWnd_11 = MB_OK
            hWnd_2 = "Can't save"
            MessageBoxA(hWnd, lpText, hWnd_2, hWnd_11)
            char* hWnd_34 = hWnd_28
            
            if (hWnd_34 != 0 && *hWnd_34 != 0)
                void* eax_10 = sub_4c4060(&hWnd_28)
                int32_t temp0_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp0_1 == 1)
                    enum MESSAGEBOX_STYLE hWnd_19 = *(eax_10 + 0xc) + 0x10
                    int32_t* eax_11 = sub_4f4380(hWnd_19)
                    hWnd_11 = hWnd_19
                    sub_4f4430(eax_10, eax_11, hWnd_11)
            
            int32_t var_8_2 = 0xffffffff
            hWnd_7 = hWnd_6
            
            if (hWnd_7 != 0 && *hWnd_7 != 0)
                hWnd_7 = sub_4c4060(&hWnd_6)
                int32_t temp1_1 = *(hWnd_7 + 4)
                *(hWnd_7 + 4) -= 1
                
                if (temp1_1 == 1)
                    enum MESSAGEBOX_STYLE hWnd_20 = *(hWnd_7 + 0xc) + 0x10
                    int32_t* eax_14 = sub_4f4380(hWnd_20)
                    hWnd_11 = hWnd_20
                    sub_4f4430(hWnd_7, eax_14, hWnd_11)
    
    hWnd_7.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return hWnd_7
}
