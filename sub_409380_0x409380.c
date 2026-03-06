// 函数名称: sub_409380
// 虚拟地址: 0x409380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_409380()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fc48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_30 = 0
    char* var_34 = sub_407f10()
    char** var_14 = &var_34
    sub_4c42b0(&var_34, "gamesettings.xml")
    void var_1c
    sub_500300(&var_1c, var_34)
    int32_t var_8_1 = 0
    int32_t* ecx_1 = data_307b684
    int32_t* eax_3 = sub_504c70(ecx_1)
    int32_t* ecx_2
    
    if (eax_3 != 0)
        int32_t* eax_4 = sub_501ff0(ecx_1, eax_3)
        sub_500770(eax_3)
        ecx_2 = eax_4
    else
        ecx_2 = nullptr
    
    data_27e7a58 = ecx_2
    
    if (ecx_2 == 0)
        void* eax_5 = data_307b684
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
        ecx_2 = eax_8
        data_27e7a58 = ecx_2
    
    int32_t eax_9 = ecx_2[2]
    char* eax_13
    
    if (eax_9 s< ecx_2[1])
        eax_13 = eax_9 * 0x214 + *ecx_2
    else
        int32_t esi_3 = ecx_2[1]
        void* eax_10 = data_307b66c
        var_34 = ecx_2
        int32_t* eax_11
        int32_t edx_1
        eax_11, edx_1 = sub_4fff30(eax_10, 0)
        int32_t ecx_3 = data_27e7a58
        var_34 = eax_11
        sub_505030(eax_11, edx_1, ecx_3, var_34, esi_3)
        void* eax_12 = data_27e7a58
        *(eax_12 + 8) = esi_3
        eax_13 = esi_3 * 0x214 + *eax_12
    
    data_27e7a54 = eax_13
    
    if (*eax_13 == 0)
        sub_4fe140()
        int32_t eax_15
        int32_t edi_3
        
        if (*(data_27e7fd0 + 0x27) == 0)
            eax_15 = 7
            edi_3 = 4
        else
            eax_15 = 0xe
            edi_3 = 0xc
        
        *(data_27e7a54 + 0x18) = sub_4c96e0(eax_15, edi_3)
        int32_t eax_17 = sub_4c96e0(2, 0)
        void* edi_4 = data_27e7a54
        *(edi_4 + 0x1c) = eax_17
        
        for (int32_t i = 0; i s< 0x18; )
            i += 1
            *(i + edi_4 + 0x1f) = (modu.dp.d(0:(sub_4c95c0()), 0x1a)).b + 0x61
        
        *(edi_4 + 0x39) = 0
    
    sub_408ca0()
    void* ecx_5 = data_27e7a54
    
    if (*(ecx_5 + 0x208) == 0)
        void* eax_20 = data_27e7a58
        *(ecx_5 + 0x208) = *(eax_20 + 0xc)
        *(eax_20 + 0xc) += 1
        sub_408a40()
    
    sub_409060()
    data_27c060c = sub_408650()
    int32_t var_8_2 = 0xffffffff
    char* result_1
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_7 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_7), esi_7)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
