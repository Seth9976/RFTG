// 函数名称: sub_670650
// 虚拟地址: 0x670650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_670650(void* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* lpString = arg2
    int32_t var_110 = 0
    *arg3 = 0
    int32_t result
    
    if (lpString != 0)
        result = lstrlenA(lpString)
    
    void* var_128_1
    char const* const var_124_3
    
    if (lpString == 0 || result == 0)
        var_124_3 = "zero length keyword"
        var_128_1 = arg1
    else
        uint32_t eax_4 = sub_666560(arg1, result + 2)
        *arg3 = eax_4
        
        if (eax_4 != 0)
            char* esi_1 = eax_4
            
            while (*lpString != 0)
                eax_4.b = *lpString
                
                if (eax_4.b u< 0x20 || (eax_4.b u> 0x7e && eax_4.b u< 0xa1))
                    void var_108
                    sub_663ee0(&var_108, 1, 4, zx.d(eax_4.b))
                    sub_664180(arg1, &var_108, "invalid keyword character 0x@1")
                    *esi_1 = 0x20
                else
                    *esi_1 = eax_4.b
                
                lpString = &lpString[1]
                esi_1 = &esi_1[1]
            
            *esi_1 = 0
            int32_t edx_2 = *arg3
            char* esi_2 = edx_2 + result - 1
            
            if (*(edx_2 + result - 1) == 0x20)
                sub_664100(arg1, "trailing spaces removed from keyword")
                
                while (*esi_2 == 0x20)
                    *esi_2 = 0
                    esi_2 -= 1
                    result -= 1
            
            char* esi_3 = *arg3
            
            if (*esi_3 == 0x20)
                sub_664100(arg1, "leading spaces removed from keyword")
                
                while (*esi_3 == 0x20)
                    esi_3 = &esi_3[1]
                    result -= 1
            
            eax_4.b = *esi_3
            char* ecx_4 = *arg3
            int32_t edx_3 = 0
            
            while (eax_4.b != 0)
                if (eax_4.b != 0x20)
                    *ecx_4 = eax_4.b
                    ecx_4 = &ecx_4[1]
                    edx_3 = 0
                else if (edx_3 != 0)
                    result -= 1
                    var_110 = 1
                else
                    *ecx_4 = eax_4.b
                    ecx_4 = &ecx_4[1]
                    edx_3 = 1
                
                eax_4.b = esi_3[1]
                esi_3 = &esi_3[1]
            
            *ecx_4 = 0
            
            if (var_110 != 0)
                sub_664100(arg1, "extra interior spaces removed from keyword")
            
            if (result == 0)
                sub_666530(arg1, *arg3)
                sub_664100(arg1, "Zero length keyword")
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
            
            if (result u> 0x4f)
                sub_664100(arg1, "keyword length must be 1 - 79 characters")
                *(*arg3 + 0x4f) = 0
                result = 0x4f
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
        
        var_124_3 = "Out of memory while procesing keyword"
        var_128_1 = arg1
    
    sub_664100(var_128_1, var_124_3)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
