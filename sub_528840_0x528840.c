// 函数名称: sub_528840
// 虚拟地址: 0x528840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_528840(int32_t arg1 @ edi, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t edx
    void* eax = sub_530500(ecx, edx)
    *(eax + 0x1450)
    void* ebx_1 = sub_526640(eax + 0x64, arg2, arg1)
    
    if (ebx_1 == 0)
        int32_t eax_3 = *(eax + 0x1450)
        
        if (eax_3 s>= 0xff)
            sub_4c5870("ui.numStates < MAX_STATES", &data_83f3d3, "UI2.cpp", 0xdda, "UI2SetText")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ebx_1 = eax + ((eax_3 * 5 + 0x19) << 2)
        *(eax + 0x1450) = eax_3 + 1
    
    sub_4c4510(arg2)
    *(ebx_1 + 4) = arg1
    *(ebx_1 + 8) = 3
    return sub_4c4510(arg3)
}
