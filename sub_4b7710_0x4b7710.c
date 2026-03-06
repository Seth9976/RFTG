// 函数名称: sub_4b7710
// 虚拟地址: 0x4b7710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_4b7710(char* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68fb48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_40 = 1
    char* var_44 = arg1
    char** var_28 = &var_44
    sub_4c42b0(&var_44, "server_status.xml")
    int32_t* eax_3
    int32_t edx
    eax_3, edx = sub_500300(&var_28, var_44)
    int32_t var_c_1 = 0
    char*** var_40_1 = &var_28
    BOOL var_20 = 0
    int32_t var_1c = 0
    
    if (sub_500260(eax_3, edx, &var_20, var_40_1) != 0)
        int32_t* eax_5 = data_8c8710
        BOOL edx_1 = var_20
        
        if (eax_5 == 0 || edx_1 != data_8c8718 || var_1c != data_8c871c)
            data_8c8718 = edx_1
            data_8c871c = var_1c
            
            if (eax_5 != 0)
                int32_t* var_40_2 = nullptr
                var_44 = data_30d72dc
                sub_4fecf0(eax_5, var_44, var_40_2)
                
                if (eax_5 != 0)
                    _aligned_free_base(eax_5)
                
                data_8c8710 = 0
            
            int32_t* ecx_2 = data_30d72dc
            int32_t* eax_6 = sub_504c70(ecx_2)
            int32_t* eax_7
            
            if (eax_6 != 0)
                int32_t* eax_8 = sub_501ff0(ecx_2, eax_6)
                sub_500770(eax_6)
                eax_7 = eax_8
            else
                eax_7 = nullptr
            
            data_8c8710 = eax_7
            
            if (eax_7 == 0)
                sub_4c5780("Failed to load server_status.xml")
                data_8c8710 = sub_4ff5a0(data_30d72dc)
    else if (data_8c8710 == 0)
        data_8c8710 = sub_4ff5a0(data_30d72dc)
    
    int32_t var_c_2 = 0xffffffff
    char* result_1
    char* result = result_1
    
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
