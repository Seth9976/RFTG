// 函数名称: sub_519d00
// 虚拟地址: 0x519d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_519d00(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696fc8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_50 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_3c
    __builtin_memset(&var_3c, 0, 0x20)
    int32_t esi = 0
    
    if ((0x8000 & GetKeyState(0x10)) != 0)
        esi = 1
    
    if ((0x8000 & GetKeyState(0x11)) != 0)
        esi |= 2
    
    if ((0x8000 & GetKeyState(0x12)) != 0)
        esi |= 4
    
    int32_t var_34 = esi
    float var_1c
    float* eax_7 = sub_51ae00(&var_1c, arg2, arg3)
    float var_2c = *eax_7
    int32_t var_28 = eax_7[1]
    
    if (arg1 - 0x201 u> 8)
        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsApp.cpp", 0x187, "OnButtonMesage")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t eax_10
    
    switch (arg1)
        case 0x201, 0x203
            eax_10 = 3
        case 0x202
            eax_10 = 4
        case 0x204, 0x206
            eax_10 = 7
        case 0x205
            eax_10 = 8
        case 0x207, 0x209
            eax_10 = 5
        case 0x208
            eax_10 = 6
    
    void* edx_2 = data_27e7fcc
    var_3c = eax_10
    
    if (edx_2 != 0)
        sub_4d7530(eax_10)
        int32_t var_38
        
        if (*(edx_2 + 0x42) == 0 || var_3c != 1 || (var_38 != 0x74 && var_38 != 0x79 && var_38 != 0x7a))
            sub_4d7830()
        else
            sub_4d7330(&var_3c)
    
    int32_t var_8_2 = 0xffffffff
    char* result_1
    char* result = result_1
    
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
