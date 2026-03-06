// 函数名称: sub_471300
// 虚拟地址: 0x471300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_471300(int128_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: __chkstk(0x1ed4)
    __chkstk(0x1ed4)
    void* var_8
    void* result = __security_cookie ^ &var_8
    void* result_1 = result
    
    if (arg3 != 4 && arg3 != 3 && arg3 != 2)
        int32_t __saved_ebp
        sub_5ab990(&__saved_ebp, arg1, 0x1ec8)
        char arg_14 = 1
        char arg_15 = arg2.b
        *(*(data_27e7a40 + 0x548) + 0x45844) = &__saved_ebp
        
        if (arg3 - 2 u<= 3 && sub_471280(arg1, arg2) == 0)
            sub_4ad7c0(&__saved_ebp)
        
        int32_t eax_5 = arg2 * 0xb4
        int32_t edx_2 = *(eax_5 + arg1 + 0xc4)
        int32_t __saved_edi
        var_8 = &(&__saved_edi)[arg2 * 0x2d + 0x35]
        int32_t ecx_3 = (&__saved_edi)[arg2 * 0x2d + 0x35]
        
        if (edx_2 s> ecx_3)
            sub_4c5870("g->p[who].choice_size <= sim.p[who].choice_size", &data_83f3d3, 
                "..\code\RFTGShared.cpp", 0x1125, "player_prepare")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ecx_3 - edx_2 s< 0)
            sub_4c5870("choiceLogChange >= 0", &data_83f3d3, "..\code\RFTGShared.cpp", 0x1129, 
                "player_prepare")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ecx_3 - edx_2 s> 0)
            sub_469bd0(arg1, *(eax_5 + arg1 + 0xc0) + (edx_2 << 2))
        
        void* edx_5 = data_27e7a40
        *(eax_5 + arg1 + 0xc4) = *var_8
        result = *(edx_5 + 0x548)
        *(result + 0x45844) = arg1
    
    sub_5a6aba(result_1 ^ &var_8)
    return result
}
