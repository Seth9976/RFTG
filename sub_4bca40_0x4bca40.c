// 函数名称: sub_4bca40
// 虚拟地址: 0x4bca40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4bca40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68eeb0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_18
    sub_4bc740(&var_18)
    int32_t var_8_1 = 0
    char* const eax_4 = var_18
    
    if (eax_4 == 0)
        eax_4 = &data_83f3d3
    
    char i
    
    do
        i = *eax_4
        eax_4 = &eax_4[1]
    while (i != 0)
    char* const arg_8
    char* const ecx_2 = *(arg_8 + 4)
    
    if (ecx_2 == 0)
        ecx_2 = &data_83f3d3
    
    void* edi = ecx_2 + eax_4 - &eax_4[1]
    
    if (edi == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* var_14
    sub_4c42b0(&var_14, edi)
    var_8_1.b = 1
    char* edi_1 = var_14
    char* eax_7 = &data_83f3d3
    
    if (edi_1 != 0)
        eax_7 = edi_1
    
    char* edi_2 = edi_1
    
    do
        ecx_2.b = *eax_7
        eax_7 = &eax_7[1]
    while (ecx_2.b != 0)
    
    char* ecx_3 = &data_83f3d3
    
    if (edi_2 != 0)
        ecx_3 = edi_2
    
    arg_8 = &data_83f3d3
    sub_4c4690(&arg_8, ecx_3)
    char* const esi_3 = arg_8
    char* const eax_9 = &data_83f3d3
    
    if (esi_3 != 0)
        eax_9 = esi_3
    
    char* const var_30_1 = eax_9
    int32_t result = sub_5a710b()
    
    if (esi_3 != 0 && *esi_3 != 0)
        void* eax_11 = sub_4c4060(&arg_8)
        int32_t temp0_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_5 = *(eax_11 + 0xc) + 0x10
            sub_4f4430(eax_11, sub_4f4380(esi_5), esi_5)
            edi_2 = var_14
    
    var_8_1.b = 0
    
    if (edi_2 != 0 && *edi_2 != 0)
        void* eax_15 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_7 = *(eax_15 + 0xc) + 0x10
            sub_4f4430(eax_15, sub_4f4380(esi_7), esi_7)
    
    int32_t var_8_2 = 0xffffffff
    char* eax_18 = var_18
    
    if (eax_18 != 0 && *eax_18 != 0)
        void* eax_20 = sub_4c4060(&var_18)
        int32_t temp2_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_9 = *(eax_20 + 0xc) + 0x10
            sub_4f4430(eax_20, sub_4f4380(esi_9), esi_9)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
