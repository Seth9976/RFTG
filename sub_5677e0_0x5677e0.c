// 函数名称: sub_5677e0
// 虚拟地址: 0x5677e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5677e0(char* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_692937
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_2c4
    int32_t eax_2 = __security_cookie ^ &var_2c4
    int32_t __saved_edi
    int32_t eax_4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* hFindFile_3
    char** hFindFile_2 = &hFindFile_3
    char* hFindFile_13 = arg1
    int32_t edx
    sub_51ee80(&hFindFile_3, edx, arg1, hFindFile_2)
    int32_t var_c_1 = 0
    data_30785f4
    hFindFile_2 = &hFindFile_3
    sub_4c4510(hFindFile_2)
    int32_t var_c_2 = 0xffffffff
    char* hFindFile_14 = hFindFile_3
    
    if (hFindFile_14 != 0 && *hFindFile_14 != 0)
        hFindFile_14 = sub_4c4060(&hFindFile_3)
        int32_t temp0_1 = *(hFindFile_14 + 4)
        *(hFindFile_14 + 4) -= 1
        
        if (temp0_1 == 1)
            char** hFindFile_7 = *(hFindFile_14 + 0xc) + 0x10
            int32_t* eax_7 = sub_4f4380(hFindFile_7)
            hFindFile_2 = hFindFile_7
            hFindFile_14 = sub_4f4430(hFindFile_14, eax_7, hFindFile_2)
    
    char* hFindFile_5 = hFindFile_13
    hFindFile_2 = hFindFile_5
    char* const var_2b8
    WIN32_FIND_DATAA var_168
    
    if (sub_4c5b00(hFindFile_14, hFindFile_5, &var_168, hFindFile_2) != 0)
        char** hFindFile_1
        BOOL i
        
        do
            if (((var_168.dwFileAttributes u>> 4).b & 1) == 0)
                char* const esi_2 = &data_83f3d3
                var_2b8 = &data_83f3d3
                int32_t var_c_3 = 1
                char* hFindFile_18 = hFindFile_13
                var_13c
                hFindFile_2 = &var_13c
                char* hFindFile_19 = hFindFile_18
                char const* const var_2e0_1 = "%s%s"
                sub_4c49b0(&var_2b8, hFindFile_18)
                char* const ebx_1 = var_2b8
                
                if (ebx_1 != 0)
                    esi_2 = ebx_1
                
                if (ebx_1 == 0 || *ebx_1 != 0x21)
                    hFindFile_2 = &data_88bacc
                    
                    if (sub_5a8e80(esi_2, hFindFile_2) == 0)
                        hFindFile_2 = &data_88bad0
                        
                        if (sub_5a8e80(esi_2, hFindFile_2) == 0)
                            char* const eax_15 = &data_83f3d3
                            
                            if (ebx_1 != 0)
                                eax_15 = ebx_1
                            
                            hFindFile_2 = 0x2e
                            char* eax_16 = sub_5a8f10(eax_15, hFindFile_2.b)
                            
                            if (eax_16 != 0)
                                hFindFile_2 = ".atlasmaker"
                                uint32_t eax_17
                                int32_t edx_1
                                eax_17, edx_1 = sub_5a9697(eax_16, hFindFile_2)
                                
                                if (eax_17 == 0)
                                    char* const ecx_3 = &data_83f3d3
                                    
                                    if (ebx_1 != 0)
                                        ecx_3 = ebx_1
                                    
                                    hFindFile_2 = &hFindFile_3
                                    sub_51ee80(&hFindFile_3, edx_1, ecx_3, hFindFile_2)
                                    var_c_3.b = 2
                                    hFindFile_2 = hFindFile_3
                                    char* hFindFile_16 = hFindFile_3
                                    char*** var_2b4_1 = &hFindFile_2
                                    
                                    if (hFindFile_16 != 0 && *hFindFile_16 != 0)
                                        void* eax_20 = sub_4c4060(&hFindFile_2)
                                        *(eax_20 + 4) += 1
                                    
                                    sub_567510()
                                    var_c_3.b = 1
                                    char* hFindFile_15 = hFindFile_3
                                    
                                    if (hFindFile_15 != 0 && *hFindFile_15 != 0)
                                        void* eax_22 = sub_4c4060(&hFindFile_3)
                                        int32_t temp4_1 = *(eax_22 + 4)
                                        *(eax_22 + 4) -= 1
                                        
                                        if (temp4_1 == 1)
                                            char** hFindFile_8 = *(eax_22 + 0xc) + 0x10
                                            int32_t* eax_23 = sub_4f4380(hFindFile_8)
                                            hFindFile_2 = hFindFile_8
                                            sub_4f4430(eax_22, eax_23, hFindFile_2)
                
                int32_t var_c_4 = 0xffffffff
                
                if (ebx_1 != 0 && *ebx_1 != 0)
                    void* eax_26 = sub_4c4060(&var_2b8)
                    int32_t temp2_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        char** hFindFile_9 = *(eax_26 + 0xc) + 0x10
                        int32_t* eax_27 = sub_4f4380(hFindFile_9)
                        hFindFile_2 = hFindFile_9
                        sub_4f4430(eax_26, eax_27, hFindFile_2)
            
            hFindFile_2 = &var_168
            i = FindNextFileA(hFindFile_1, hFindFile_2)
        while (i == 1)
        hFindFile_2 = hFindFile_1
        FindClose(hFindFile_2)
    
    sub_4c42b0(&var_2b8, &data_83f3d3)
    int32_t var_c_5 = 3
    data_30785f4
    hFindFile_2 = &var_2b8
    char* edx_2 = sub_4c4510(hFindFile_2)
    int32_t var_c_6 = 0xffffffff
    void* eax_30 = var_2b8
    
    if (eax_30 != 0 && *eax_30 != 0)
        eax_30 = sub_4c4060(&var_2b8)
        int32_t temp1_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp1_1 == 1)
            char** hFindFile_10 = *(eax_30 + 0xc) + 0x10
            int32_t* eax_32 = sub_4f4380(hFindFile_10)
            hFindFile_2 = hFindFile_10
            eax_30, edx_2 = sub_4f4430(eax_30, eax_32, hFindFile_2)
    
    char* hFindFile_6 = hFindFile_13
    hFindFile_2 = hFindFile_6
    WIN32_FIND_DATAA var_2b0
    char result
    char* edx_3
    result, edx_3 = sub_4c5b00(eax_30, edx_2, &var_2b0, hFindFile_2)
    
    if (result != 0)
        HANDLE hFindFile
        BOOL i_1
        
        do
            if (((var_2b0.dwFileAttributes u>> 4).b & 1) != 0 && var_2b0.cFileName[0] != 0x2e)
                hFindFile_13 = &data_83f3d3
                var_284
                hFindFile_2 = &var_284
                char* hFindFile_12 = hFindFile_6
                char const* const var_2e0_2 = "%s%s/"
                int32_t var_c_7 = 4
                sub_4c49b0(&hFindFile_13, edx_3)
                char* hFindFile_17 = hFindFile_13
                char* const hFindFile_4 = &data_83f3d3
                
                if (hFindFile_17 != 0)
                    hFindFile_4 = hFindFile_17
                
                hFindFile_2 = hFindFile_4
                sub_5677e0(hFindFile_2, eax_4)
                int32_t var_c_8 = 0xffffffff
                
                if (hFindFile_17 != 0 && *hFindFile_17 != 0)
                    void* eax_38 = sub_4c4060(&hFindFile_13)
                    int32_t temp3_1 = *(eax_38 + 4)
                    *(eax_38 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        char** hFindFile_11 = *(eax_38 + 0xc) + 0x10
                        int32_t* eax_39 = sub_4f4380(hFindFile_11)
                        hFindFile_2 = hFindFile_11
                        sub_4f4430(eax_38, eax_39, hFindFile_2)
            
            hFindFile_2 = &var_2b0
            i_1, edx_3 = FindNextFileA(hFindFile, hFindFile_2)
        while (i_1 == 1)
        hFindFile_2 = hFindFile
        result = FindClose(hFindFile_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_2c4)
    return result
}
