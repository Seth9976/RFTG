// 函数名称: sub_51bd40
// 虚拟地址: 0x51bd40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_51bd40(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fec1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* esi = arg1
    char* var_2ac = esi
    char* var_2a8
    int32_t edx
    char** eax_4 = sub_51ee80(&var_2a8, edx, esi, &var_2a8)
    int32_t var_8_1 = 0
    data_30785f4
    char* edx_1 = sub_4c4510(eax_4)
    int32_t var_8_2 = 0xffffffff
    char* eax_5 = var_2a8
    
    if (eax_5 != 0 && *eax_5 != 0)
        eax_5 = sub_4c4060(&var_2a8)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_5 + 0xc) + 0x10
            eax_5, edx_1 = sub_4f4430(eax_5, sub_4f4380(esi_2), esi_2)
            esi = var_2ac
    
    WIN32_FIND_DATAA findFileData
    char eax_9
    char* edx_2
    eax_9, edx_2 = sub_4c5b00(eax_5, edx_1, &findFileData, esi)
    
    if (eax_9 != 0)
        HANDLE hFindFile
        BOOL i
        
        do
            if (((findFileData.dwFileAttributes u>> 4).b & 1) == 0)
                var_2a8 = &data_83f3d3
                var_278
                void* var_2c4_4 = &var_278
                char* var_2c8_1 = esi
                char const* const var_2cc_1 = "%s%s"
                int32_t var_8_3 = 1
                sub_4c49b0(&var_2a8, edx_2)
                char* edi_2 = var_2a8
                char* const eax_11 = &data_83f3d3
                
                if (edi_2 != 0)
                    eax_11 = edi_2
                
                sub_51bba0(eax_11)
                int32_t var_8_4 = 0xffffffff
                
                if (edi_2 != 0 && *edi_2 != 0)
                    void* eax_13 = sub_4c4060(&var_2a8)
                    int32_t temp1_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        int32_t esi_4 = *(eax_13 + 0xc) + 0x10
                        sub_4f4430(eax_13, sub_4f4380(esi_4), esi_4)
                        esi = var_2ac
            
            i, edx_2 = FindNextFileA(hFindFile, &findFileData)
        while (i == 1)
        FindClose(hFindFile)
    
    data_30785f4
    int32_t* eax_16
    char* edx_4
    eax_16, edx_4 = sub_4c4590(&data_83f3d3)
    WIN32_FIND_DATAA findFileData_1
    char result
    char* edx_5
    result, edx_5 = sub_4c5b00(eax_16, edx_4, &findFileData_1, esi)
    
    if (result != 0)
        HANDLE hFindFile_1
        BOOL i_1
        
        do
            if (((findFileData_1.dwFileAttributes u>> 4).b & 1) != 0
                    && findFileData_1.cFileName[0] != 0x2e)
                var_2a8 = &data_83f3d3
                var_130
                void* var_2c4_10 = &var_130
                char* var_2c8_3 = esi
                char const* const var_2cc_2 = "%s%s/"
                int32_t var_8_5 = 2
                sub_4c49b0(&var_2a8, edx_5)
                char* edi_4 = var_2a8
                char* const eax_20 = &data_83f3d3
                
                if (edi_4 != 0)
                    eax_20 = edi_4
                
                sub_51bd40(eax_20, eax_2)
                int32_t var_8_6 = 0xffffffff
                
                if (edi_4 != 0 && *edi_4 != 0)
                    void* eax_22 = sub_4c4060(&var_2a8)
                    int32_t temp2_1 = *(eax_22 + 4)
                    *(eax_22 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        int32_t esi_6 = *(eax_22 + 0xc) + 0x10
                        sub_4f4430(eax_22, sub_4f4380(esi_6), esi_6)
                        esi = var_2ac
            
            i_1, edx_5 = FindNextFileA(hFindFile_1, &findFileData_1)
        while (i_1 == 1)
        result = FindClose(hFindFile_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
