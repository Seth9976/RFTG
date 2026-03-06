// 函数名称: sub_520c60
// 虚拟地址: 0x520c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_520c60(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f1d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = arg4
    int32_t var_2c = ebx[1]
    char* var_30 = arg3
    char* ecx = ebx[8]
    int32_t* var_18 = &var_30
    var_30 = ecx
    
    if (ecx != 0 && *ecx != 0)
        void* eax_5 = sub_4c4060(&var_30)
        *(eax_5 + 4) += 1
    
    char* var_14
    sub_51fbc0(&var_14, var_30)
    int32_t var_8_1 = 0
    char* esi = var_14
    char* const eax_6 = &data_83f3d3
    
    if (esi != 0)
        eax_6 = esi
    
    char* const ecx_1 = &data_83f3d3
    int32_t eax_8
    
    while (true)
        char edx = *eax_6
        char temp0_1 = *ecx_1
        bool c_1 = edx u< temp0_1
        
        if (edx == temp0_1)
            if (edx == 0)
                eax_8 = 0
                break
            
            edx = eax_6[1]
            char temp3_1 = ecx_1[1]
            c_1 = edx u< temp3_1
            
            if (edx == temp3_1)
                eax_6 = &eax_6[2]
                ecx_1 = &ecx_1[2]
                
                if (edx != 0)
                    continue
                
                eax_8 = 0
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        eax_8 = sbb.d(sbb.d(eax_6, eax_6, c_1), 0xffffffff, c_2)
        break
    
    if (eax_8 == 0)
        int32_t var_2c_1 = ebx[1]
        var_30 = ecx_1
        char* ecx_2 = ebx[8]
        var_18 = &var_30
        var_30 = ecx_2
        
        if (ecx_2 != 0 && *ecx_2 != 0)
            void* eax_10 = sub_4c4060(&var_30)
            *(eax_10 + 4) += 1
        
        var_8_1.b = 1
        sub_4c4510(sub_51f6d0(&var_18))
        var_8_1.b = 0
        int32_t* eax_12 = var_18
        
        if (eax_12 != 0 && *eax_12 != 0)
            void* eax_14 = sub_4c4060(&var_18)
            int32_t temp4_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_2 = *(eax_14 + 0xc) + 0x10
                sub_4f4430(eax_14, sub_4f4380(esi_2), esi_2)
        
        ebx = arg4
        esi = var_14
    
    void* ecx_3 = *ebx
    uint32_t edx_2 = *(ecx_3 + 4)
    
    if (edx_2 == 0)
        char const* const var_2c_4 = "DefinitionSaveAsset"
        var_30 = 0x281
        sub_4c5870("pDefHeader->pParseTree", &data_83f3d3, "DefLoad.cpp", var_30, var_2c_4)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* eax_18 = &data_83f3d3
    
    if (esi != 0)
        eax_18 = esi
    
    *(ecx_3 + 0xc)
    uint32_t var_2c_5 = edx_2
    
    if (sub_504620(eax_18, edx_2) != 0)
        int32_t* var_2c_8 = arg4
        int32_t var_8_3 = 0xffffffff
        char** ecx_7 = &var_14
        
        if (sub_4cf840() != 0)
            sub_4c43d0(ecx_7)
            int32_t* eax_27
            eax_27.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_27
        
        sub_4c43d0(ecx_7)
        int32_t* eax_26
        eax_26.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_26
    
    char* eax_20 = var_14
    
    if (eax_20 == 0)
        eax_20 = &data_83f3d3
    
    char* var_2c_6 = eax_20
    var_30 = "Failed to write xml file: '%s'"
    sub_4c5680(var_30)
    int32_t var_8_2 = 0xffffffff
    void* eax_21 = var_14
    
    if (eax_21 != 0 && *eax_21 != 0)
        eax_21 = sub_4c4060(&var_14)
        int32_t temp5_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp5_1 == 1)
            int32_t esi_4 = *(eax_21 + 0xc) + 0x10
            sub_4f4430(eax_21, sub_4f4380(esi_4), esi_4)
    
    eax_21.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_21
}
