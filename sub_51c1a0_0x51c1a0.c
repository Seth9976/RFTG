// 函数名称: sub_51c1a0
// 虚拟地址: 0x51c1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_51c1a0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d658
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_13c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* const lpFileName
    
    if (data_8bc5ff != 0)
        lpFileName = &data_87dcec
        
        if (GetFileAttributesA(lpFileName) == 0xffffffff)
            lpFileName = "../res"
            
            if (GetFileAttributesA(lpFileName) == 0xffffffff)
                lpFileName = "../../res"
                
                if (GetFileAttributesA(lpFileName) == 0xffffffff)
                    lpFileName = "../../../res"
                    
                    if (GetFileAttributesA(lpFileName) == 0xffffffff)
                        lpFileName = "../../../../res"
                        
                        if (GetFileAttributesA(lpFileName) == 0xffffffff)
                            lpFileName = "../../../../../res"
                            
                            if (GetFileAttributesA(lpFileName) == 0xffffffff)
                                lpFileName = "../../../../../../res"
                                
                                if (GetFileAttributesA(lpFileName) == 0xffffffff)
                                    lpFileName = 0x104
                                    void var_11c
                                    char* var_148_1 = sub_5aa773(&var_11c, lpFileName)
                                    sub_4c5680("Can't find res directory %s\n")
                                else
                                    lpFileName = "../../../../../.."
                                    sub_5aa4cc(lpFileName)
                            else
                                lpFileName = "../../../../.."
                                sub_5aa4cc(lpFileName)
                        else
                            lpFileName = "../../../.."
                            sub_5aa4cc(lpFileName)
                    else
                        lpFileName = "../../.."
                        sub_5aa4cc(lpFileName)
                else
                    lpFileName = "../.."
                    sub_5aa4cc(lpFileName)
            else
                lpFileName = &data_88bb58
                sub_5aa4cc(lpFileName)
    
    lpFileName = 0x104
    char* eax_11
    int32_t edx
    eax_11, edx = sub_5aa773(&data_30785f8, lpFileName)
    
    if (eax_11 == 0)
        lpFileName = "AppSetWorkingDirectory"
        sub_4c5870("result", &data_83f3d3, "AssetSource.cpp", 0x1e8, lpFileName)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* result
    
    if (data_8bc5ff == 0)
        result = nullptr
        char i
        
        do
            i = *(result + &data_30785f8)
            result[0xc1e1c0].b = i
            result += 1
        while (i != 0)
    else
        char* lpFileName_10
        int32_t edx_1 = sub_4c4330(&data_30785f8, edx, &lpFileName_10)
        int32_t var_8_1 = 0
        char* lpFileName_9 = lpFileName_10
        char* lpFileName_11 = lpFileName_9
        
        if (lpFileName_9 != 0 && *lpFileName_9 != 0)
            void* eax_14 = sub_4c4060(&lpFileName_11)
            *(eax_14 + 4) += 1
        
        var_8_1.b = 1
        void var_120
        sub_4c4330("/sys", edx_1, &var_120)
        lpFileName = &var_120
        var_8_1.b = 2
        void* const* var_124
        char* const lpFileName_1 = *sub_4c48a0(&lpFileName_11, &var_124, lpFileName)
        
        if (lpFileName_1 == 0)
            lpFileName_1 = &data_83f3d3
        
        lpFileName = lpFileName_1
        uint32_t eax_16
        eax_16.b = GetFileAttributesA(lpFileName) != 0xffffffff
        int32_t ebx
        ebx.b = eax_16.b == 0
        sub_4c43d0(&var_124)
        var_8_1.b = 1
        void* lpFileName_8 = sub_4c43d0(&var_120)
        
        if (ebx.b != 0)
            lpFileName = lpFileName_8
            var_124 = &lpFileName
            lpFileName = lpFileName_9
            
            if (lpFileName_9 != 0 && *lpFileName_9 != 0)
                void* eax_18 = sub_4c4060(&lpFileName)
                *(eax_18 + 4) += 1
            
            lpFileName = sub_51fed0(&var_124)
            var_8_1.b = 3
            sub_4c4510(lpFileName)
            var_8_1.b = 1
            sub_4c4330("Engine", sub_4c43d0(&var_124), &var_120)
            lpFileName = &var_120
            var_8_1.b = 4
            lpFileName = sub_4c48a0(&lpFileName_10, &var_124, lpFileName)
            var_8_1.b = 5
            sub_4c4510(lpFileName)
            var_8_1.b = 4
            sub_4c43d0(&var_124)
            var_8_1.b = 1
            sub_4c4330("/sys", sub_4c43d0(&var_120), &var_120)
            lpFileName = &var_120
            var_8_1.b = 6
            char* const lpFileName_2 = *sub_4c48a0(&lpFileName_11, &var_124, lpFileName)
            
            if (lpFileName_2 == 0)
                lpFileName_2 = &data_83f3d3
            
            lpFileName = lpFileName_2
            uint32_t eax_22
            eax_22.b = GetFileAttributesA(lpFileName) != 0xffffffff
            sub_4c43d0(&var_124)
            var_8_1.b = 1
            int32_t edx_4
            lpFileName_8, edx_4 = sub_4c43d0(&var_120)
            
            if (eax_22.b == 0)
                sub_4c4330("trunk/Engine", edx_4, &var_120)
                lpFileName = &var_120
                var_8_1.b = 7
                lpFileName = sub_4c48a0(&lpFileName_10, &var_124, lpFileName)
                var_8_1.b = 8
                sub_4c4510(lpFileName)
                var_8_1.b = 7
                sub_4c43d0(&var_124)
                var_8_1.b = 1
                sub_4c4330("/sys", sub_4c43d0(&var_120), &var_120)
                lpFileName = &var_120
                var_8_1.b = 9
                char* const lpFileName_3 = *sub_4c48a0(&lpFileName_11, &var_124, lpFileName)
                
                if (lpFileName_3 == 0)
                    lpFileName_3 = &data_83f3d3
                
                lpFileName = lpFileName_3
                uint32_t eax_25
                eax_25.b = GetFileAttributesA(lpFileName) != 0xffffffff
                sub_4c43d0(&var_124)
                var_8_1.b = 1
                lpFileName_8 = sub_4c43d0(&var_120)
                
                if (eax_25.b == 0)
                    lpFileName = lpFileName_8
                    var_124 = &lpFileName
                    sub_4c4300(&lpFileName, &lpFileName_10)
                    lpFileName = sub_51fed0(&var_124)
                    var_8_1.b = 0xa
                    sub_4c4510(lpFileName)
                    var_8_1.b = 1
                    sub_4c4330("Engine", sub_4c43d0(&var_124), &var_120)
                    lpFileName = &var_120
                    var_8_1.b = 0xb
                    lpFileName = sub_4c48a0(&lpFileName_10, &var_124, lpFileName)
                    var_8_1.b = 0xc
                    sub_4c4510(lpFileName)
                    var_8_1.b = 0xb
                    sub_4c43d0(&var_124)
                    var_8_1.b = 1
                    sub_4c4330("/sys", sub_4c43d0(&var_120), &var_120)
                    lpFileName = &var_120
                    var_8_1.b = 0xd
                    char* const lpFileName_4 = *sub_4c48a0(&lpFileName_11, &var_124, lpFileName)
                    
                    if (lpFileName_4 == 0)
                        lpFileName_4 = &data_83f3d3
                    
                    lpFileName = lpFileName_4
                    uint32_t eax_29
                    eax_29.b = GetFileAttributesA(lpFileName) != 0xffffffff
                    sub_4c43d0(&var_124)
                    var_8_1.b = 1
                    int32_t edx_8
                    lpFileName_8, edx_8 = sub_4c43d0(&var_120)
                    
                    if (eax_29.b == 0)
                        sub_4c4330("trunk/Engine", edx_8, &var_120)
                        lpFileName = &var_120
                        var_8_1.b = 0xe
                        lpFileName = sub_4c48a0(&lpFileName_10, &var_124, lpFileName)
                        var_8_1.b = 0xf
                        sub_4c4510(lpFileName)
                        var_8_1.b = 0xe
                        sub_4c43d0(&var_124)
                        var_8_1.b = 1
                        sub_4c4330("/sys", sub_4c43d0(&var_120), &var_120)
                        lpFileName = &var_120
                        var_8_1.b = 0x10
                        char* const lpFileName_5 = *sub_4c48a0(&lpFileName_11, &var_124, lpFileName)
                        
                        if (lpFileName_5 == 0)
                            lpFileName_5 = &data_83f3d3
                        
                        lpFileName = lpFileName_5
                        uint32_t eax_32
                        eax_32.b = GetFileAttributesA(lpFileName) != 0xffffffff
                        sub_4c43d0(&var_124)
                        var_8_1.b = 1
                        lpFileName_8 = sub_4c43d0(&var_120)
                        
                        if (eax_32.b == 0)
                            lpFileName = lpFileName_8
                            var_124 = &lpFileName
                            sub_4c4300(&lpFileName, &lpFileName_10)
                            lpFileName = sub_51fed0(&var_124)
                            var_8_1.b = 0x11
                            sub_4c4510(lpFileName)
                            var_8_1.b = 1
                            sub_4c4330("Engine", sub_4c43d0(&var_124), &var_120)
                            lpFileName = &var_120
                            var_8_1.b = 0x12
                            lpFileName = sub_4c48a0(&lpFileName_10, &var_124, lpFileName)
                            var_8_1.b = 0x13
                            sub_4c4510(lpFileName)
                            var_8_1.b = 0x12
                            sub_4c43d0(&var_124)
                            var_8_1.b = 1
                            sub_4c4330("/sys", sub_4c43d0(&var_120), &var_120)
                            lpFileName = &var_120
                            var_8_1.b = 0x14
                            char* const lpFileName_6 = *sub_4c48a0(&lpFileName_11, &var_124, lpFileName)
                            
                            if (lpFileName_6 == 0)
                                lpFileName_6 = &data_83f3d3
                            
                            lpFileName = lpFileName_6
                            uint32_t eax_36
                            eax_36.b = GetFileAttributesA(lpFileName) != 0xffffffff
                            sub_4c43d0(&var_124)
                            var_8_1.b = 1
                            int32_t edx_12
                            lpFileName_8, edx_12 = sub_4c43d0(&var_120)
                            
                            if (eax_36.b == 0)
                                sub_4c4330("trunk/Engine", edx_12, &var_120)
                                lpFileName = &var_120
                                var_8_1.b = 0x15
                                lpFileName = sub_4c48a0(&lpFileName_10, &var_124, lpFileName)
                                var_8_1.b = 0x16
                                sub_4c4510(lpFileName)
                                var_8_1.b = 0x15
                                sub_4c43d0(&var_124)
                                var_8_1.b = 1
                                sub_4c4330("/sys", sub_4c43d0(&var_120), &var_120)
                                lpFileName = &var_120
                                var_8_1.b = 0x17
                                char* const lpFileName_7 =
                                    *sub_4c48a0(&lpFileName_11, &var_124, lpFileName)
                                
                                if (lpFileName_7 == 0)
                                    lpFileName_7 = &data_83f3d3
                                
                                lpFileName = lpFileName_7
                                uint32_t eax_39
                                eax_39.b = GetFileAttributesA(lpFileName) != 0xffffffff
                                sub_4c43d0(&var_124)
                                var_8_1.b = 1
                                sub_4c43d0(&var_120)
                                
                                if (eax_39.b == 0)
                                    sub_4c4590(&data_30785f8)
                                    lpFileName = &data_30785f8
                                    sub_4c57f0("Can't find sys directory %s\n")
        
        char* const lpFileName_12 = lpFileName_11
        
        if (lpFileName_12 == 0)
            lpFileName_12 = &data_83f3d3
        
        char* edx_14 = 0x3078700 - lpFileName_12
        
        do
            lpFileName_8.b = *lpFileName_12
            *(edx_14 + lpFileName_12) = lpFileName_8.b
            lpFileName_12 = &lpFileName_12[1]
        while (lpFileName_8.b != 0)
        
        var_8_1.b = lpFileName_8.b
        sub_4c43d0(&lpFileName_11)
        int32_t var_8_2 = 0xffffffff
        result = sub_4c43d0(&lpFileName_10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
