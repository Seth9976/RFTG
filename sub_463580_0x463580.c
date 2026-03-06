// 函数名称: sub_463580
// 虚拟地址: 0x463580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_463580(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: void* result
    void* result
    int32_t edx
    result, edx = sub_4637c0(arg1, arg2, arg3, 0)
    
    if (*result s< *(result + 4))
        void* eax = sub_4637c0(result, edx, arg3, 0)
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(*eax)
        int32_t eax_4 = (eax_2 + (edx_1 & 3)) s>> 2
        int32_t edx_3 = *(eax + (eax_4 << 2) + 0x10)
        
        if (edx_3 s< 0)
            sub_49b2a0()
            noreturn
        
        if (edx_3 s> 0x64)
            sub_49b2a0()
            noreturn
        
        int32_t eax_5 = *(eax + ((eax_4 + edx_3 + 3) << 2) + 8)
        
        if (eax_5 s< 0)
            sub_49b2a0()
            noreturn
        
        if (eax_5 s> 0x64)
            sub_49b2a0()
            noreturn
        
        if (eax_5 + eax_4 + edx_3 + 3 + 1 s<= eax_4)
            sub_4c5870("choice > choicePrev", &data_83f3d3, "..\code\RFTGClient.cpp", 0x68c8, 
                "RftGRedo")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_7 = (eax_5 + eax_4 + edx_3 + 3 + 1) << 2
        
        if (eax_7 s> *(eax + 4))
            sub_4c5870("choice * 4 <= playerGamestate.logLengthBytesTotal", &data_83f3d3, 
                "..\code\RFTGClient.cpp", 0x68c9, "RftGRedo")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *eax = eax_7
        *(sub_418a10() + arg1 * 0xb4 + 0xc4) = eax_5 + eax_4 + edx_3 + 3 + 1
        *(sub_46b2b0(arg1) + 8) = 0
        result = data_27e7a40
        *(*(result + 0x548) + 0x2c0a1) = 1
    
    return result
}
