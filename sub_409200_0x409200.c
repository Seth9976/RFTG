// 函数名称: sub_409200
// 虚拟地址: 0x409200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_409200(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fba8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_30 = 0
    char* var_34 = arg1
    char** result_1 = &var_34
    sub_4c42b0(&var_34, "localsettings.xml")
    void var_18
    sub_500300(&var_18, var_34)
    int32_t var_8_1 = 0
    
    if (data_27e7a50 != 0)
        char const* const var_30_1 = "LocalSettingsLoad"
        var_34 = 0x343
        sub_4c5870("gLocalSettings == NULL", &data_83f3d3, "..\code\GameApp.cpp", var_34, var_30_1)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ecx = data_307b65c
    int32_t* eax_4 = sub_504c70(ecx)
    
    if (eax_4 != 0)
        int32_t* eax_5 = sub_501ff0(ecx, eax_4)
        sub_500770(eax_4)
        eax_4 = eax_5
    
    int32_t* esi_2 = eax_4
    data_27e7a50 = esi_2
    
    if (eax_4 == 0)
        esi_2 = sub_4ff5a0(data_307b65c)
        data_27e7a50 = esi_2
    
    int32_t eax_7 = esi_2[8]
    
    if (eax_7 s< 0x300)
        eax_7 = 0x300
    else if (eax_7 s> 0x1000)
        eax_7 = 0x1000
    
    void* ecx_1 = data_27e7fd0
    *(ecx_1 + 0x18) = eax_7
    int32_t edx_2
    int32_t eax_10
    
    if (*(esi_2 + 0x1d) == 0)
        edx_2:eax_10 = muls.dp.d(0x55555556, eax_7 << 2)
    else
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = muls.dp.d(0x38e38e39, eax_7 << 4)
        edx_2 = edx_1 s>> 1
    *(ecx_1 + 0x14) = (edx_2 u>> 0x1f) + edx_2
    edx_2.b = *(esi_2 + 0x1e)
    *(ecx_1 + 0x23) = edx_2.b
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_4 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
