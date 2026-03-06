// 函数名称: sub_5127a0
// 虚拟地址: 0x5127a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_5127a0(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d4a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    int32_t var_8_1 = 1
    sub_4c42b0(arg1, 
        "\tfloat2 duv = uv - float2(.5, .5);\n\tfloat dist = duv.x*duv.x + duv.y*duv.y;\n\tfloat alpha = 1.0 "
    "- smoothstep(0.24, 0.25, dist);\n\treturn f")
    var_8_1.b = 0
    char* arg_8
    char* eax_3 = arg_8
    int32_t var_14_2 = 1
    
    if (eax_3 != 0 && *eax_3 != 0)
        void* eax_5 = sub_4c4060(&arg_8)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_5 + 0xc) + 0x10
            sub_4f4430(eax_5, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
