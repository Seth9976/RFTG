// 函数名称: sub_53f7c0
// 虚拟地址: 0x53f7c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53f7c0(HWND arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_691978
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = arg2
    LRESULT result = SendMessageA(arg1, 0x199, *(edi + 0xc), 0)
    LRESULT lParam = result
    
    if (*(edi + 0xc) != 0xffffffff && data_26a7764 != 0)
        int32_t ebx_1 = data_26a6764
        int32_t edx_1
        result, edx_1 = sub_50c140(data_26a6760)
        int32_t ebx_2 = ebx_1 * 0xb8
        int32_t* ebx_3 = ebx_2 + *result
        
        if (ebx_2 != neg.d(*result))
            char* const var_20 = &data_83f3d3
            int32_t var_c_1 = 0
            int32_t eax_4 = *(edi + 0xc)
            
            if (eax_4 u> 5)
                void* var_38_11
                
                switch (*ebx_3 - 1)
                    case 0
                        if (eax_4 != 6)
                            sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0x100a, 
                                "OnFabPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                    label_53fa1b:
                        var_38_11 = &ebx_3[0xe]
                        sub_53f1a0(&var_20, *(lParam + 0x10) + 4)
                    case 1
                        if (eax_4 != 6)
                            sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0x1000, 
                                "OnFabPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        var_38_11 = &ebx_3[0x1d]
                        sub_53f1a0(&var_20, *(lParam + 0x10) + 4)
                    case 2
                        if (eax_4 == 6)
                            var_38_11 = &ebx_3[0x16]
                            sub_53f1a0(&var_20, *(lParam + 0x10) + 4)
                        else
                            int32_t edi_1
                            
                            if (eax_4 == 7)
                                edi_1 = 0x5c
                            else
                                if (eax_4 != 8)
                                    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0xff6, 
                                        "OnFabPropGridChange")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                edi_1 = 0x70
                            
                            int32_t* eax_14
                            int32_t edx_8
                            eax_14, edx_8 = sub_4fff30(data_30d7480, edi_1)
                            sub_53e8a0(eax_14, edx_8, &var_20, lParam + 0x10)
                            edi = arg2
                    case 4
                        if (eax_4 == 6)
                            if (ebx_3[0x25] s<= 0)
                                sub_4c5870("el.numSubFabs > 0", &data_83f3d3, 
                                    "Windows\EditorWindow.cpp", 0x1012, "OnFabPropGridChange")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t var_38_9 = ebx_3[0x24]
                            sub_53f1a0(&var_20, *(lParam + 0x10) + 4)
                        else
                            if (eax_4 != 7)
                                sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0x1019, 
                                    "OnFabPropGridChange")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            sub_53eb60(eax_4 - 7, lParam + 0x10, &ebx_3[0x1f], &var_20)
                    case 5
                        if (eax_4 == 7)
                            sub_53f400(eax_4 - 7, edx_1, &var_20, &ebx_3[0x2a], lParam + 0x10)
                        else
                            if (eax_4 != 8)
                                if (eax_4 == 9)
                                    goto label_53fa1b
                                
                                sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0x102a, 
                                    "OnFabPropGridChange")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            sub_53f4e0(&ebx_3[0x27], lParam + 0x10)
                    case 7
                        if (eax_4 != 6)
                            sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0x1034, 
                                "OnFabPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        var_38_11 = &ebx_3[0x2c]
                        sub_53f1a0(&var_20, *(lParam + 0x10) + 4)
                    default
                        sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0x1038, 
                            "OnFabPropGridChange")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                
                goto label_53fb77
            
            switch (eax_4)
                case 0
                    eax_4.b = *(lParam + 0x10) != 0
                    ebx_3[0xc].b = eax_4.b
                label_53fb77:
                    int32_t var_40_3 = 0x19a
                    SendMessageA(arg1, 0x19a, *(edi + 0xc), lParam)
                case 1
                    int32_t* eax_6
                    int32_t edx_2
                    eax_6, edx_2 = sub_4fff30(data_30d7480, 4)
                    sub_53e8a0(eax_6, edx_2, &var_20, lParam + 0x10)
                    int32_t var_40_1 = 0x19a
                    SendMessageA(arg1, 0x19a, *(arg2 + 0xc), lParam)
                case 2
                    sub_53eda0(ebx_3, lParam + 0x10, &var_20)
                    sub_541330()
                case 3
                    ___std_fs_change_permissions@12(eax_4, lParam + 0x10, &ebx_3[2], &var_20)
                    goto label_53fb77
                case 4
                    ___std_fs_change_permissions@12(&var_20, lParam + 0x10, &ebx_3[5], &var_20)
                    goto label_53fb77
                case 5
                    ___std_fs_change_permissions@12(eax_4, lParam + 0x10, &ebx_3[8], &var_20)
                    goto label_53fb77
            
            int32_t var_c_2 = 0xffffffff
            result = sub_4c43d0(&var_20)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
