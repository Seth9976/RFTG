// 函数名称: sub_512670
// 虚拟地址: 0x512670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_512670(char** arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d6e9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = 0
    int32_t var_8_1 = 0
    int32_t var_14_1 = 0
    sub_4c42b0(arg1, &data_83f3d3)
    int32_t var_8_2 = 0
    int32_t var_14_2 = 1
    
    if (*(arg2 + 0x1c) s> 0)
        do
            void** edx_1 = *(arg2 + 0x18)
            
            if (edx_1[i] != 0)
                sub_4c5870("Halt", &data_83f3d3, "MaterialFnDef.cpp", 0x2d3, "EmitUVModifiers")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* eax_4 = *arg1
            
            if (eax_4 == 0 || *eax_4 == 0)
                sub_4c42b0(arg1, "\tuv = Spherize(uv);\n")
            else
                void* edi_1 = *(sub_4c4060(arg1) + 8)
                sub_4c4160(edi_1 + 0x14, edx_1, arg1, edi_1 + 0x14, 1)
                __builtin_strncpy(*arg1 + edi_1, "\tuv = Spherize(uv);\n", 0x15)
            
            i += 1
        while (i s< *(arg2 + 0x1c))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
