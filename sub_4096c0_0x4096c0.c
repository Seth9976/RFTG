// 函数名称: sub_4096c0
// 虚拟地址: 0x4096c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_4096c0(char* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68fb78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = data_27e7a64
    char* var_3c
    
    if (eax_3 != 0)
        int32_t* var_38_1 = nullptr
        var_3c = data_307b67c
        arg1 = sub_4fecf0(eax_3, var_3c, var_38_1)
        
        if (eax_3 != 0)
            arg1 = _aligned_free_base(eax_3)
    
    int32_t var_38_3 = 0
    var_3c = arg1
    char** var_24 = &var_3c
    sub_4c42b0(&var_3c, "stats.xml")
    void var_20
    sub_500300(&var_20, var_3c)
    int32_t var_c_1 = 0
    int32_t* ecx_1 = data_307b67c
    int32_t* eax_4 = sub_504c70(ecx_1)
    
    if (eax_4 != 0)
        int32_t* eax_5 = sub_501ff0(ecx_1, eax_4)
        sub_500770(eax_4)
        eax_4 = eax_5
    
    data_27e7a64 = eax_4
    
    if (eax_4 == 0)
        void* eax_6 = data_307b67c
        int32_t eax_7 = *(eax_6 + 0xc)
        
        if (eax_7 == 0)
            char const* const var_38_6 = "DefinitionGetSize"
            var_3c = 0x6d
            sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", var_3c, var_38_6)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* eax_9 = sub_4cce80(eax_7)
        var_3c = eax_9
        sub_4fe7d0(var_3c, eax_6)
        data_27e7a64 = eax_9
        *eax_9 = modu.dp.d(0:(sub_4c95c0()), 0x7fffffff)
        sub_409830()
    
    int32_t var_c_2 = 0xffffffff
    char* result_1
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_6 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_6), esi_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
