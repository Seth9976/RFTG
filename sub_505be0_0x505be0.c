// 函数名称: sub_505be0
// 虚拟地址: 0x505be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_505be0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = arg1[1]
    int32_t esi = arg1[3]
    int32_t eax_5
    int32_t edx
    edx:eax_5 = sx.q(ecx - esi)
    int32_t eax_6 = eax_5 ^ edx
    void* result = eax_6 - edx
    
    if (eax_6 != edx)
        int32_t var_18_1 = ecx
        
        if (ecx s>= esi)
            var_18_1 = esi
        
        char* const result_1 = &data_83f3d3
        int32_t var_8_1 = 0
        char* const eax_7 = *arg1
        
        if (eax_7 == 0)
            eax_7 = &data_83f3d3
        
        sub_4c4690(&result_1, eax_7)
        char* eax_8 = *arg1
        
        if (eax_8 != 0 && *eax_8 != 0)
            *(sub_4c4060(arg1) + 8)
        
        char* const edx_1 = *arg1
        
        if (edx_1 == 0)
            edx_1 = &data_83f3d3
        
        sub_4c4690(&result_1, &edx_1[var_18_1] + result)
        sub_4c4510(&result_1)
        arg1[1] = var_18_1
        arg1[3] = var_18_1
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_4 = *(result + 0xc) + 0x10
                result = sub_4f4430(result, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
