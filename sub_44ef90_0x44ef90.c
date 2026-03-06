// 函数名称: sub_44ef90
// 虚拟地址: 0x44ef90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_44ef90(int32_t arg1, int32_t arg2, char* arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c948
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    char* result_2 = result_1
    int32_t edx = *(result_2 + 0x60)
    *(result_2 + 0x60) = edx + 1
    int32_t edx_1
    edx_1.b = *arg3
    void* esi_2 = &result_2[edx << 4]
    int32_t eax_5
    
    if (edx_1.b == 4)
        eax_5 = 7
    
    if (edx_1.b != 4 || zx.d(arg3[8]) == 0)
        eax_5 = sx.d(edx_1.b)
    
    *(esi_2 + 4) = eax_5
    
    if (arg5 == 0)
        *esi_2 = 0
    else
        if (arg5 != 1)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x57d6, "AddPowerDescSimple")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_2 = 1
    
    int32_t edx_2 = sx.d(*(arg4 + 0xe))
    int32_t var_8_1 = 0
    sub_4c4510(sub_44c1b0(&result_1, edx_2, arg3, &result_1, edx_2))
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_4 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
