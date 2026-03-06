// 函数名称: sub_4591b0
// 虚拟地址: 0x4591b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_4591b0(int32_t arg1, int32_t arg2, void* arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f768
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx = *(data_27e7a40 + 0x548)
    char* result_1
    int32_t edi = &result_1[sx.d(*(arg3 + 0x1ec2)) << 2] * 0x1c0 + edx + 0x2c0c0
    char* result = sx.d(*(arg3 + 0x1ec0)) - 1
    
    if (result u<= 8)
        int32_t esi_1
        
        switch (result)
            case nullptr, 1
                esi_1 = 0
            case 2, 3
                esi_1 = 1
            case 4, 5
                esi_1 = 2
            case 6, 7
                esi_1 = 4
            case 8
                esi_1 = 5
        
        int32_t var_8_1 = 0
        char* ecx_1 = *sub_4c4b20(result, edx, arg4, &result_1, &data_862374, &data_86232c)
        
        if (ecx_1 == 0)
            ecx_1 = &data_83f3d3
        
        sub_4c4620(edi + (esi_1 << 2) + 0x1a8, ecx_1)
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_3 = *(result + 0xc) + 0x10
                result = sub_4f4430(result, sub_4f4380(esi_3), esi_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
