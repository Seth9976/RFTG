// 函数名称: sub_5029b0
// 虚拟地址: 0x5029b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5029b0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e508
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* esi = data_30785c8
    esi[3] += 1
    
    if (*esi == 0)
        sub_5043e0(esi)
    
    int32_t* ebx = *esi
    *esi = *ebx
    __builtin_memset(ebx, 0, 0x14)
    
    if (ebx != 0)
        *ebx = &data_83f3d3
        ebx[1] = &data_83f3d3
    
    var_14 = ebx
    sub_518190(&arg4[1], &var_14)
    char* arg_8
    sub_4c4510(&arg_8)
    void* edi_3 = data_30785c8
    *(edi_3 + 0x1c) += 1
    
    if (*(edi_3 + 0x10) == 0)
        sub_504460(edi_3 + 0x10)
    
    int32_t* result = *(edi_3 + 0x10)
    *(edi_3 + 0x10) = *result
    __builtin_memset(result, 0, 0x14)
    
    if (result != 0)
        *result = &data_83f3d3
        result[1] = 0
        result[2] = 0
        result[3] = 0
    
    ebx[2] = result
    int32_t var_8_2 = 0xffffffff
    char* ecx_1 = arg_8
    
    if (ecx_1 != 0 && *ecx_1 != 0)
        void* eax_5 = sub_4c4060(&arg_8)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_5 + 0xc) + 0x10
            sub_4f4430(eax_5, sub_4f4380(esi_3), esi_3)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
