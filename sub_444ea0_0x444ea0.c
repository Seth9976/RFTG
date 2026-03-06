// 函数名称: sub_444ea0
// 虚拟地址: 0x444ea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_444ea0(int32_t arg1, float arg2 @ edx, int32_t arg3, float arg4, int32_t arg5, int32_t arg6, int32_t arg7, float arg8, float arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg3 s>= 0x2710)
        sub_4c5870("cardIndex < 10000", &data_83f3d3, "..\code\RFTGClient.cpp", 0x4243, 
            "DrawCardNormal")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_4 = sx.d(*(*(sub_418a10() + arg3 * 0x14 + 0x46c) + 4))
    int32_t eax_5
    int80_t st0
    st0, eax_5 = sub_431730(arg2)
    float var_4c
    __builtin_memcpy(&var_4c, eax_5, 0x40)
    var_4c = fconvert.s(fconvert.t(arg8) + fconvert.t(var_4c))
    float var_48
    float var_48_1 = fconvert.s(fconvert.t(arg9) + fconvert.t(var_48))
    int32_t var_b4 = arg7
    int80_t result = sub_4294a0(arg5, eax_4, &var_4c, fconvert.s(fconvert.t(arg4)), arg5.b, arg6, arg7)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
