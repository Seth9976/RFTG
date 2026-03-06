// 函数名称: sub_53fbf0
// 虚拟地址: 0x53fbf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53fbf0(HWND arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    LRESULT result = SendMessageA(arg1, 0x199, *(arg2 + 0xc), 0)
    LRESULT lParam = result
    
    if (*(arg2 + 0xc) != 0xffffffff)
        result = sub_4f4890(data_3079208)
        int32_t* esi_2 = data_273ac20
        LRESULT result_1 = result
        
        if (esi_2 != 0)
            result = sub_4f4890(esi_2)
            
            if (*(result + 4) != 0)
                if (data_273bc2c != 0)
                    result = sub_575bb0(data_273ac2c)
                    
                    if (result != 0xffffffff)
                        goto label_53fc8e
                else
                    result = 0
                label_53fc8e:
                    void* eax_5 = result * 0x118 + *result_1
                    char* const var_14 = &data_83f3d3
                    int32_t var_8_1 = 0
                    int32_t eax_6 = *(arg2 + 0xc)
                    void* edx_1
                    
                    if (eax_6 - 1 u> 3)
                        void* var_30_22
                        int32_t eax_20
                        int32_t* eax_22
                        int32_t edx_6
                        
                        switch (*(eax_5 + 4) - 1)
                            case 0, 3
                                if (eax_6 == 5)
                                label_540072:
                                    var_30_22 = eax_5 + 0x68
                                    sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                                else if (eax_6 == 6)
                                    edx_1.b = *(lParam + 0x10) != 0
                                    *(eax_5 + 0x6c) = edx_1.b
                                else
                                    if (eax_6 != 7)
                                        sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 
                                            0x10ec, "OnUIPropGridChange")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    sub_53f750(*(lParam + 0x10), eax_5 + 0x70)
                            case 1
                                if (eax_6 - 5 u> 6)
                                    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 
                                        0x1109, "OnUIPropGridChange")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                switch (eax_6)
                                    case 5
                                        var_30_22 = eax_5 + 0xa0
                                        sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                                    case 6
                                        sub_53f320(eax_6 - 5, arg2, &var_14, eax_5 + 0x88, 
                                            lParam + 0x10)
                                    case 7
                                        sub_53f320(eax_6 - 5, arg2, &var_14, eax_5 + 0x8c, 
                                            lParam + 0x10)
                                    case 8
                                        sub_53f400(eax_6 - 5, arg2, &var_14, eax_5 + 0x90, 
                                            lParam + 0x10)
                                    case 9
                                        sub_53f400(eax_6 - 5, arg2, &var_14, eax_5 + 0x94, 
                                            lParam + 0x10)
                                    case 0xa
                                        int32_t eax_18
                                        eax_18.b = *(lParam + 0x10) != 0
                                        int32_t ecx_9
                                        ecx_9.b = eax_18.b == 0
                                        *(eax_5 + 0xad) = ecx_9.b
                                    case 0xb
                                        edx_1.b = *(lParam + 0x10) != 0
                                        *(eax_5 + 0xae) = edx_1.b
                            case 2
                                eax_20 = eax_6 - 5
                                
                                if (eax_20 u> 7)
                                    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 
                                        0x1129, "OnUIPropGridChange")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                switch (eax_20)
                                    case 0
                                        eax_22, edx_6 = sub_4fff30(data_30d7444, 0xb0)
                                        sub_53e8a0(eax_22, edx_6, &var_14, lParam + 0x10)
                                    case 1
                                    label_53ffeb:
                                        var_30_22 = eax_5 + 0xb4
                                        sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                                    case 2
                                        sub_53f530(eax_5 + 0xb8, lParam + 0x10)
                                    case 3
                                        sub_53f530(eax_5 + 0xbc, lParam + 0x10)
                                    case 4
                                        sub_53f400(eax_20, arg2, &var_14, eax_5 + 0xc0, lParam + 0x10)
                                    case 5
                                        sub_53f680(*(lParam + 0x10))
                                    case 6
                                        sub_53f6f0(*(lParam + 0x10))
                                    case 7
                                        edx_1.b = *(lParam + 0x10) != 0
                                        *(eax_5 + 0xc8) = edx_1.b
                            case 4
                                eax_20 = eax_6 - 5
                                
                                if (eax_20 u> 0x11)
                                    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 
                                        0x1167, "OnUIPropGridChange")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                switch (eax_20)
                                    case 0
                                        goto label_540072
                                    case 1
                                        var_30_22 = eax_5 + 0xe0
                                        sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                                    case 2
                                        var_30_22 = eax_5 + 0xe4
                                        sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                                    case 3
                                        var_30_22 = eax_5 + 0xe8
                                        sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                                    case 4
                                        edx_1.b = *(lParam + 0x10) != 0
                                        *(eax_5 + 0x6c) = edx_1.b
                                    case 5
                                        eax_22, edx_6 = sub_4fff30(data_30d7444, 0xdc)
                                        sub_53e8a0(eax_22, edx_6, &var_14, lParam + 0x10)
                                    case 6
                                        goto label_53ffeb
                                    case 7
                                        sub_53f530(eax_5 + 0xb8, lParam + 0x10)
                                    case 8
                                        sub_53f530(eax_5 + 0xbc, lParam + 0x10)
                                    case 9
                                        sub_53f530(eax_5 + 0xec, lParam + 0x10)
                                    case 0xa
                                        sub_53f530(eax_5 + 0xf0, lParam + 0x10)
                                    case 0xb
                                        sub_53f400(eax_20, arg2, &var_14, eax_5 + 0xc0, lParam + 0x10)
                                    case 0xc
                                        sub_53ea80(eax_20, eax_5 + 0xf4, &var_14, lParam + 0x10)
                                    case 0xd
                                        sub_53f680(*(lParam + 0x10))
                                    case 0xe
                                        sub_53f6f0(*(lParam + 0x10))
                                    case 0xf
                                        var_30_22 = eax_5 + 0xfc
                                        sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                                    case 0x10
                                        var_30_22 = eax_5 + 0x100
                                        sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                                    case 0x11
                                        var_30_22 = eax_5 + 0x104
                                        sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                            case 5
                                if (eax_6 - 5 u> 6)
                                    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 
                                        0x10db, "OnUIPropGridChange")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                switch (eax_6)
                                    case 5
                                        sub_53f320(eax_6 - 5, arg2, &var_14, eax_5 + 0x48, 
                                            lParam + 0x10)
                                    case 6
                                        sub_53f320(eax_6 - 5, arg2, &var_14, eax_5 + 0x4c, 
                                            lParam + 0x10)
                                    case 7
                                        sub_53f320(eax_6 - 5, arg2, &var_14, eax_5 + 0x50, 
                                            lParam + 0x10)
                                    case 8
                                        sub_53f400(eax_6 - 5, arg2, &var_14, eax_5 + 0x54, 
                                            lParam + 0x10)
                                    case 9
                                        sub_53f400(eax_6 - 5, arg2, &var_14, eax_5 + 0x58, 
                                            lParam + 0x10)
                                    case 0xa
                                        sub_53ea80(eax_6 - 5, eax_5 + 0x5c, &var_14, lParam + 0x10)
                                    case 0xb
                                        sub_53f070(eax_5 + 0x64, lParam + 0x10, &var_14)
                            case 7
                                if (eax_6 != 5)
                                    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 
                                        0x10bf, "OnUIPropGridChange")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                var_30_22 = eax_5 + 0x44
                                sub_53f1a0(&var_14, *(lParam + 0x10) + 4)
                            default
                                sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0x116b, 
                                    "OnUIPropGridChange")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                        
                        SendMessageA(arg1, 0x19a, *(arg2 + 0xc), lParam)
                        sub_5758a0(1)
                    else
                        switch (eax_6)
                            case 1
                                edx_1.b = *(lParam + 0x10) != 0
                                *(eax_5 + 0x30) = edx_1.b
                                SendMessageA(arg1, 0x19a, *(arg2 + 0xc), lParam)
                                sub_5758a0(1)
                            case 2
                                int32_t* eax_8
                                int32_t edx_2
                                eax_8, edx_2 = sub_4fff30(data_30d7444, 8)
                                sub_53e8a0(eax_8, edx_2, &var_14, lParam + 0x10)
                                SendMessageA(arg1, 0x19a, *(arg2 + 0xc), lParam)
                                sub_5758a0(1)
                                sub_57c750()
                            case 3
                                sub_53eed0(eax_5 + 4, lParam + 0x10, &var_14)
                                sub_5758a0(1)
                                sub_541ab0()
                            case 4
                                sub_53e990(eax_6, lParam + 0x10, eax_5 + 0xc, &var_14)
                                SendMessageA(arg1, 0x19a, *(arg2 + 0xc), lParam)
                                sub_5758a0(1)
                    int32_t var_8_2 = 0xffffffff
                    result = sub_4c43d0(&var_14)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
