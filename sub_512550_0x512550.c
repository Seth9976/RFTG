// 函数名称: sub_512550
// 虚拟地址: 0x512550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_512550(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d0d1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_2c = arg2
    int32_t var_18 = 0
    sub_4c4a50(arg4, "samplerFn_layer%d")
    int32_t var_8_2 = 0
    int32_t eax_3 = *(arg3 + 0x2b4)
    *(arg3 + 0x2b4) = eax_3 + 1
    *(arg3 + ((arg2 * 3 + 0x5a) << 2)) = eax_3
    *(arg3 + (eax_3 << 2) + 0x2a4) = *(arg5 + 0x10)
    char* const ecx_2 = *arg4
    int32_t var_18_1 = 1
    
    if (ecx_2 == 0)
        ecx_2 = &data_83f3d3
    
    int32_t var_2c_1 = eax_3
    char* const var_30 = ecx_2
    char* var_14
    sub_4c4a50(&var_14, "float4 %s(float2 arg_uv)\n{\n\treturn gMaterialColor%d;\n}\n")
    int32_t var_8_3 = 1
    *(arg3 + 0x104) += 1
    sub_4c4510(arg4)
    sub_4c4510(&var_14)
    var_8_3.b = 0
    char* eax_6 = var_14
    
    if (eax_6 != 0 && *eax_6 != 0)
        void* eax_8 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg4
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}
