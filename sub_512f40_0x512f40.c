// 函数名称: sub_512f40
// 虚拟地址: 0x512f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_512f40(int32_t arg1, int32_t arg2, void* arg3, int128_t** arg4)
{
    // 第一条实际指令: int32_t eax = *(arg3 + 0x148)
    int32_t eax = *(arg3 + 0x148)
    
    if (eax s> 0)
        int128_t* eax_3 = *arg4
        
        if (eax_3 == 0)
            eax_3 = &data_83f3d3
        
        return sub_4c4620(arg3 + (*(arg3 + (eax << 2) + 0x104) << 3) + 8, eax_3)
    
    sub_4c5870("emitResults.currentFunctionStackDepth > 0", &data_83f3d3, "MaterialFnDef.cpp", 0x35d, 
        "EmitFnEndLine")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
