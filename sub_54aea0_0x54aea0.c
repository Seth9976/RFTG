// 函数名称: sub_54aea0
// 虚拟地址: 0x54aea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_54aea0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ebe0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_28 = arg2
    char* ecx
    int32_t edx
    ecx, edx = sub_4c5680("Compiling opengl shader %s")
    int32_t var_30 = 0
    char* result_1
    char** eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_54a440(&result_1, edx, ecx, &result_1, arg2.b)
    int32_t var_28_1 = 1
    int32_t var_8_1 = 0
    char* var_14
    sub_54a440(eax_4, edx_1, &var_14, &var_14, arg2.b)
    var_8_1.b = 1
    char* result_2 = result_1
    int32_t eax_5
    
    if (result_2 == 0 || *result_2 == 0)
        eax_5 = 0
    else
        eax_5 = *(sub_4c4060(&result_1) + 8)
    
    *(arg1 + 0x18) = eax_5 + 1
    int128_t* eax_9 = sub_4cce80(eax_5 + 1)
    char* result_3 = result_1
    *(arg1 + 0x1c) = eax_9
    
    if (result_3 == 0)
        result_3 = &data_83f3d3
    
    sub_5ab990(eax_9, result_3, *(arg1 + 0x18), eax_2)
    char* eax_10 = var_14
    int32_t eax_11
    
    if (eax_10 == 0 || *eax_10 == 0)
        eax_11 = 0
    else
        eax_11 = *(sub_4c4060(&var_14) + 8)
    
    *(arg1 + 0x20) = eax_11 + 1
    int128_t* eax_15 = sub_4cce80(eax_11 + 1)
    char* ecx_2 = var_14
    *(arg1 + 0x24) = eax_15
    
    if (ecx_2 == 0)
        ecx_2 = &data_83f3d3
    
    sub_5ab990(eax_15, ecx_2, *(arg1 + 0x20))
    var_8_1.b = 0
    char* eax_16 = var_14
    
    if (eax_16 != 0 && *eax_16 != 0)
        void* eax_18 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_18 + 0xc) + 0x10
            sub_4f4430(eax_18, sub_4f4380(esi_2), esi_2)
    
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_4), esi_4)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
