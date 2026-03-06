// 函数名称: sub_4095a0
// 虚拟地址: 0x4095a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4095a0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fba8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_30 = 1
    char* var_34 = arg1
    char** result_1 = &var_34
    sub_4c42b0(&var_34, "channelsettings.xml")
    void var_18
    sub_500300(&var_18, var_34)
    int32_t var_8_1 = 0
    int32_t* ecx = data_307b674
    int32_t* eax_3 = sub_504c70(ecx)
    
    if (eax_3 != 0)
        int32_t* eax_4 = sub_501ff0(ecx, eax_3)
        sub_500770(eax_3)
        eax_3 = eax_4
    
    data_27e7a60 = eax_3
    
    if (eax_3 == 0)
        void* eax_5 = data_307b674
        int32_t eax_6 = *(eax_5 + 0xc)
        
        if (eax_6 == 0)
            char const* const var_30_3 = "DefinitionGetSize"
            var_34 = 0x6d
            sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", var_34, var_30_3)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* eax_8 = sub_4cce80(eax_6)
        var_34 = eax_8
        sub_4fe7d0(var_34, eax_5)
        data_27e7a60 = eax_8
    
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
