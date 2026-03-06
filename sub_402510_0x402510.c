// 函数名称: sub_402510
// 虚拟地址: 0x402510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_402510(char arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f33b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1020 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = data_27e7a4c
    void* ecx
    
    if (result == 0)
        ecx = data_27e7a40
    else
        char* const var_30_1 = &data_83f3d3
        int32_t var_8_1 = 0
        ecx = data_27e7a40
        result = result[0x74]
        int32_t var_1010[0x3f8]
        var_1010[0] = *(ecx + 0x28)
        
        if (result != 0)
            result = sub_4d13a0(result, &var_1010)
            ecx = data_27e7a40
        
        int32_t var_8_2 = 0xffffffff
    
    int32_t edx_2 = *(ecx + 0x28)
    
    if (edx_2 != 0)
        void* esi_1 = data_27e7bb8
        result = zx.d(edx_2.w)
        
        if (result u< *(esi_1 + 4))
            result = result * 0x4c + *esi_1
            
            if (result[0x12] == edx_2)
                result = sub_4c6a10(result)
                ecx = data_27e7a40
    
    *(ecx + 0x20) = 0
    *(ecx + 0x24) = 0
    *(ecx + 0x2c4958) = 0
    *(ecx + 0x2c9048) = 0
    data_8c873c = fconvert.s(float.t(0))
    
    if (arg1 != 0)
        result = sub_475260()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
