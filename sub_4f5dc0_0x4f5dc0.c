// 函数名称: sub_4f5dc0
// 虚拟地址: 0x4f5dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4f5dc0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t arg5, float arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_8d4 = arg2
    int32_t* var_8d8 = arg3
    int32_t var_818 = 0
    void var_880
    __builtin_memcpy(&var_880, 
        sub_4f62d0(arg5, fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg6)))), arg2), 0x40)
    void* esi_4 = arg5 * 0x118 + *sub_4f4890(arg3)
    
    if (*(esi_4 + 4) != 2)
        sub_4c5870("el.type == UI_TABLE", &data_83f3d3, "UIDef.cpp", 0x27b, "UIElementTableRect")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void var_840
    int32_t* eax_7 = sub_4f4990(&var_880, &var_840, esi_4 + 0x1c, &var_840, &var_880)
    float var_8d4_2 = fconvert.s(fconvert.t(*(esi_4 + 0x90)))
    int32_t var_82c = eax_7[1]
    float var_8d8_3 = fconvert.s(fconvert.t(*(esi_4 + 0x94)))
    int32_t edx_2 = eax_7[3]
    float var_830 = *eax_7
    float eax_8 = *(esi_4 + 0x88)
    int32_t var_828 = eax_7[2]
    int32_t ecx_3 = *(esi_4 + 0x8c)
    int32_t var_824 = edx_2
    int32_t var_810[0x201]
    int32_t eax_9 = sub_4685f0(eax_8, &var_830, ecx_3, &var_810, ecx_3, eax_8, var_8d8_3)
    int32_t eax_10
    
    if (eax_9 s> 0)
        eax_10 = var_818
    else
        eax_10 = eax_9 - 1
    
    int32_t eax_11 = eax_10 * 2
    *arg4 = var_810[eax_11 * 2]
    arg4[1] = (&__saved_ebp)[eax_11 * 2 - 0x202]
    int32_t ecx_5 = (&__saved_ebp)[eax_11 * 2 - 0x200]
    arg4[2] = (&__saved_ebp)[eax_11 * 2 - 0x201]
    arg4[3] = ecx_5
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}
