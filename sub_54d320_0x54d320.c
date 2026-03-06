// 函数名称: sub_54d320
// 虚拟地址: 0x54d320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_54d320(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fd60
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edi = **(data_30785d4 + 0x7c)
    
    if (edi == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* var_1c
    sub_4c42b0(&var_1c, edi)
    int32_t var_8_1 = 0
    char* var_18
    sub_4c42b0(&var_18, &data_88bac8)
    var_8_1.b = 1
    var_8_1.b = 2
    char* var_20
    char* var_14
    sub_4c48a0(sub_4c48a0(arg1, &var_20, &var_18), &var_14, &var_1c)
    var_8_1.b = 4
    char* eax_6 = var_20
    
    if (eax_6 != 0 && *eax_6 != 0)
        void* eax_8 = sub_4c4060(&var_20)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_3), esi_3)
    
    var_8_1.b = 5
    char* eax_11 = var_18
    
    if (eax_11 != 0 && *eax_11 != 0)
        void* eax_13 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_5 = *(eax_13 + 0xc) + 0x10
            sub_4f4430(eax_13, sub_4f4380(esi_5), esi_5)
    
    var_8_1.b = 6
    char* eax_16 = var_1c
    
    if (eax_16 != 0 && *eax_16 != 0)
        void* eax_18 = sub_4c4060(&var_1c)
        int32_t temp2_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_7 = *(eax_18 + 0xc) + 0x10
            sub_4f4430(eax_18, sub_4f4380(esi_7), esi_7)
    
    char* const edx = var_14
    
    if (edx == 0)
        edx = &data_83f3d3
    
    char** eax_21
    char* ecx_4
    eax_21, ecx_4 = sub_509140(3, edx)
    
    if (eax_21[2] == 0)
        if (eax_21[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*eax_21 == 0)
            ecx_4 = sub_5094d0(eax_21, 0, 1)
        
        eax_21[7] = eax_21[7]
    
    if (eax_21[2] != 4)
        int32_t var_8_3 = 0xffffffff
        char* eax_30 = var_14
        
        if (eax_30 != 0 && *eax_30 != 0)
            void* eax_32 = sub_4c4060(&var_14)
            int32_t temp3_1 = *(eax_32 + 4)
            *(eax_32 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t esi_12 = *(eax_32 + 0xc) + 0x10
                sub_4f4430(eax_32, sub_4f4380(esi_12), esi_12)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    *arg1
    char** result = sub_4e63d0(ecx_4)
    int32_t var_8_2 = 0xffffffff
    char* eax_23 = var_14
    
    if (eax_23 != 0 && *eax_23 != 0)
        void* eax_25 = sub_4c4060(&var_14)
        int32_t temp4_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_10 = *(eax_25 + 0xc) + 0x10
            sub_4f4430(eax_25, sub_4f4380(esi_10), esi_10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
