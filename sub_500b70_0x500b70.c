// 函数名称: sub_500b70
// 虚拟地址: 0x500b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void** __convention("regparm")sub_500b70(void** arg1, int32_t arg2, void* arg3, void** arg4 @ esi, char arg5)
{
    // 第一条实际指令: if ((arg5 & 0x20) != 0)
    if ((arg5 & 0x20) != 0)
        if (arg1 == 0)
            sub_4c5870("pAttribTable", &data_83f3d3, "DefParseTree.cpp", 0xc6, "DefParseReadEnum")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* const ecx = *(arg3 + 4)
        
        if (ecx == 0)
            ecx = &data_83f3d3
        
        arg1 = sub_531300(arg1, ecx)
        
        if (arg1 != 0xffffffff)
            *arg4 = arg1
            arg1.b = 1
            return arg1
    else if (arg1 != 0)
        char* const ecx_1 = *(arg3 + 4)
        
        if (ecx_1 == 0)
            ecx_1 = &data_83f3d3
        
        arg1 = sub_554a60(arg1, ecx_1)
        
        if (arg1 != 0)
            *arg4 = *arg1
            void* eax_1
            eax_1.b = 1
            return eax_1
    
    arg1.b = 0
    return arg1
}
