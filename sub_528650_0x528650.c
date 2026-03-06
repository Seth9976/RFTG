// 函数名称: sub_528650
// 虚拟地址: 0x528650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_528650(void* arg1, int32_t arg2 @ edi, int32_t* arg3)
{
    // 第一条实际指令: *(arg1 + 0x1450)
    *(arg1 + 0x1450)
    void* ebx_1 = sub_526640(arg1 + 0x64, arg3, arg2)
    
    if (ebx_1 == 0)
        int32_t eax_2 = *(arg1 + 0x1450)
        
        if (eax_2 s>= 0xff)
            sub_4c5870("ui.numStates < MAX_STATES", &data_83f3d3, "UI2.cpp", 0xda1, "UI2SetState")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ebx_1 = arg1 + ((eax_2 * 5 + 0x19) << 2)
        *(arg1 + 0x1450) = eax_2 + 1
    
    int32_t* result = sub_4c4510(arg3)
    
    if (arg2 != 0xffffffff)
        *(ebx_1 + 4) = arg2
        *(ebx_1 + 8) = 0
        return result
    
    *(ebx_1 + 4) = *(arg1 + 0x5c)
    *(ebx_1 + 8) = 0
    return result
}
