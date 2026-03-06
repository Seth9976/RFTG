// 函数名称: sub_530620
// 虚拟地址: 0x530620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_530620(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cd6e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 5
    char* ecx = *(arg1 + 0x15c4)
    
    if (ecx != 0 && *ecx != 0)
        void* eax_4 = sub_4c4060(arg1 + 0x15c4)
        int32_t temp1_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_2 = *(eax_4 + 0xc) + 0x10
            sub_4f4430(eax_4, sub_4f4380(esi_2), esi_2)
    
    var_8_1.b = 4
    char* ecx_2 = *(arg1 + 0x157c)
    
    if (ecx_2 != 0 && *ecx_2 != 0)
        void* eax_8 = sub_4c4060(arg1 + 0x157c)
        int32_t temp2_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_4 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_4), esi_4)
    
    var_8_1.b = 3
    char* ecx_4 = *(arg1 + 0x1560)
    
    if (ecx_4 != 0 && *ecx_4 != 0)
        void* eax_12 = sub_4c4060(arg1 + 0x1560)
        int32_t temp3_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_6 = *(eax_12 + 0xc) + 0x10
            sub_4f4430(eax_12, sub_4f4380(esi_6), esi_6)
    
    var_8_1.b = 2
    char* ecx_6 = *(arg1 + 0x1518)
    
    if (ecx_6 != 0 && *ecx_6 != 0)
        void* eax_16 = sub_4c4060(arg1 + 0x1518)
        int32_t temp4_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_8 = *(eax_16 + 0xc) + 0x10
            sub_4f4430(eax_16, sub_4f4380(esi_8), esi_8)
    
    var_8_1.b = 1
    char* ecx_8 = *(arg1 + 0x14bc)
    
    if (ecx_8 != 0 && *ecx_8 != 0)
        void* eax_20 = sub_4c4060(arg1 + 0x14bc)
        int32_t temp5_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp5_1 == 1)
            int32_t esi_10 = *(eax_20 + 0xc) + 0x10
            sub_4f4430(eax_20, sub_4f4380(esi_10), esi_10)
    
    var_8_1.b = 0
    char* ecx_10 = *(arg1 + 0x1460)
    
    if (ecx_10 != 0 && *ecx_10 != 0)
        void* eax_24 = sub_4c4060(arg1 + 0x1460)
        int32_t temp6_1 = *(eax_24 + 4)
        *(eax_24 + 4) -= 1
        
        if (temp6_1 == 1)
            int32_t esi_12 = *(eax_24 + 0xc) + 0x10
            sub_4f4430(eax_24, sub_4f4380(esi_12), esi_12)
    
    int32_t var_8_2 = 0xffffffff
    int32_t result = sub_5a71d9(arg1 + 0x64, 0x14, 0xff, sub_527340)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
