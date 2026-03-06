// 函数名称: sub_4708d0
// 虚拟地址: 0x4708d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4708d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ edi, int32_t arg5, int32_t arg6, int32_t arg7, int32_t* arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: void var_48
    void var_48
    int32_t eax_1 = __security_cookie ^ &var_48
    int32_t ebx = arg6
    void* eax_2 = sub_46b2b0(arg3)
    *(eax_2 + 0x1c) = 0x10
    *(eax_2 + 0x1a08) = *arg8
    int32_t edx = *arg8
    *(eax_2 + 0x1a0c) = edx
    sub_46aca0(eax_2 + 0x1f3c, sub_46aca0(eax_2 + 0xaa4, edx, arg7, *arg8), &arg6, 1)
    
    if (arg10 s< arg9)
        sub_4c5870("max >= min", &data_83f3d3, "..\code\RFTGShared.cpp", 0x1019, "player_choose_good")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *(eax_2 + 0x558) = arg10
    *(eax_2 + 0x554) = arg9
    *(eax_2 + 0xa98) = ebx
    *(eax_2 + 0xa9c) = arg4
    int32_t eax_10 = *(arg5 + ebx * 0x14 + 0x46c)
    int32_t ecx_4 = arg4 * 3
    int32_t edx_3 = *(eax_10 + (ecx_4 << 3) + 0x20)
    int32_t var_44 = *(eax_10 + (ecx_4 << 3) + 0x24)
    int32_t eax_13 = edx_3 & 0x20000
    
    if (eax_13 != 0 || ((edx_3 & 0x40000) | eax_13) != 0)
        eax_13 = 1
    
    *(eax_2 + 0x560) = zx.d(eax_13.b)
    
    if (arg9 != 0)
        void* eax_15 = *(data_27e7a40 + 0x548)
        *(eax_15 + 0x214) = 0
        *(eax_15 + 0x210) = 6
        *(eax_15 + 0x2c078) = 1
        sub_5a6aba(eax_1 ^ &var_48)
        return eax_15
    
    void* eax_14 = data_27e7a40
    void* esi_2 = *(eax_14 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        eax_14 = sub_4d66f0(&var_3c)
    
    *(esi_2 + 0x210) = 2
    *(esi_2 + 0x2c078) = 0
    *(esi_2 + 0x214) = 0
    sub_5a6aba(eax_1 ^ &var_48)
    return eax_14
}
