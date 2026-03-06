// 函数名称: sub_54ad10
// 虚拟地址: 0x54ad10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_54ad10(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d310
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4c5680("Compiling opengl memory shader")
    
    if (arg2 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* var_14
    sub_4c42b0(&var_14, arg2)
    int32_t var_8_1 = 0
    char* var_18
    sub_4c42b0(&var_18, arg2)
    var_8_1.b = 1
    char* edi_1 = var_14
    int32_t eax_4
    
    if (edi_1 == 0 || *edi_1 == 0)
        eax_4 = 0
    else
        eax_4 = *(sub_4c4060(&var_14) + 8)
    
    *(arg1 + 0x18) = eax_4 + 1
    int128_t* eax_8 = sub_4cce80(eax_4 + 1)
    *(arg1 + 0x1c) = eax_8
    char* ecx = &data_83f3d3
    
    if (edi_1 != 0)
        ecx = edi_1
    
    sub_5ab990(eax_8, ecx, *(arg1 + 0x18), eax_2)
    char* esi_2 = var_18
    int32_t eax_9
    
    if (esi_2 == 0 || *esi_2 == 0)
        eax_9 = 0
    else
        eax_9 = *(sub_4c4060(&var_18) + 8)
    
    *(arg1 + 0x20) = eax_9 + 1
    int128_t* eax_13 = sub_4cce80(eax_9 + 1)
    *(arg1 + 0x24) = eax_13
    char* ecx_1 = &data_83f3d3
    
    if (esi_2 != 0)
        ecx_1 = esi_2
    
    sub_5ab990(eax_13, ecx_1, *(arg1 + 0x20))
    var_8_1.b = 0
    void* result
    
    if (esi_2 != 0 && *esi_2 != 0)
        result = sub_4c4060(&var_18)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_4 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_4), esi_4)
            edi_1 = var_14
    
    int32_t var_8_2 = 0xffffffff
    
    if (edi_1 != 0 && *edi_1 != 0)
        result = sub_4c4060(&var_14)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_6 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_6), esi_6)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
