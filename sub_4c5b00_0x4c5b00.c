// 函数名称: sub_4c5b00
// 虚拟地址: 0x4c5b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4c5b00(int32_t arg1, char* arg2, WIN32_FIND_DATAA* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fc18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const lpFileName_2 = &data_83f3d3
    int32_t var_2c = arg4
    char const* const var_30 = "%s*.*"
    int32_t var_8_1 = 0
    sub_4c49b0(&lpFileName_2, arg2)
    char* const lpFileName_1 = lpFileName_2
    char* const lpFileName = &data_83f3d3
    
    if (lpFileName_1 != 0)
        lpFileName = lpFileName_1
    
    void* result = FindFirstFileA(lpFileName, arg3)
    arg3->__offset(0x140).d = result
    int32_t var_8_2 = 0xffffffff
    
    if (result == 0xffffffff)
        if (lpFileName_1 != 0 && *lpFileName_1 != 0)
            result = sub_4c4060(&lpFileName_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_3 = *(result + 0xc) + 0x10
                sub_4f4430(result, sub_4f4380(esi_3), esi_3)
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (lpFileName_1 != 0 && *lpFileName_1 != 0)
        result = sub_4c4060(&lpFileName_2)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_1 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_1), esi_1)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
