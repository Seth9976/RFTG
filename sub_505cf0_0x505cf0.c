// 函数名称: sub_505cf0
// 虚拟地址: 0x505cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __thiscallsub_505cf0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fc18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 s>= 0)
        char* eax_3 = *arg1
        
        if (eax_3 == 0 || *eax_3 == 0)
            result = nullptr
        else
            result = *(sub_4c4060(arg1) + 8)
        
        if (arg2 s< result)
            char* const eax_6 = *arg1
            
            if (eax_6 == 0)
                eax_6 = &data_83f3d3
            
            uint32_t eax_7 = sub_4ba3e0(&eax_6[arg2])
            int32_t var_18_1
            
            if (eax_7 s< 0x80)
                var_18_1 = 1
            else if (eax_7 s>= 0x800)
                int32_t ecx_1
                ecx_1.b = eax_7 s>= 0x10000
                var_18_1 = ecx_1 + 3
            else
                var_18_1 = 2
            
            char* const result_1 = &data_83f3d3
            int32_t var_8_1 = 0
            char* const eax_8 = *arg1
            
            if (eax_8 == 0)
                eax_8 = &data_83f3d3
            
            sub_4c4690(&result_1, eax_8)
            char* eax_9 = *arg1
            
            if (eax_9 != 0 && *eax_9 != 0)
                *(sub_4c4060(arg1) + 8)
            
            char* const edx_1 = *arg1
            
            if (edx_1 == 0)
                edx_1 = &data_83f3d3
            
            sub_4c4690(&result_1, &edx_1[var_18_1 + arg2])
            sub_4c4510(&result_1)
            int32_t var_8_2 = 0xffffffff
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_4c4060(&result_1)
                int32_t temp1_1 = result[1]
                result[1] -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_4 = &result[3][2]
                    result = sub_4f4430(result, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
